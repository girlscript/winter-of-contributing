# Break and Continue in C/CPP
---
Break and Countiue are *keywords* used in C/CPP.
## Break
* There are situtations where we want to terminate the loop, no matter what is written after that.
* The keyword break allows us to do this. Whenever we encounter break , we come out of the loop instantly.
* In simple words statements written after break in a loop are not evaluated and control goes to next statement after loop.

```C
#include<stdio.h>

int main(){
	int i;
	for(i=0;i<5;i++){
		if(i==3)
			break;//when i=3,loop is terminated and control goes out of loop
		printf("%d ",i);
	}
	printf("\nLoop terminated");//control goes to next statement after loop.
	return 0;
}
```
#### Output
```
0 1 2
Loop terminated
```

## Continue
* Continue is similar to break but instead of terminating from the loop,it forces to execute next iteration of the loop.
```C
#include<stdio.h>

int main(){
	int i;
	for(i=0;i<5;i++){
		if(i==3)
			continue;//when i=3,control gets back to next iteration so 3 will not be printed
		printf("%d ",i);
	}
	return 0;
}
```
#### Output
```
0 1 2 4
```

**NOTE**
* Break can be used in loops and switch case both.
* Continue cannot be used in switch case.
