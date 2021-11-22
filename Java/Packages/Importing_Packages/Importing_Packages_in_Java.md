# Importing Packages in java

A Package is a collection of classes and each class is a collection of members and methods. Any class as well as any member and method in a Package are accessible from Java program. This can be achieved in Java by `import` _keyword_.

### **General form of Importing Packages:**
   ```Java
   import pkg1 [.pkg2] . ( <classname> | *)
   ```

>Here, `pkg1` is the top-level package or main package, `pkg2` is the sub-ordinate package or sub-package inside the main package seperated by `(.)` operator to the invoke sub-package inside the main-package. Apart from package invoking the ( . ) can also be used to invoke any specific <class_name> inside the package or even all the classes inside a package


* **There are two ways of using import statement:**
  1. With fully quantified class name:
     
      When it required to access a particular class

      ```Java
      import java.lang.String;
      ```
  2. With default `(.*)` quantification:

      When it is required to access a number of classes

      ```Java
      import java.lang.*;
      ```
---
In java, the _import keyword_ is used to import built-in or even user-defined packages. When a package has imported, we can refer to all the classes of that package using their name directly.

The import statement must be after the package statement, and before any other statement.
Which use to import all the package before the execution of actual code 
```Java
package GWOC;

import java.util.*;  //before main class after package statement.

public class Importing {
    public static void main(String[] args) {
       System.out.println("Hello World!");
       .
       .
    }
}


```


      


* Using an import statement, we can import a specific class or all the classes from a package.
* Using one import statement, we may import only one package or a class.
* Using an import statement, we can not import a class directly, but it must be a part of a package.
* A program may contain any number of import statements.
---

### Importing specific class

Using an importing statement, we can import a specific class. The following syntax is used to import a specific class.

**Syntax:**
```Java
import packageName.ClassName;
```

* Let's look at an import statement to import a built-in package and Scanner class.


**Example**
```Java
package GWOC;

import java.util.Scanner;

public class Importing {

	public static void main(String[] args) {

		Scanner read = new Scanner(System.in);
		
		int i = read.nextInt();
		
		System.out.println("You have entered a number " + i);
	}
}
```

In the above code, the class Importing belongs to GWOC package, and it also importing a class called Scanner from java.util package.

---


### Importing all the classes

Using an importing statement, we can import all the classes of a package. To import all the classes of the package, we use * symbol. The following syntax is used to import all the classes of a package.

**Syntax**
```Java
import packageName.*;
```
* Let's look at an import statement to import a built-in package.

**Example**
```Java
package GWOC;

import java.util.*;

public class Importing {

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
In the above code, the class Importing belongs to GWOC package, and it also importing all the classes like Scanner, Random, Stack, Vector, ArrayList, HashSet, etc. from the java.util package.

The import statement imports only classes of the package, but not sub-packages and its classes.

We may also import sub-packages by using a symbol '.' (dot) to separate parent package and sub-package as we discussed previously.


* Consider the following import statement.
```Java
import java.util.*;
```
The above import statement util is a sub-package of java package. It imports all the classes of util package only, but not classes of java package.

---
**References: NPTEL and javatpoint**  

