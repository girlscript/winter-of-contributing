# SCHOOL MANAGEMENT SYSTEM

### CODE:

``` cpp
#include<stdio.h>

int bubble(int*,int);
void filewrite();
void avgmarks(); 
void fileprint(); 
void filesort();
void rollin();


/******** SORTING FUNCTION **********/ 

int bubble(int x[], int n)
{
int hold, j, pass, i, switched = 1;
for (pass = 0; pass < n-1 && switched == 1; pass++)
{
      switched = 0;
      for (j=0; j < n-pass-1; j++)
      if (x[j] > x[j+1]) 
      {
      switched = 1; 
      hold = x[j]; 
      x[j] = x[j+1]; 
      x[j+1] = hold; 
      }
}
return(0);
}


/******** FILE WRITING FUNCTION ***********/

void filewrite()
{
int roll, ch, mark; 
char nam[50];
FILE *fp;
fp = fopen("studentrecords.txt", "r");
printf("\nENTER ROLL NUMBER, NAME , MARKS\n");
ch = 1;
while (ch)
{
      scanf("%d %s %d\n", &roll, &nam, &mark); 
      fprintf(fp,"%d %s %d\n", roll, nam, mark);
      printf("\nPress 1 to continue & 0 to stop\n"); 
      scanf("%d", &ch);
}
fclose(fp);
}


/******* OUTPUTING DATA ON SCREEN******/ 

void fileprint()
{
int marks[100], rollno[100], x[100], i;
char name[100][50];
FILE *fp;
fp = fopen("studentrecords.txt","r");
i = 0;
printf("ROLLNO NAME MARK\n");
while (! feof(fp))
{
      fscanf(fp,"%d %s %d\n", &rollno[i], &name[i], &marks[i]); 
      printf(" %d %s %d\n", rollno[i], name[i], marks[i]); 
      i = i+1;
}
fclose(fp);
printf("\n\n\nPRESS ANY KEY");
getch();
}


/******* SORTING FILE ********/ 

void filesort()
{ 
int marks[100], rollno[100], x[100], n, i, j; 
char name[100][50];
FILE *fp, *fm;
fp = fopen("studentrecords.txt", "r"); 
fm = fopen("marks.txt", "w");
i = 0;
while (! feof(fp))
{
    fscanf(fp,"%d %s %d\n", &rollno[i], &name[i], &marks[i]); 
    x[i] = marks[i];
    i = i+1;
}
n = i;
bubble(x,n);
for (i=0; i < n; i++)
{
      printf("%d\t", x[i]);
}
for (i=0; i < n; i++) 
{
      for (j=0; j < n; j++) 
      { 
                        if (x[i] == marks[j]) 
                        {
                                          fprintf(fm, "%d %s %d\n", rollno[j], name[j], marks[j]);
                        }
      } 
}
fclose(fm);
fclose(fp);
printf("\n\n\nPRESS ANY KEY");
getch();
}


/********* DATA USING ROLLNO***********/ 

void rollin()
{ 
int i, roll, ch, mark, roll1;
char nam[50]; 
FILE *fm;
ch = 1;
while (ch)
{
      clrscr();
      fm = fopen("marks.txt", "w");
      printf(" \n ENTER ROLL NUMBER - ");
      scanf("%d", &roll1);
      i = 0;
      while (! feof(fm))
      {
                        fscanf(fm,"%d %s %d\n", &roll, &nam, &mark);
                        if(roll1 == roll)
                        {
                                    printf("%d %s %d\n", roll, nam, mark);
                                    break;
                        }
                        else
                        i = i+1; 
      }
}
printf("\n\nPress 1 to see student info & 0 to return to main menu\n"); 
scanf("%d",&ch);
fclose(fm);
}


void avgmarks() 
{
int marks[100], rollno[100],n ,i;
float avg,x;
char name[100][50];
FILE *fm;
fm = fopen("marks.txt","w");
i = 0;
while (! feof(fm))
{
                  fscanf(fm,"%d %s %d\n", &rollno[i], &name[i], &marks[i]);
                  x = x + marks[i];
                  i = i+1;
}
n = i;
avg = x/n;
printf("AVERAGE MARKS OF %d STUDENTS ARE - %f ", n, avg); 
fclose(fm);
printf("\n\n\nPRESS ANY KEY");
getch();
}
/****** FUNC. ENDS**********/ 


void main()
{
int marks[100], rollno[100], x[100], n, i, j, roll, c, mark, roll1;
char name[100][10],nam[50];
while (c!=6)
{
                  clrscr();
                  printf("GIVE CHOICE--\n");
                  printf("1 TO ENTER STUDENT INFO.\n");
                  printf("2 TO SEE STUDENTRECORDS.TXT FILE\n");
                  printf("3 TO SORT FILE ON BASIS OF MARKS\n");
                  printf("4 TO PRINT STUDENT INFO. USING ROLL NO\n");
                  printf("5 TO FIND AVERAGE OF MARKS\n");
                  printf("6 TO EXIT\n\n--");
                  scanf("%d",&c);                   
                  switch (c)
                  {
                                    case 1:
                                                filewrite();
                                                break;
                                    case 2:
                                                fileprint();
                                                break;
                                    case 3: 
                                                filesort();
                                                break;
                                    case 4:
                                                rollin();
                                                break;
                                    case 5:
                                                avgmarks(); 
                                                break;
                                    case 6: 
                                                break;
                                    default:
                                                break;
                  } 
}
getch();
}
```
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
