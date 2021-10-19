# Throw, throws, finally

## Throw
**Throw** is a keyword that is used for exception handling in Java. It is used to explicitly throw a single error. We can throw either checked or unchecked exceptions using this keyword. The throw keyword is mainly used to throw custom errors.
#### The syntax of the throw keyword is:
>**throw new exception_class("Error message");**

The flow of execution of the program is stopped once the throw statement is executed. Then, the program execution transfers from the try block to its catch block. If a catch is not found then it moves to the next block and so on and if no matching catch is found then the default exception handler will stop the program. 
#### Example:
```java
import java.io.*;
class Main {
  public static void findFile() throws IOException {
    throw new IOException("File not found");
  }

  public static void main(String[] args) {
    try {
      findFile();
      System.out.println("Rest of code in try block");
    } catch (IOException e) {
      System.out.println(e.getMessage());
    }
  }
}
```
#### Output:
>File not found

Here, the findFile() method throws an IOException with the message that was passed to its constructor.

# Throws
**Throws** is a keyword in Java used to declare an exception. It is mentioned explicitly in the method declaration to specify the type of exception(s) that might occur within it. The throws keyword is used in the signature of method to indicate that this method might throw one of the listed type exceptions.
#### Syntax of the throws keyword is:
>**return_type method_name() throws exception_class_name**{  
//method code  
}  

Here throws passes the responsibility of exception handling to the caller, then caller method is responsible for handlingthat exception.  
Throws is mainly used to handle checked exceptions. In case of unchecked exceptions, like NullPointerException, it is the coders' fault that the code has not been checked beforehand.

#### Example:
```java
import java.io.*;
class Main {
  public static void findFile() throws IOException {
    //this is code that may produce an exception
    File newFile=new File("test.txt");
    FileInputStream stream=new FileInputStream(newFile);
  }

  public static void main(String[] args) {
    try{
      findFile();
    } catch(IOException e){
      System.out.println(e);
    }
  }
}
```
#### Output:
>java.io.FileNotFoundException: test.txt (No such file or directory)

 Here, file _test.txt_ does not exist, hence FileInputStream throws a FileNotFoundException which extends the IOException class.

### Throw vs Throws

| Throw | Throws |
| ------ | ------ |
| Throw keyword is used inside the method. It is used when we need to throw an exception logically. | Throws is written in the function signature. It is used when the method has some statement(s) that can lead to exception(s). |
| Throw is used to throw an exception explicitly, and can only throw one at a time. | Throws may be used to declare multiple exceptions at a time, separated by a comma. When one exception occurs, if it matched with the declared ones, is thrown then. |
| Syntax includes instance of the exception to be thrown. | Syntax includes class names of the instances to be thrown |

## Finally
The **finally** block is a block which is used to execute crucial code like closing the connection, regardless of whether an exception is handled or not. The statements present in this block will always be executed. The finally block follows the try-catch blocks.
#### Syntax of the finally block is:
>try {
    //Statements that may cause an exception
}
catch {
   //Handling exception
}
finally {
   //Statements to be executed
}
#### A flowchart depicting the usage of the finally block:
![finally flowchart](https://static.javatpoint.com/core/images/java-finally-block.png)
#### Example: 
```java
try {
  int[] myNumbers = {1, 2, 3};
  System.out.println(myNumbers[10]);
} catch (Exception e) {
  System.out.println("Something went wrong.");
} finally {
  System.out.println("The 'try catch' is finished.");
}
```
#### Output:
>Something went wrong.
The 'try catch' is finished.

Putting important wrapping up code in a finally block is good practice, exception or not.