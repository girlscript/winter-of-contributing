## Importing Packages in java

In java, the **import** keyword used to import built-in and user-defined packages. When a package has imported, we can refer to all the classes of that package using their name directly.
<br>



**The import statement must be after the package statement, and before any other statement.**
<br>

  > Using an import statement, we may import a specific class or all the classes from a package.

  > Using one import statement, we may import only one package or a class.

  > Using an import statement, we can not import a class directly, but it must be a part of a package.

  > A program may contain any number of import statements.
   <br>
   
   ### Importing specific class
   
   Using an importing statement, we can import a specific class. The following syntax is employed to import a specific class.
   
   ```
   import packageName.ClassName;
   
   
   ```
   <br>
   
   ### Let's look at an import statement to import a built-in package and Scanner class.
   
   ```
   package myPackage;

import java.util.Scanner;

public class ImportingExample {

	public static void main(String[] args) {

		Scanner read = new Scanner(System.in);
		
		int i = read.nextInt();
		
		System.out.println("You have entered a number " + i);
	}
}
```
<br>

**In the above code, the class ImportingExample belongs to myPackage package, and it also importing a class called Scanner from java.util package.**
<br>

### Importing all the classes
    
  Using an importing statement, we can import all the classes of a package. To import all the classes of the package, we use * symbol. The following syntax is employed to import all the classes of a package.
  
  ```
  import packageName.*;
  ```
  
  ### Let's look at an import statement to import a built-in package.

 ```
 package myPackage;

import java.util.*;

public class ImportingExample {

	public static void main(String[] args) {

		Scanner read = new Scanner(System.in);
		
		int i = read.nextInt();
		
		System.out.println("You have entered a number " + i);
		
		Random rand = new Random();
		
		int num = rand.nextInt(100);
		
		System.out.println("Randomly generated number " + num);
	}
}
```

**In the above code, the class ImportingExample belongs to myPackage package, and it also importing all the classes like Scanner, Random, Stack, Vector, ArrayList, HashSet, etc. from the java.util package.**
     
 > The import statement imports only classes of the package, but not sub-packages and its classes.

 > We may also import sub-packages by using a symbol '.' (dot) to separate parent package and sub-package.

#### Consider the following import statement.
```
import java.util.*;
```
**The above import statement util is a sub-package of java package. It imports all the classes of util package only, but not classes of java package.**
   
