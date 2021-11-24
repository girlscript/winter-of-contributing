# Terminal_Games

## Tetris:

Tetris helps in developing thinking and learning skills in the majority of players. The increase in the thickness of the cortex is related to the increase in the brain's gray matter. Therefore, I am more and more becoming a better Tetris player as the level of my IQ increases as time passes by.Tetris is primarily composed of a field of play in which pieces of different geometric forms, called "tetriminos", descend from the top of the field

Now we will code the game in C language:

```

enum {
	TETRIS_GW = 10,
	TETRIS_GH = 20,
	TETRIS_NW = 4,
	TETRIS_NH = 4,
	TETRIS_LEFT = -1,
	TETRIS_RIGHT = +1
};

struct tetris {
	int x;
	int y;
	unsigned char this[TETRIS_NW * TETRIS_NH];
	unsigned char next[TETRIS_NW * TETRIS_NH];
	unsigned char game[TETRIS_GW * TETRIS_GH];
};

int tetris(struct tetris *t);
int tetris_shift(struct tetris *t, int n);
int tetris_rotate(struct tetris *t, int n);

```

```

#include <stdlib.h>
#include <string.h>

enum {
	NSHAPE = 7,
	NROTATION = 4
};

static unsigned char shape[NSHAPE][NROTATION][TETRIS_NW * TETRIS_NH];

static int collision(unsigned char *game, int sx, int sy, unsigned char *this)
{
	int i, x, y;

	for (i = 0; i < TETRIS_NW*TETRIS_NH; i++) {
		if (this[i] == 0)
			continue;
		x = sx + i%TETRIS_NW;
		y = sy + i/TETRIS_NW;
		if (x < 0 || x >= TETRIS_GW || y >= TETRIS_GH)
			return 1;
		if (y >= 0 && game[y*TETRIS_GW + x] != 0)
			return 1;
	}
	return 0;
}

int tetris_shift(struct tetris *t, int n)
{
	if (collision(t->game, t->x+n, t->y, t->this))
		return -1;
	t->x += n;
	return 0;
}

static int getshape(int *s, int *r, unsigned char *this)
{
	int i;

	for (i = 0; i < NSHAPE*NROTATION; i++) {
		*s = i / NROTATION;
		*r = i % NROTATION;
		if (memcmp(shape[*s][*r], this, TETRIS_NW*TETRIS_NH) == 0)
			return 0;
	}
	return -1;
}

int tetris_rotate(struct tetris *t, int n)
{
	int s, r;

	if (getshape(&s, &r, t->this))
		return -1;
	r += n;
	r = (r < 0) ? NROTATION - (-r % NROTATION) : r % NROTATION;
	if (collision(t->game, t->x, t->y, shape[s][r])) {
		if (!collision(t->game, t->x+1, t->y, shape[s][r]))
			t->x++;
		else if (!collision(t->game, t->x-1, t->y, shape[s][r]))
			t->x--;
		else
			return -1;
	}
	memcpy(t->this, shape[s][r], TETRIS_NW*TETRIS_NH);
	return 0;
}

static int allnull(unsigned char *p, int n)
{
	int i;

	for (i = 0; i < n; i++)
		if (p[i] != 0)
			return 0;
	return 1;
}

static void copy(unsigned char *to, int sx, int sy, unsigned char *from)
{
	int i, x, y;

	for (i = 0; i < TETRIS_NW*TETRIS_NH; i++) {
		if (from[i] == 0)
			continue;
		x = sx + i%TETRIS_NW;
		y = sy + i/TETRIS_NW;
		if (x < 0 || x >= TETRIS_GW || y < 0 || y >= TETRIS_GH)
			continue;
		to[y*TETRIS_GW + x] = from[i];
	}
}

static int anynull(unsigned char *p, int n)
{
	int i;

	for (i = 0; i < n; i++)
		if (p[i] == 0)
			return 1;
	return 0;
}

static int lines(struct tetris *t)
{
	int n, y;

	n = 0;
	for (y = 0; y < TETRIS_GH; y++)
		if (!anynull(t->game + y*TETRIS_GW, TETRIS_GW)) {
			n++;
			memmove(t->game + TETRIS_GW, t->game, y * TETRIS_GW);
		}
	memset(t->game, 0, n * TETRIS_GW);
	return n;
}

int tetris(struct tetris *t)
{
	if (allnull(t->next, sizeof t->next))
		memcpy(t->next, shape[rand() % NSHAPE][0], sizeof t->next);
	if (allnull(t->this, sizeof t->this)) {
		memcpy(t->this, t->next, sizeof t->next);
		memcpy(t->next, shape[rand() % NSHAPE][0], sizeof t->next);
		t->y = -1;
		t->x = TETRIS_GW/2 - 2;
		return collision(t->game, t->x, t->y, t->this) ? -2 : -1;
	}
	if (!collision(t->game, t->x, t->y+1, t->this)) {
		t->y++;
		return -1;
	}
	copy(t->game, t->x, t->y, t->this);
	memset(t->this, 0, sizeof t->this);
	return lines(t);
}

static unsigned char shape[NSHAPE][NROTATION][TETRIS_NW * TETRIS_NH] = {
	/* I */
	{
		"\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0",
		"\0\0\0\0\1\1\1\1\0\0\0\0\0\0\0\0",
		"\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0",
		"\0\0\0\0\1\1\1\1\0\0\0\0\0\0\0\0",
	},
	/* O */
	{
		"\0\0\0\0\0\2\2\0\0\2\2\0\0\0\0\0",
		"\0\0\0\0\0\2\2\0\0\2\2\0\0\0\0\0",
		"\0\0\0\0\0\2\2\0\0\2\2\0\0\0\0\0",
		"\0\0\0\0\0\2\2\0\0\2\2\0\0\0\0\0",
	},
	/* S */
	{
		"\0\3\0\0\0\3\3\0\0\0\3\0\0\0\0\0",
		"\0\0\0\0\0\3\3\0\3\3\0\0\0\0\0\0",
		"\0\3\0\0\0\3\3\0\0\0\3\0\0\0\0\0",
		"\0\0\0\0\0\3\3\0\3\3\0\0\0\0\0\0",
	},
	/* Z */
	{
		"\0\0\4\0\0\4\4\0\0\4\0\0\0\0\0\0",
		"\0\0\0\0\0\4\4\0\0\0\4\4\0\0\0\0",
		"\0\0\4\0\0\4\4\0\0\4\0\0\0\0\0\0",
		"\0\0\0\0\0\4\4\0\0\0\4\4\0\0\0\0",
	},
	/* T */
	{
		"\0\0\5\0\0\5\5\5\0\0\0\0\0\0\0\0",
		"\0\0\5\0\0\0\5\5\0\0\5\0\0\0\0\0",
		"\0\0\0\0\0\5\5\5\0\0\5\0\0\0\0\0",
		"\0\0\5\0\0\5\5\0\0\0\5\0\0\0\0\0",
	},
	/* L */
	{
		"\0\6\6\0\0\0\6\0\0\0\6\0\0\0\0\0",
		"\0\0\0\6\0\6\6\6\0\0\0\0\0\0\0\0",
		"\0\0\6\0\0\0\6\0\0\0\6\6\0\0\0\0",
		"\0\0\0\0\0\6\6\6\0\6\0\0\0\0\0\0",
	},
	/* J */
	{
		"\0\0\7\7\0\0\7\0\0\0\7\0\0\0\0\0",
		"\0\0\0\0\0\7\7\7\0\0\0\7\0\0\0\0",
		"\0\0\7\0\0\0\7\0\0\7\7\0\0\0\0\0",
		"\0\7\0\0\0\7\7\7\0\0\0\0\0\0\0\0",
	},
};

```

