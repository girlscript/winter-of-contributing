# SUPERBALL GAME

### CODE:

                                    #include<graphics.h>
                                    #include<process.h> 
                                    #include<dos.h> 
                                    #include<conio.h>
                                    void main()
                                    {
                                          char str[3];
                                          int SCORE[1] ;                         // To count the score
                                          int x=300,y=415;                       // To maintain the dimensions
                                          int flag=0,left=0,j ,k, m=0 ,n=0; 
                                          int i=250,ch,gd=DETECT,gm;
                                          initgraph(&gd,&gm,"C:\\TurboC3\\BGI"); 
                                          setbkcolor(BLUE);                      // To set background as blue
                                          phirse:
                                          setcolor(RED); 
                                          setfillstyle(SOLID_FILL,RED);         // To fill red colour to the circular ball
                                          for(k= 0 ; k<50;k++)
                                          {
                                                clearviewport();
                                                circle(85+m,84+n,20); 
                                                floodfill(85+m,84+n,RED);
                                                if(m<500&&n<250)
                                                {
                                                      m=m+10;
                                                      n=n+15;
                                                      delay(30);
                                                } 
                                                else
                                                {
                                                      m = m+5;
                                                      n = n-50;
                                                      delay(100);
                                                }
                                          }
                                          for(k=0;k<50 ;k++)
                                          {
                                                settextstyle(7,0,5);       //To set text style using settextstyle() function
                                                delay(5);
                                                moveto(230,200);
                                                setcolor(RED);
                                                outtext("SuperBall");      // Text to be displayed on the screen
                                                delay(5);
                                                moveto(230,200);
                                                setcolor(BLUE);
                                                outtext("SuperBall");
                                                delay(5);
                                                moveto(230,200);
                                                setcolor(YELLOW);
                                                outtext("SuperBall");
                                                delay(5);
                                                moveto(230,200);
                                                setcolor(WHITE);
                                                outtext("SuperBall");
                                                setcolor(WHITE);
                                                delay(5);        /*settextstyle(7,0,4); outtextxy(250,220,"SuperBall"); settextstyle(2,0,5); */               
                                          }
                                          settextstyle(2,0,5);
                                          outtextxy(220,400,"DO YOU WANT TO PLAY THE GAME"); 
                                          outtextxy(320,420,"(Y/N)");
                                          ch=getch();
                                          if(ch==89||ch==121)
                                          goto aage;
                                          if(ch==27)
                                          return;
                                          if(ch==110||ch==78)
                                          return;
                                          else
                                          return;
                                          aage:
                                          i=250;
                                          x=300;
                                          y=415;
                                          flag=0;
                                          left=0;
                                          SCORE[0] = 0;
                                          while(1)
                                          {
                                               circle(x,y,15);
                                               bar(i,430,i+100,440);
                                               line(10,20,getmaxx()-10,20);
                                               line(10,20,10,getmaxy()-20);
                                               line(getmaxx()-10,20,getmaxx()-10,getmaxy()-20);
                                               line(10,getmaxy()-20,getmaxx()-10,getmaxy()-20); 
                                               outtextxy(10,5,"Press Esc to Exit..");
                                               outtextxy(130 ,460,"Developer: Kavya Jain");        //To add text out of game frame
                                               if(x>=614||x<=25)
                                               flag=!flag;
                                               if(flag)
                                               x=x-1;
                                               else
                                               x=x+1;
                                               if((y>=416&&x<=i+100&&x>=i)||y<=35)
                                               left=!left;
                                               if(left)
                                               y=y+1;
                                               else
                                               y=y-1;
                                               if(y==415&&x<=i+100&&x>=i) 
                                               SCORE[0]++;                                          // Calculation of score
                                               moveto(600,5);
                                               sprintf
                                               (str,"%d", SCORE[0]);                     
                                               outtext(str);
                                               if(y>=444)
                                               {
                                                    SCORE[0] = 0;
                                                    goto lebel;
                                               }
                                               if(kbhit())
                                               {
                                                    ch=getch(); 
                                                    if(ch==75)          
                                                    {
                                                    if(i!=10)
                                                    i=i-5;                           //move left
                                                    }
                                                    if(ch==77)
                                                    {
                                                    if(i!=530)
                                                    i=i+5;                          //move right
                                                    }
                                                    if(ch==27)
                                                    exit(0);                       //exit when esc pressed
                                               }
                                               delay(5);
                                               cleardevice();
                                               ch=0;
                                          }
                                          lebel:
                                          cleardevice();
                                          setbkcolor(RED); 
                                          outtextxy(330,250, str);
                                          outtextxy(280,240,"GAME OVER");
                                          outtextxy(280,250, "Score:"); 
                                          for( j = 70 ; j<=150 ; j+=10)
                                          { 
                                          circle(320,240,j);
                                          delay(200);
                                          }
                                          outtextxy(220,400,"DO YOU WANT TO PLAY AGAIN");
                                          outtextxy(320,420,"(Y/N)");
                                          m = 0;
                                          n = 0;
                                          ch=getch(); 
                                          if(ch==89||ch==121)
                                          {
                                                setbkcolor(BLUE); goto aage;
                                          } 
                                          if(ch==27)
                                          return; 
                                          if(ch==110||ch==78) 
                                          return;
                                          else
                                          { 
                                                setbkcolor(BLUE);
                                                cleardevice();
                                                goto phirse;
                                          }
                                    }
                                    
                                    
### OUTPUT:

#### The First Interface Of The Game!
![WhatsApp Image 2021-09-27 at 22 15 43](https://user-images.githubusercontent.com/89743157/134952838-49518594-f2d5-42e0-871b-190418400b24.jpeg)

#### Balancing the ball on the plate!
![WhatsApp Image 2021-09-27 at 22 17 06](https://user-images.githubusercontent.com/89743157/134952998-a7b93b20-366e-4806-9e1d-8627bade3c6c.jpeg)

#### Calculating the score!
![WhatsApp Image 2021-09-27 at 22 18 26](https://user-images.githubusercontent.com/89743157/134953041-3f7afe73-4277-43f2-8d4d-097ac6a0330e.jpeg)

#### Results of the Game!
![WhatsApp Image 2021-09-27 at 22 20 15](https://user-images.githubusercontent.com/89743157/134953088-be30c2d2-3ae2-4a7b-908c-8b5ec2e300f2.jpeg)



