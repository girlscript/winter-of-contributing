
# Finding-Packages

In Java, Packages are mirrored directories i.e. the source program and the generated `.class` file are saved in the folders which have the same name similar to the package name.
There are three ways how java run-time system find a package in Java program.

1. By default the java run-time system considers the current directory which you are working as starting directory and checks for the package defined and finds it if it is present that directory.
2. To specify the directory path by setting the CLASSPATH environment variable.
3. Using -classpath option while compiling and running the java program to specify the path to your classes.
The following program shows the above three ways how a java run-time system finds the package.

```//d:\myproject\source
package mypack;
class Testing
{
    public int i;
    
    public Testing(int i)
    {
        this.i = i;
    }

}
```

Note: Compile the above program using command prompt. we have saved the Testing program as _d:\myproject\source_ (folders are separated by /). i.e. Testing is saved in d drive -> myproject -> source
To compile the above program we have to specify where the class file should be created.

If we decide to create class file in _d:\myproject\classes_
To compile the above program we use the following command.
javac _-d d:\myproject\classes d:\myproject\source\Testing.java_
Here, -d represents the directories and _d:\myproject\classes_ is the destination where the class file should be created for the program Testing.

Note: Check the folder mypack is created inside _d:\myproject\classes._ It automatically creates the folder mypack inside classes.
Now we write a program which uses Testing which is under mypack package.

```import Mypack.Testing;

class OtherClass
{
    public static void main(String[] args)
    {
        Testing t = new Testing(10);
        System.out.println(t.i);
    }
}
```

To compile and run the above program follow the instruction below:
The above is saved as _d:\myproject_
* We have to specify the base directory of the package mypack when compiling the above program as we are importing mypack.Testing in our program. Here mypack.Testing is as same as importing mypack as there is only one program in mypack. If there are many classes and we want to import a specific class features we use the format package.classname just like we used mypack.Testing in the above program.

If we don't specify the base directory of the package the program doesn't compile and shows a compilation error package does not exist.
Before compiling the program ensure you are in the directory where your program is residing. Here, the program is in _d:\myproject_, so we have to be in myproject while compiling and executing the program. Use cd directoryname to go into specific directory.
Use the below command to compile the above program.
javac _-cp d:\myproject\classes_ New.java
In the above command -cp defines the classpath where mypack.Testing is so that New can access the properties of Testing. Use the below command to run the above program.
_java -cp .;d:\myproject\classes_ New
In above command .(dot) preceeding with ; instructs java run-time system to consider the current directory which we are in. Whenever we define a classpath explicitly java run-time system ignores the current directory unless it is declared or specified, so in order to specify we have to use . together withe the destination of base directory separated by ;.

---
# Classpath
Classpath is a parameter in the Java Virtual Machine or the Java compiler that specifies the location of user-defined classes and packages. The parameter may be set either on the command-line, or through an environment variable

# Overview and architecture
Similar to the classic dynamic loading behavior, when executing Java programs, the Java Virtual Machine finds and loads classes lazily (it loads the bytecode of a class only when the class is first used). The classpath tells Java where to look in the filesystem for files defining these classes.

The virtual machine searches for and loads classes in this order:

1. bootstrap classes: the classes that are fundamental to the Java Platform (comprising the public classes of the Java Class Library, and the private classes that are necessary for this library to be functional).

2. extension classes: packages that are in the extension directory of the JRE or JDK, ```jre/lib/ext/```

3. user-defined packages and libraries

By default only the packages of the JDK standard API and extension packages are accessible without needing to set where to find them. The path for all user-defined packages and libraries must be set in the command-line (or in the Manifest associated with the Jar file containing the classes).

# Setting the path to execute Java programs
**Supplying as application argument**

Suppose we have a package called org.mypackage containing the classes:
* HelloWorld (main class)
* SupportClass
* UtilClass

and the files defining this package are stored physically under the directory _D:\myprogram_ (on Windows) or _/home/user/myprogram_ (on Linux).

The file structure looks like this:

