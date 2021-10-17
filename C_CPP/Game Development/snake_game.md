# SNAKE GAME 🐍 
Everyone has played snake game once in their childhood. I tried to make this game using C++. The logic is simple the program will excute in a loop until Over becomes true it will first call setup which set the game like head of the sanke, first snake position then in a lop it calls draw which draws the snake head first and if snake eats fruit then it will add one tail to snake then it takes input from the user to control the sanke and then comes most important part logic which makes tail to follow head and change the coordinates of the sanke according tothe controls and checks if snae has eaten the fruit or not. In the logic part only there is check part which checks the rules like snake doesn't hit the wall, it doesn't bite its tail if anything happens from this the game will be over. Here, is the code :
<br><b>
```c++
#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
bool Over; //to exit the game whenever it breaks the rule
const int width = 50; // width of the playground
const int height = 40; //height of playground
int x, y, fruitX, fruitY, score; //coordinates 
int X[100], Y[100]; //tail coordiantes
int n; //tail count
enum eDirecton { STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirecton dir;
void Setup()
{
    Over = false; 
    dir = STOP;
    x = width / 2;  // to put sanke middle of the window
    y = height / 2;
    fruitX = rand() % width; // to randomly place the fruit in the window
    fruitY = rand() % height;
    score = 0;
}
void Draw()
{
    system("cls"); //system("clear")
    for (int i = 0; i < width+2; i++)
        cout << "#"; //broder
    cout << endl;
 
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (j == 0)
                cout << "#"; //broder
            if (i == y && j == x)
                cout << "O"; //snake head
            else if (i == fruitY && j == fruitX)
                cout << "F"; //fruit
            else
            {
                bool print = false;
                for (int k = 0; k < n; k++)
                {
                    if (X[k] == j && Y[k] == i)
                    {
                        cout << "o"; //sanke tail
                        print = true;
                    }
                }
                if (!print)
                    cout << " ";
            }
                 
 
            if (j == width - 1)
                cout << "#";
        }
        cout << endl;
    }
 
    for (int i = 0; i < width+2; i++)
        cout << "#";
    cout << endl;
    cout << "Score:" << score << endl;
}
void Input()
{
    if (_kbhit()) //if key is pressed then 
    {
        switch (_getch()) // get the character from the input 
        {
        case 'l': // l for left direction
            dir = LEFT;
            break;
        case 'r':  //r for right direction 
            dir = RIGHT;
            break;
        case 'u':  //u for up direction 
            dir = UP;
            break;
        case 'd': // d for down 
            dir = DOWN;
            break;
        case 'o': //exit the game
            gameOver = true;
            break;
        }
    }
}
void Logic()
{
    int prevX = tailX[0]; //storing coordinates of head
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;
    for (int i = 1; i < n; i++)
    {
        prev2X = tailX[i]; //new tail 'o' should follow its head 'o'
        prev2Y = tailY[i]; // o--follow-->o--follow-->o--follow-->O
        X[i] = prevX; 
        Y[i] = prevY;
        prevX = prev2X; // storing the value to be followed 
        prevY = prev2Y;
    }
    switch (dir)
    {
    case LEFT:
        x--;
        break;
    case RIGHT:
        x++;
        break;
    case UP:
        y--;
        break;
    case DOWN:
        y++;
        break;
    default:
        break;
    }
    if(x > width || x < 0 || y > height || y < 0) //if sanke head touches the broder then game will end
        Over = true;
    for (int i = 0; i < n; i++)
        if (X[i] == x && Y[i] == y) // if sanke bites its own tail then game will end
            Over = true;
 
    if (x == fruitX && y == fruitY) //sanke eats the fruit
    {
        score += 10;
        fruitX = rand() % width;
        fruitY = rand() % height;
        n++;
    }
}
int main()
{
    Setup();
    while (!Over) //execute it until it is over.
    {
        Draw();
        Input();
        Logic();
        Sleep(30);
    }
    return 0;
}
```
## controls
```
 l-->LEFT
 r-->RIGHT
 u-->UP
 d-->DOWN
```
## output
![Select C__Users_Windows 10_3D Objects_k exe 09-10-2021 22_39_29](https://user-images.githubusercontent.com/67778565/136667950-d8e501d2-087f-44bc-96df-302d31a2c81b.png)
<br>
![C__Users_Windows 10_3D Objects_k exe 09-10-2021 22_40_36](https://user-images.githubusercontent.com/67778565/136667997-2c6732f0-7e4e-43b0-abbb-5fffcabcd013.png)


