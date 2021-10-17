# Using Colors In Text Mode

Generally in any program, we work with only two colors i.e **BLACK and WHITE**. **BLACK** color is used in background and **WHITE** color is used in the foreground or while printing the character.

**BY DEFAULT**:
All the compilers use black and white colors while executing the code. But in **C Language** we can use more colors to make our program **more attractive** and **presentable**.

- A **total of 15 colors** are defined in the **C Language** and they have their **own values** which can be used while **function calling**.

**The list of colors and their values are:**

``` cpp
  COLORS                     VALUES
  
  BLACK                        0
  BLUE                         1
  GREEN                        2
  CYAN                         3
  RED                          4
  MAGENTA                      5
  BROWN                        6
  LIGHTGRAY                    7
  DARKGRAY                     8
  LIGHTBLUE                    9
  LIGHTGREEN                   10
  LIGHTCYAN                    11
  LIGHTRED                     12
  LIGHTMAGENTA                 13      
  YELLOW                       14
  WHITE                        15
  ```

#### NOTE: IT IS IMPORTANT TO USE HEADER FILE <conio.h> IN THE PROGRAM TO USE THESE COLORS! :)

The Two Basic Functions that are declared in Header File **<conio.h>** for using **colors in text mode** are:

``` cpp
textcolor(int color);
textbackground(int color);
```

### textcolor(int color):
It sets the color of the character which is in Text Mode. 

### textbackground(int color):
It sets the background color of the character which is in Text Mode.

#### NOTE: We just need to pass the color or it's value to do so! :)

### SYNTAX:

``` cpp
textcolor( RED);
textbackground (YELLOW);
```

OR

``` cpp
textcolor( 4 );
textbackground ( 14 );
```

### CODE EXAMPLE:

``` cpp
#include <conio.h>
#include <stdio.h>
void main()
{
  clrscr();
  textbackground( 10 );
  textcolor( RED );
  cprintf("Welcome to colors in Text Mode \n");
  textcolor( YELLOW );
  cprintf("Girlscript Winter Of Contributing!");
  getch();
}
```

### OUTPUT OF THE CODE BLOCK:
![image](https://user-images.githubusercontent.com/89743157/137187368-9259ca17-d215-4bfa-acab-58f64b722e18.png)

