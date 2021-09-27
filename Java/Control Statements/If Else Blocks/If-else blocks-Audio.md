# If-else blocks - Audio

https://drive.google.com/file/d/10ozM_7Ux2s9VrSfL6Ep11ytkI0jx4P1x/view?usp=sharing

### Contents 

- Introduction
- Example-1 
- Syntax 
- Example-2 
- What are conditions?
- Nested if-else
- Example-3


<br>

### EXAMPLE-1 

```
import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a number");
		int num = sc.nextInt();
		
		if(num>=0){
		    System.out.println("You have entered a positive number");
		}
		else{
		    System.out.println("You have entered a negative number");
		}
	}
}


```


### EXAMPLE-2

```
import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a number");
		int num = sc.nextInt();
		
		if(num>0){
		    System.out.println("You have entered a positive number");
		}
		else if(num==0){
		    System.out.println("You have entered zero");
		}
		else{
		    System.out.println("You have entered a negative number");
		}
	}
}


```



### EXAMPLE-3

```
import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter three numbers");
		int a = sc.nextInt();
		int b = sc.nextInt();
		int c = sc.nextInt();
		// finding the largest number among the entered values
        
		if(a>b){
		    if(a>c){
		        System.out.println(a + " is the largest number");
		    }
		    else{
		      System.out.println(c + " is the largest number");  
		    }
		}
		else{
		    if(b>c){
		        System.out.println(b + " is the largest number");
		    }
		    else{
		      System.out.println(c + " is the largest number");  
		    }
		}
	}
}


```
