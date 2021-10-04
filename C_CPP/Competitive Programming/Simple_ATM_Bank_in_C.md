# SIMPLE ATM BANK

### CODE:

``` cpp
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
void login();
void mainMenu();
void checkBalance(float balance);                    // To check balance in the account
float moneyDeposit(float balance);                   // To check the amount deposited in the account
float moneyWithdraw(float balance);                  // To check the amount withdrawed from the account
void menuExit();                                     // To quit the menu
void errorMessage();
int main()
{
int option;
float balance = 0.00;
int choose;                                                      
bool again = true;                                                     
while (again)                                                      
{                                                      
      mainMenu();
      printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
      printf("Your Selection:\t");
      scanf("%d", &option);
      switch (option)                                                      
      {                                                
            case 1:
            checkBalance(balance);           	                    
            break;
            case 2:
            balance = moneyDeposit(balance);            	                                                                                                                                   break;
            case 3:           	                                       
            balance = moneyWithdraw(balance);
            break;
            case 4:            	                                        
            menuExit();
            return 0;
            default:
            errorMessage();
            break;
      }

      printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
      printf("Would you like to do another transaction:\n");
      printf("< 1 > Yes\n");
      printf("< 2 > No\n");
      scanf("%d", &choose);                                                      
      if (choose == 2)
      {
            again = false;
            menuExit();
      }
}
return 0;
}


void mainMenu()
{
      printf("**********Welcome to ATM Bank***********\n\n");
      printf("****Please choose one of the options below****\n\n");
      printf("< 1 >  Check Balance\n");
      printf("< 2 >  Deposit\n");
      printf("< 3 >  Withdraw\n");
      printf("< 4 >  Exit\n\n");
}
                                                      
                                                      
//Main Menu
void checkBalance(float balance)
{
      printf("You Choose to See your Balance\n");
      printf("\n\n****Your Available Balance is: $%.2f\n\n", balance);
}
                                                      
                                                      
//Check Balance
float moneyDeposit(float balance) 
{
      float deposit;
      printf("You choose to Deposit a money\n");
      printf("Your Balance is: $%.2f\n\n", balance);
      printf("****Enter your amount to Deposit\n");
      scanf("%f", &deposit);
      balance += deposit;
      printf("\n****Your New Balance is: $%.2f\n\n", balance);
      return balance;
}
                                                      
                                                      
//money deposit
float moneyWithdraw(float balance) 
{
      float withdraw;
      bool back = true;
      printf("You choose to Withdraw a money\n");
      printf("Your Balance is: $%.2f\n\n", balance);
      while (back) 
      {
            printf("Enter your amount to withdraw:\n");
            scanf("%f", &withdraw);
            if (withdraw < balance) 
            {
                  back = false;
                  balance -= withdraw;
                  printf("\nYour withdrawing money is: $%.2f\n", withdraw);
                  printf("****Your New Balance is: $%.2f\n\n", balance);
            }
            else  
            {
                  printf("+++You don't have enough money+++\n");
                  printf("Please contact to your Bank Customer Services\n");
                  printf("****Your Balance is: $%.2f\n\n", balance);
            }
      }
return balance;
}
                                                      
                                                      
//money withdraw
void menuExit() 
{
      printf("--------------Take your receipt!!!------------------\n");
      printf("-----Thank you for using ATM Banking Machine!!!-----\n");
}
                                                      
                                                      
//exit menu
void errorMessage() 
{;
      printf("+++!!!You selected invalid number!!!+++\n");
}
```                                                      
                                                      
       
### OUPUT:
![GAME1](https://user-images.githubusercontent.com/89743157/134962104-e83822a9-44d9-4200-b9d6-0a9023f7ba4c.jpeg)
![GAME2](https://user-images.githubusercontent.com/89743157/134962194-72e9f6c1-217b-48e8-9772-b7f5c5fc464d.jpeg)
![GAME3](https://user-images.githubusercontent.com/89743157/134962415-a664329a-6167-4ccf-9f09-fef34a6d3fd0.jpeg)
![GAME4](https://user-images.githubusercontent.com/89743157/134962516-73feef38-3248-4065-b734-2569a86742ca.jpeg)