|Microsoft Windows|Linux|
|-----------|-------------|
```D:\myprogram\---> org\ ---> mypackage\---> HelloWorld.class---> SupportClass.class---> UtilClass.class```|```/home/user/myprogram/---> org/---> mypackage/---> HelloWorld.class---> SupportClass.class---> UtilClass.class```|

When we invoke Java, we specify the name of the application to run: org.mypackage.HelloWorld. However we must also tell Java where to look for the files and directories defining our package. So to launch the program, we use the following command:

|Microsoft Windows|Linux|
|-----------|---------|
|``` java -classpath D:\myprogram org.mypackage.HelloWorld```|``` java -cp /home/user/myprogram org.mypackage.HelloWorld```|
where:
* java is the Java runtime launcher, a type of SDK Tool (A command-line tool, such as javac, javadoc, or apt)
* _-classpath D:\myprogram_ sets the path to the packages used in the program (on Linux, _-cp /home/user/myprogram_) and
* _org.mypackage.HelloWorld_ is the name of the main class

**Setting the path through an environment variable**

The environment variable named CLASSPATH may be alternatively used to set the classpath. For the above example, we could also use on Windows:

`set CLASSPATH=D:\myprogram
java org.mypackage.HelloWorld`

The rule is that `-classpath` option, when used to start the java application, overrides the `CLASSPATH` environment variable. If none are specified, the current working directory is used as classpath. This means that when our working directory is `D:\myprogram\` (on Linux, `/home/user/myprogram/`), we would not need to specify the classpath explicitly. When overriding however, it is advised to include the current folder `"."` into the classpath in the case when loading classes from current folder is desired.

**Setting the path of a Jar file**

If a program uses a supporting library enclosed in a Jar file called _supportLib.jar_, physically located in the directory _D:\myprogram\lib_\ and the corresponding physical file structure is:

```D:\myprogram\
      |
      ---> lib\
            |
            ---> supportLib.jar
      |
      ---> org\
            |
            --> mypackage\
                       |
                       ---> HelloWorld.class
                       ---> SupportClass.class
                       ---> UtilClass.class
```

the following command-line option is needed:

`java -classpath D:\myprogram;D:\myprogram\lib\supportLib.jar org.mypackage.HelloWorld`

or alternatively:

`set CLASSPATH=D:\myprogram;D:\myprogram\lib\supportLib.jar
java org.mypackage.HelloWorld`

**Adding all JAR files in a directory**

In Java 6 and higher, one can add all jar-files in a specific directory to the classpath using wildcard notation.

Windows example:

`java -classpath ".;c:\mylib\*" MyApp`

Linux example:

`java -classpath '.:/mylib/*' MyApp`

This works for both ```-classpath``` options and environment classpaths.

**Setting the path in a manifest file**

If a program has been enclosed in a Jar file called _helloWorld.jar_, located directly in the directory _D:\myprogram_, the directory structure is as follows:

```D:\myprogram\
      |
      ---> helloWorld.jar 
      |
      ---> lib\  
            |
            ---> supportLib.jar
```

The manifest file defined in _helloWorld.jar_ has this definition:

`Main-Class: org.mypackage.HelloWorld
Class-Path: lib/supportLib.jar`

This automatically starts _org.mypackage.HelloWorld_ specified in class _Main_-Class with the arguments. The user cannot replace this class name using the invocation ```java -jar```. _Class-Path_ describes the location of _supportLib.jar_ relative to the location of the library _helloWorld.jar_. Neither absolute file path, which is permitted in ```-classpath``` parameter on the command line, nor jar-internal paths are supported. This means that if the main class file is contained in a jar, _org/mypackage/HelloWorld.class_ must be a valid path on the root within the jar.

Multiple classpath entries are separated with spaces:

`Class-Path: lib/supportLib.jar lib/supportLib2.jar`

**OS specific notes**

Being closely associated with the file system, the command-line Classpath syntax depends on the operating system. For example:
* on all Unix-like operating systems (such as Linux and Mac OS X), the directory structure has a Unix syntax, with separate file paths separated by a colon (":").
* on Windows, the directory structure has a Windows syntax, and each file path must be separated by a semicolon (";").

This does not apply when the Classpath is defined in manifest files, where each file path must be separated by a space (" "), regardless of the operating system.

***