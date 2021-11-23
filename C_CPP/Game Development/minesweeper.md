Minesweeper is a single-player puzzle video game. The objective of the game is to clear a rectangular board containing hidden "mines" or bombs without detonating any of them, with help from clues about the number of neighbouring mines in each field.



struct minesweeper {
	unsigned char *grid;
	int width;
	int height;
};

void ms_init(struct minesweeper *ms, int mines);
int ms_get(struct minesweeper *ms, int x, int y);
void ms_flag(struct minesweeper *ms, int x, int y);
int ms_poke(struct minesweeper *ms, int x, int y);

/* -------------------------------------------------------------------------- */

#include <stdlib.h>

#define FLAG 0x80

void ms_init(struct minesweeper *ms, int mines)
{
	int n;

	n = ms->width * ms->height;
	while (n > 0)
		if (rand() / (double) RAND_MAX > (double) mines/n--)
			ms->grid[n] = ' ';
		else {
			ms->grid[n] = '*';
			mines--;
		}
}

static int get(struct minesweeper *ms, int x, int y)
{
	if (x < 0 || x >= ms->width || y < 0 || y >= ms->height)
		return 0;
	return ms->grid[y*ms->width + x];
}

int ms_get(struct minesweeper *ms, int x, int y)
{
	int c;

	c = get(ms, x, y);
	return (c == 0) ? '?' : (c & FLAG) ? 'F' : c;
}

void ms_flag(struct minesweeper *ms, int x, int y)
{
	int c;

	c = get(ms, x, y) & ~FLAG;
	if (c == ' ' || c == '*')
		ms->grid[y*ms->width + x] ^= FLAG;
}

static void uncover(struct minesweeper *ms, int x, int y)
{
	int nbr[][2] = {
		{ -1, -1 },  {  0, -1 },  { +1, -1 },
		{ -1,  0 },               { +1,  0 },
		{ -1, +1 },  {  0, +1 },  { +1, +1 },
	};
	int i, n;

	if (ms_get(ms, x, y) != ' ')
		return;
	n = 0;
	for (i = 0; i < sizeof nbr / sizeof *nbr; i++)
		if ((get(ms, x + nbr[i][0], y + nbr[i][1]) & ~FLAG) == '*')
			n++;
	ms->grid[y*ms->width + x] = n + '0';
	if (n == 0) {
		for (i = 0; i < sizeof nbr / sizeof *nbr; i++)
			uncover(ms, x + nbr[i][0], y + nbr[i][1]);
	}
}

int ms_poke(struct minesweeper *ms, int x, int y)
{
	int i;

	if (ms_get(ms, x, y) == '*')
		return -1;
	uncover(ms, x, y);
	for (i = 0; i < ms->width * ms->height; i++)
		if (ms->grid[i] == ' ')
			return 0;
	return +1;
}

