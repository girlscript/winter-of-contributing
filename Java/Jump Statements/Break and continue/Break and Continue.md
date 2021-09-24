# __Break and Continue__

<br>

# _break:_

```sh
Syntax : break;
```

<br>

> -As the name suggests, __"break"__ statement is used to break out of a loop. <br>
-It is used to modify the flow of code. <br>
-We generally use __"break"__ statements in loops and switch case <br>
-Wherever the __"break"__ keyword is used, the loop is instantly terminated. <br>

<br>

##### Lets see how the __"_break_"__ statement works with the code below:

<br>

```java
public class Break {
	public static void main(String[] args) {
		for(int i = 1; i < 10; i++)
		{
			if(i == 5) {
				break;
			}
			System.out.println(i);
		}
	}
}
```

#### Output:
__1__ <br>
__2__ <br>
__3__ <br>
__4__ <br>

<br>

> Here we can see that the loops gets terminated when  __'i'__ becomes equal to __'5'__ and hence, the rest of the integers does not gets printed. 

<br>

#### Sometimes, you might not want to run the entire loop and want to get out of the loop early. In such cases, you can use __"_break_"__ to get out of the loop. Let's understand this with an example:

<br>

> Suppose you want to check whether a element is in an array or not & find it's index if it is present. To solve this problem, we will use Linear Search. In Linear Search, we will loop through all the elements of the array until we find our element.

<br>

```java
public class Break {
	public static void main(String[] args) {
		
		//initializing array
		int[] array = new int[] { 0, 1, 2, 3, 4 };

		int size = 5;
		//if element is not present then index = -1
		int index = -1;
		int element_to_find = 1;

		for (int i = 0; i < size; i++) 
		{	
			if (array[i] == element_to_find) {
				index = i;
				//We found our element so there's no need to run the loop ahead, hence "break"
				break;
			}
		}
		
		//element not found
		if(index == -1) {
			System.out.println("Element is not present in the array!");
		}
		//element found
		else {
			System.out.println("Element is present in the array at index : " + index);
		}
	}
}
```

#### Output:
__Element is present in the array at index : 1__

<br>

>In the above code, we can see that when we found our element if used the _"__break__"_ keyword as there is no need to run the loop ahead to check whether the rest of the elements in the array are equal to the __"element_to_find"__. 

<br>
<br>

# _continue:_


```sh
syntax: continue;
```

<br>

> -It is used to skip one iteration in a loop. <br>
-It is also used to modify the normal flow of code.

<br>

```java
public class Continue {
	public static void main(String[] args) {
		for (int i = 1; i <= 5; i++) {
			if (i == 3) {
				continue;
			}
			System.out.println(i);
		}
	}
}
```

#### Output:
__1__ <br>
__2__ <br>
__4__ <br>
__5__ <br>


### __Visual animation of the code below__ :
<img src="https://github.com/rajmadhu0406/winter-of-contributing/blob/raj/Java/Jump%20Statements/Break%20and%20continue/continue-gif.gif?raw=true" alt="continue_gif" width="500" height="410"/>


> As you can see, the code runs in the top to bottom manner. First, the __"arrow"__ is at the start of the __"for"__ loop. Then it goes below, to the __"if"__ statement. Then inside the __"if"__ statement, points at the __"continue"__ statement. After executing the continue statement, the __"arrow"__ goes back to the top, at the start of the __"for"__ loop and skips the __"print"__ statement.

##
