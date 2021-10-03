<div align="center">
<h1>Looping Control Structure in C/C++</h1>
</div>

## Loop/Iteration: The repeated execution of a statement or group of statements until a given condition is false or dissatisfied.

## Types of Loops in C/C++

1. **for loop** (Counter loop/single statement loop)
2. **while loop** (Entry-controlled/Pre-conditional)
3. **do while loop** (Entry-controlled/Post-conditional)
4. **goto loop** (Still exists but not in practice)

### for loop:

**Syntax**:

```
for(initialisation; condition; updation)
{
    Loop body statements;
}
```

**Example**: Program to display first 10 Natural numbers.

```c
// in C
#include <stdio.h>
int main()
{
	int i;
	for(i = 1; i <=10 ; i++)
	{
		printf(“%d\n”,i);
	}
	return 0;
}
```

```cpp
// in C++
#include <iostream>
using namespace std;
int main()
{
    int i;
    for(i = 1; i <=10; i++)
	{
        cout << i << endl;
    }
	return 0;
}
```

<hr>

### while loop:

**Syntax**:

```
initialisation
while(condition)
{
	Loop body statements;
	Updation
}
```

**Example**: Program to display first 10 even numbers.

```c
// in C
#include <stdio.h>
int main()
{
	int i = 2;
	while(i<=20)
	{
		printf(“%d\n”,i);
        i = i + 2;
	}
	return 0;
}
```

```cpp
// in C++
#include <iostream>
using namespace std;
int main()
{
    int i = 2;
    while(i<=20)
    {
        cout << i << endl;
        i = i + 2;
    }
}
```

<hr>

### do while loop:

**Syntax**:

```
initialisation
do
{
    Loop body statements;
	updation;
} while(condition);
```

**Example**: Program to display the first 10 odd numbers

```C
// in C
#include <stdio.h>
int main()
{
	int i = 1;
	do
	{
		printf(“%d\n”,i);
        i = i + 2;
	} while(i<=20);
	return 0;
}
```

```cpp
// in C++
#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    do
    {
        cout << i << endl;
        i = i + 2;
    }while(i<=20);
    return 0;
}
```

## Practice Problems

_(NOTE: Solve all questions with all three loops)_

1. Write a program that accepts 5 numbers then display the total
2. Write a program to display the series - 1 1 2 4 7 11 …… 10 terms
3. Write a program that accepts 10 numbers then display the total of even numbers
4. Write a program to display the multiplication table of a number
5. Write a program that displays the factors of a number (including 1 and itself)
6. Write a program that checks if a number is Perfect or not (Perfect Number = Sum of factors excluding the number is equal to the number, ex - 6 = 1 + 2 +3)
7. Write a program that checks if a number is Prime or not
8. Write a program that calcuates the factorial of a number
9. Write a program to reverse a given number
10. Write a program that accepts a number then display the sum of digits