/* -------------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <termbox.h>

static int setup(int width, int height, int minepcnt);

int main(int argc, char *argv[])
{
	int width, height, minepcnt;
	int i;

	width = 32;
	height = 22;
	minepcnt = 15;
	for (i = 1; i < argc; i++)
		if (strcmp(argv[i], "-d") == 0 && i+1 < argc)
			sscanf(argv[++i], "%dx%d", &width, &height);
		else if (strcmp(argv[i], "-m") == 0 && i+1 < argc)
			sscanf(argv[++i], "%d", &minepcnt);
		else {
			fprintf(stderr,
			        "usage: minesweeper [-d wxh] [-m mine%%]\n");
			return EXIT_FAILURE;
		}
	return setup(width, height, minepcnt) ? EXIT_FAILURE : EXIT_SUCCESS;
}

static int minesweeper(struct minesweeper *ms);

int setup(int width, int height, int minepcnt)
{
	struct minesweeper ms;

	if (tb_init()) {
		fprintf(stderr, "minesweeper: can't open display\n");
		return -1;
	}
	atexit(tb_shutdown);
	tb_select_input_mode(TB_INPUT_MOUSE);

	ms.grid = malloc(width * height);
	if (ms.grid == NULL) {
		fprintf(stderr, "minesweeper: can't allocate memory\n");
		return -1;
	}
	ms.width = width;
	ms.height = height;
	srand(time(NULL));
	do {
		ms_init(&ms, minepcnt / 100.0 * (ms.width * ms.height));
	} while (minesweeper(&ms));
	free(ms.grid);
	return 0;
}

static void draw(struct minesweeper *ms, int sel, int state);

static int next(struct minesweeper *ms, int sel, int xi, int yi)
{
	int c, x, y;

	x = sel % ms->width;
	y = sel / ms->width;
	while (x >= 0 && x < ms->width && y >= 0 && y < ms->height) {
		x += xi;
		y += yi;
		c = ms_get(ms, x, y);
		if (c == ' ' || c == '*' || c == 'F')
			return y*ms->width + x;
	}
	for (sel = 0; sel < ms->width*ms->height; sel++) {
		c = ms_get(ms, sel % ms->width, y / ms->height);
		if (c == ' ' || c == '*' || c == 'F')
			return sel;
	}
	return -1;
}

static int mouse(struct minesweeper *ms, int *sel, int key, int x, int y)
{
	static int last;

	if (key == TB_KEY_MOUSE_LEFT || key == TB_KEY_MOUSE_RIGHT) {
		x -= tb_width()/2 - ms->width;
		y -= tb_height()/2 - ms->height/2;
		x /= 2;
		if (x < 0 || x >= ms->width || y < 0 || y >= ms->height)
			*sel = -1;
		else
			*sel = y*ms->width + x;
		last = key;
	}
	if (key == TB_KEY_MOUSE_RELEASE && last == TB_KEY_MOUSE_LEFT)
		return ms_poke(ms, *sel % ms->width, *sel / ms->width);
	if (key == TB_KEY_MOUSE_RELEASE && last == TB_KEY_MOUSE_RIGHT)
		ms_flag(ms, *sel % ms->width, *sel / ms->width);
	if (key == TB_KEY_MOUSE_RELEASE)
		last = 0;
	return 0;
}

int minesweeper(struct minesweeper *ms)
{
	struct tb_event ev;
	int sel, r;

	sel = -1;
	r = 0;
	while (draw(ms, sel, r), tb_poll_event(&ev) > 0) {
		if (ev.type == TB_EVENT_MOUSE && r == 0)
			r = mouse(ms, &sel, ev.key, ev.x, ev.y);
		if (ev.type != TB_EVENT_KEY)
			continue;
		if (ev.key == TB_KEY_CTRL_C)
			return 0;
		if (r != 0)
			break;
		if (ev.key == TB_KEY_ARROW_RIGHT)
			sel = next(ms, sel, +1,  0);
		if (ev.key == TB_KEY_ARROW_LEFT)
			sel = next(ms, sel, -1,  0);
		if (ev.key == TB_KEY_ARROW_UP)
			sel = next(ms, sel,  0, -1);
		if (ev.key == TB_KEY_ARROW_DOWN && sel/ms->width<ms->height-1)
			sel = next(ms, sel,  0, +1);
		if (ev.key == TB_KEY_SPACE)
			r = ms_poke(ms, sel % ms->width, sel / ms->width);
		if (ev.key == '\r')
			ms_flag(ms, sel % ms->width, sel / ms->width);
	}
	return 1;
}

static int ch(int *fg, int *bg, int c, int selected, int state)
{
	int number[] = {
		' ', 0x2460, 0x2461, 0x2462, 0x2463, 0x2464,
		0x2465, 0x2466, 0x2467, 0x2468
	};
	int smile = 0x263b;
	int block = 0x25a0;
	int flag = 0x2691;
	int mine = 0x2734;

	*fg = *bg = 0;
	if (state < 0 && c == '*') {
		*bg = selected ? TB_RED : 0;
		*fg = TB_BLACK;
		return mine;
	}
	if (state > 0 && (c == 'F' || c == '*')) {
		*fg = TB_YELLOW;
		return smile;
	}
	if (c == ' ' || (state == 0 && c == '*')) {
		*fg = selected ? TB_GREEN : TB_WHITE;
		return block;
	}
	if (c == 'F') {
		*bg = selected ? TB_GREEN : TB_WHITE;
		*fg = TB_RED;
		return flag;
	}
	if (c >= '0' && c <= '9') {
		*fg = c - '0';
		return number[c - '0'];
	}
	return '?';
}

void draw(struct minesweeper *ms, int sel, int state)
{
	int i, x, y, sx, sy;
	int c, fg, bg;

	tb_clear();
	for (i = 0; i < ms->width * ms->height; i++) {
		sx = i % ms->width;
		sy = i / ms->width;
		c = ch(&fg, &bg, ms_get(ms, sx, sy), (sel == i), state);
		x = tb_width()/2 - ms->width + sx*2;
		y = tb_height()/2 - ms->height/2 + sy;
		tb_change_cell(x+0, y, c, fg, bg);
		tb_change_cell(x+1, y, ' ', fg, bg);
	}
	tb_present();
}