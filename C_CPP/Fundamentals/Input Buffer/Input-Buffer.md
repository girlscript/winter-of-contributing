# INPUT BUFFER

### What is an Input Buffer?
Input Buffer is actually that input area in the computer memory, that stores the information before sending it to the CPU for processing.
We will see that while taking input some unexpected annomalies occur because of the input buffer. Let us understand this with the help of a code.

**A program to enter your favourite number and character and display them.**
```C
	#include<stdio.h>
	#include<stdlib.h>
	int main()
	{
		int num;
		char ch;
		printf("Enter Number: ");
		scanf("%d", &num);
		printf("Enter Character: ");
		ch= getchar();
		printf("number= %d and character= %c", num, ch);
		return 0;
	}
```
### OUTPUT:
```
		Enter Number: 12
		Enter Character: number= 12 and character= 
```
### EXPECTED OUTPUT:
```
		Enter Number: 12
		Enter Character: e
		number= 12 and character= e
```

We should get the chance to enter a number and a character and print them both, thus leading to the **expected output**. However, we do not get the chance to enter the character. 

### Why does this happen?
Well to understand that, we need to understand Input Buffer.

Everything that we enter in our keyboard is stored in the input block. So looking at the output before we can say that the input block contains the integer 12 and the character `newline` when we press enter. By default, this `newline` character is considered by `getchar()` as the required character and any new character is not considered. Hence, we need to clear the input block by modifying our code to get the desired output.

```C
	#include<stdio.h>
	#include<stdlib.h>
	int main()
	{
		int num;
		char ch;
		printf("Enter Number: ");
		scanf("%d", &num);
		printf("Enter Character: ");
		getchar();
		ch= getchar();
		printf("number= %d and character= %c", num, ch);
		return 0;
	}
```
### OUTPUT:
```
		Enter Number: 12
		Enter Character: e
		number= 12 and character= e
```
### EXPLANATION:
Now, by using the above code we get the required output. This is because the first `getchar()` function removes the `newline` character from the input block. 

Therefore, we can prevent the annomality caused by the input buffer.