```

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include <termbox.h>

struct stats {
	long hiscore;
	long level;
	long lines;
	long score;
};

long play(int level, long hiscore);

int main(int argc, char *argv[])
{
	long level, hiscore, r;

	level = (argc == 2) ? atoi(argv[1]) : 1;
	if (argc > 2 || level < 1 || level > 10) {
		fprintf(stderr, "usage: tetris [level]\n");
		return EXIT_FAILURE;
	}
	srand(time(NULL));
	if (tb_init()) {
		fprintf(stderr, "tetris: can't open display\n");
		return EXIT_FAILURE;
	}
	tb_select_input_mode(TB_INPUT_ALT);
	atexit(tb_shutdown);
	hiscore = 0;
	while ((r = play(level, hiscore)) >= 0)
		if (r > hiscore)
			hiscore = r;
	return 0;
}

void draw(struct tetris *t, struct stats *s);
int input(struct tetris *t, int *drop, int *pause);

static int update(struct tetris *t, struct stats *s, int drop)
{
	int score[] = { 0, 40, 100, 300, 1200 };
	int r;

	while ((r = tetris(t)) == -1 && drop)
		;
	if (r < -1)
		return -1;
	if (r >= 0) {
		s->lines += r;
		s->score += score[r] * s->level;
		s->level += (s->lines/10 + 1 > s->level && s->level < 10);
	}
	if (s->score > s->hiscore)
		s->hiscore = s->score;
	return 0;
}

long play(int level, long hiscore)
{
	unsigned long frame;
	struct tetris t;
	struct stats s;
	int drop, pause;

	memset(&t, 0, sizeof t);
	memset(&s, 0, sizeof s);
	s.level = level;
	s.hiscore = hiscore;
	frame = pause = 0;
	while (drop = 0, !input(&t, &drop, &pause)) {
		if (!pause && (frame++ % (1 + 2*(11 - s.level)) == 0 || drop)
		 && update(&t, &s, drop))
			return s.score;
		draw(&t, &s);
		usleep(1000000 / 30);
	}
	return -1;
}

int input(struct tetris *t, int *d, int *p)
{
	struct tb_event ev;
	int r;

	while ((r = tb_peek_event(&ev, 0)) > 0) {
		if (r != TB_EVENT_KEY)
			continue;
		if (ev.key == TB_KEY_CTRL_C)
			return -1;
		if (ev.key == TB_KEY_SPACE)
			*d = 1;
		if (!*p && ev.key == TB_KEY_ARROW_LEFT)
			tetris_shift(t, TETRIS_LEFT);
		if (!*p && ev.key == TB_KEY_ARROW_RIGHT)
			tetris_shift(t, TETRIS_RIGHT);
		if (!*p && ev.key == TB_KEY_ARROW_UP)
			tetris_rotate(t, TETRIS_RIGHT);
		if (!*p && ev.key == TB_KEY_ARROW_DOWN)
			tetris_rotate(t, TETRIS_LEFT);
		if (ev.ch == 'p')
			*p = !*p;
	}
	return 0;
}

enum {
	VW = 2 + TETRIS_GW*2 + 2  + 4 +  24,
	VH = 1 + TETRIS_GH + 1
};

static void set(int x, int y, int c, int fg, int bg)
{
	int dx, dy;

	dx = tb_width()/2 - VW/2 + x;
	dy = tb_height()/2 - VH/2 + y;
	tb_change_cell(dx, dy, c, fg, bg);
}

void draw_game(struct tetris *t);
void draw_preview(struct tetris *t);
void draw_stats(struct stats *s);

void draw(struct tetris *t, struct stats *s)
{
	tb_clear();
	draw_game(t);
	draw_preview(t);
	draw_stats(s);
	tb_present();
}

static void draw_block(int x, int y, int c)
{
	int i;

	for (i = 0; i < 2; i++)
		set(x + i, y, ' ', 0, c + TB_BLACK);
}

static void draw_square(int w, int h, int x, int y, int c)
{
	int i;

	for (i = 0; i < w; i++) {
		draw_block(x + i*2, y, c);
		draw_block(x + i*2, y + h - 1, c);
	}
	for (i = 1; i < h-1; i++) {
		draw_block(x, y + i, c);
		draw_block(x + w*2 - 2, y + i, c);
	}
}

void draw_game(struct tetris *t)
{
	int yofft = 1;
	int xofft = 2;
	int i, x, y;

	draw_square(TETRIS_GW + 2, TETRIS_GH + 2, 0, 0, 7);
	for (i = 0; i < TETRIS_GW*TETRIS_GH; i++) {
		x = i % TETRIS_GW;
		y = i / TETRIS_GW;
		draw_block(xofft + x*2, yofft + y, t->game[i]);
	}
	for (i = 0; i < TETRIS_NW*TETRIS_NH; i++) {
		x = t->x + i%TETRIS_NW;
		y = t->y + i/TETRIS_NW;
		if (x < 0 || y < 0 || x >= TETRIS_GW || y >= TETRIS_GH)
			continue;
		if (t->this[i] > 0)
			draw_block(xofft + x*2, yofft + y, t->this[i]);
	}
}

void draw_preview(struct tetris *t)
{
	int xofft = 2 + TETRIS_GW*2 + 2 + 4 + 2;
	int yofft = 1;
	int i, x, y;

	draw_square(TETRIS_NW + 2, TETRIS_NH + 2, xofft - 2, 0, 7);
	for (i = 0; i < TETRIS_NW*TETRIS_NH; i++) {
		x = i % TETRIS_NW;
		y = i / TETRIS_NW;
		draw_block(xofft + x*2, yofft + y, t->next[i]);
	}
}

static void draw_str(int x, int y, char *s)
{
	int i;

	for (i = 0; i <= VW-x && s[i] != '\0'; i++)
		set(x + i, y, s[i], 0, 0);
}

void draw_stats(struct stats *s)
{
	int xofft = 2 + TETRIS_GW*2 + 2 + 4;
	int yofft = 1 + TETRIS_NH + 1 + 2;
	char str[256];

	sprintf(str, "hi-score: %8ld", s->hiscore);
	draw_str(xofft, yofft+0, str);
	sprintf(str, "score:    %8ld", s->score);
	draw_str(xofft, yofft+2, str);
	sprintf(str, "lines:    %8ld", s->lines);
	draw_str(xofft, yofft+4, str);
	sprintf(str, "level:    %8ld", s->level);
	draw_str(xofft, yofft+6, str);
}

```

 ### Output:

```

 https://en.wikipedia.org/wiki/File:Tetris_Game_4-Line_Clear.gif

 ```