#include<stdio.h>
int main() {
		int count,temp;
    printf("Enter the series number: ");
    scanf("%d",&count); 

		int fib1 = 0; //First member of the series is always 0
		int fib2 = 1; //Second member of the series is always 1

		printf("\n%d %d ",fib1,fib2);
		for (int i = 2; i < count; i++) {         //index starting with 2 as values are already assigned to elements at 0th and 1st indexes.
       //next number is always the sum of previous two numbers
			 temp = fib1+fib2;
             printf("The fibonacci Sequence is: %d ",temp);
             fib1=fib2;
             fib2=temp;
		}
}
