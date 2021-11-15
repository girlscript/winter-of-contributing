# Calendar In C

### Description of the following Code:
This fascinating program prints a calendar of the year on the basis of :
- Year
- Month by Month in sequential order by inputting Year by the user
- Day by inputting Date , Month and Year

Hope you find the Date, Date, Month of your choice! :)

## CODE:

```cpp
int main()
{
  int a;
  start:
  printf("\tCALENDAR\n");
  printf("\t1. Year Calendar\n");
  printf("\t2. Month by Month Calendar\n");
  printf("\t3. Day from Date\n");
  printf("\t4. Go to main menu\n");
  printf("\t5. Exit\n");
  printf("\nEnter your selection : ");
  scanf("%d",&a);
  if (a == 1)
  yearcalendar();
  if (a == 2)
  monbymon();
  if (a == 3)
  dfd();
  if (a == 4)
  main();
  if (a == 5)
  return 0;
  goto start;
}

int days_in_month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
char *months[] =
{
  " ",
  "January",
  "February",
  "  March",
  "  April",
  "   May",
  "  June",
  "  July",
  " August",
  "September",
  "October",
  "November",
  "December"
};

// Displaying the entire calendar for that particular year which the user wants
int yearcalendar()
{
  int year,daycode,d1,d2,d3,month, day,a;
  fullyear:
  printf("\tYEAR CALENDAR\n");
  printf("\n\tEnter a year (YYYY) : ");
  scanf("%d", &year);
  nextyear:
  printf("loading");
  for (int i = 0; i < 3; i++)
  {
    sleep(1);
    printf(".");}
    d1 = (year - 1) / 4;                             
    d2 = (year - 1) / 100;                                        // To check whether year is a leap year or not
    d3 = (year - 1) / 400;
    daycode = (year + d1 - d2 + d3) % 7;
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    days_in_month[2] = 29;
    else
    days_in_month[2] = 28;
    for (month = 1; month <= 12; month++)
    { 
      printf("\n\t  %s %d",months[month],year);
      printf("\n\nSun  Mon  Tue  Wed  Thu  Fri  Sat\n" );
      for (day = 1; day <= 1 + daycode * 5; day++)
      {
        printf(" ");
      }
      for (day = 1; day <= days_in_month[month]; day++)
      {
          printf("%2d",day);
          if ((day + daycode) % 7 > 0)
          printf("   " );
          else
          printf("\n" );
      }
          daycode = (daycode + days_in_month[month]) % 7;
          sleep(1);
    } 
    printf("\n\nEnter 1 for next year, 0 to change year and 2 to go to calendar :");
    scanf("%d",&a);
    if (a == 0)
    goto fullyear;
    if (a == 1)
    {
      year++;
      goto nextyear;
    }
    if (a == 2)
    return 0;
}

// To print a calendar for a particular month by inputting year from the user
int monbymon()
{
  int year,daycode,d1,d2,d3,month, day, a;
  yearmonthbymonth:
  printf("\tMONTH CALENDAR\n");
  printf("\n\tEnter a year (YYYY) : ");
  scanf("%d", &year);
  for (; year > 0; year++)
  {
    d1 = (year - 1) / 4;
    d2 = (year - 1) / 100;
    d3 = (year - 1) / 400;
    daycode = (year + d1 - d2 + d3) % 7;
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    days_in_month[2] = 29;
    else
    days_in_month[2] = 28;
    for (month = 1; month <= 12; month++)
    {
      printf("\n\t  %s %d", months[month],year);
      printf("\n\nSun  Mon  Tue  Wed  Thu  Fri  Sat\n" );
      for (day = 1; day <= 1 + daycode * 5; day++)
      {
        printf(" ");
      }
      for (day = 1; day <= days_in_month[month]; day++)
      {
        printf("%2d",day);
        if ((day+daycode)%7>0)
        printf("   " );
        else
        printf("\n " );}
        daycode = (daycode+days_in_month[month]) % 7;
        printf("\npress 1 for next month, 0 to change the year and 2 to go to calendar : ");
        scanf("%d",&a);
        if (a == 0)
        goto yearmonthbymonth;
        if (a == 2)
        return 0;
      }
    }
}

// Diaplaying the Day by inputting Date,Month and Year by the user
int dfd()
{
  int d,m,y,a;
  start:
  printf("\tDAY FROM DATE\n");
  printf("\n\tEnter the date  : ");
  scanf("%d",&d);
  printf("\tEnter the month : ");
  scanf("%d",&m);
  printf("\tEnter the year  : ");
  scanf("%d",&y);
  if (d >= 32 || m >= 13 || y / 10000 != 0 || y / 1000 == 0)
  printf("\nPlease enter correct date\n");
  else
  day(d,m,y);
  sleep(1);
  end:
  printf("press 1 to run program again, press 2 for calendar : ");
  scanf("%d",&a);
  if (a == 1)
  goto start;
  else if (a == 2)
  return 0;
  else
  {
    printf("enter correct selection - ");
    goto end;
  }
}

int day(int date,int month,int year) {
int day,yr,yd;
yr = year % 100;
yd = year / 100;
day = 1.25*yr + findm(month,year) + date - 2 * (yd % 4);
day = day%7;
printf("\n\tloading");
for(int i = 0; i < 3; i++)
{
  sleep(1);
  printf(".");}
  printf("\n\tThe Given Date is : %d/%d/%d \n", date, month, year);
  printf("\n\t");
  switch (day){
  case 0:printf("Day is : Saturday\n");
  break;
  case 1:printf("Day is : Sunday\n");
  break;
  case 2:printf("Day is : Monday\n");
  break;
  case 3:printf("Day is : Tuesday\n");
  break;
  case 4:printf("Day is : Wednesday\n");
  break;
  case 5:printf("Day is : Thursday\n");
  break;
  case 6:printf("Day is : Friday\n");
  break;
  default:printf("Please enter correct date .\n");}
  return 0;
}

// To check whether a year s a leap year or not
int findm(int mo,int ye)
{
  int d,leap;
  if ((ye % 100 == 0)&&(ye % 400 != 0))
  leap = 0;
  else if (ye % 4 == 0)
  leap = 1;
  else
  leap = 0;
  d = 3+(2-leap)*((mo+2)/(2*mo))+(5*mo+mo/9)/2;
  d %= 7;
  return d;
}
```

## OUTPUT:
![pic1](https://user-images.githubusercontent.com/89743157/140609345-bcc5beb3-1d13-4979-bf05-63a12878864b.jpeg)
![pic2](https://user-images.githubusercontent.com/89743157/140609352-a2bf920a-dbeb-4b1d-aac3-ea378b03cbd4.jpeg)
![pic3](https://user-images.githubusercontent.com/89743157/140609356-047613bb-a6a3-40d8-b08d-9b6ec78cdba7.jpeg)
![pic4](https://user-images.githubusercontent.com/89743157/140609362-cf5f4aa1-e883-4222-ba9d-a602eee3dcf8.jpeg)
![pic5](https://user-images.githubusercontent.com/89743157/140609372-55a08f35-7c1e-4801-a3c9-e71ff8122b63.jpeg)
![pic6](https://user-images.githubusercontent.com/89743157/140609376-4071598a-f8d1-4cd3-8f12-817e5ccd334f.jpeg)
