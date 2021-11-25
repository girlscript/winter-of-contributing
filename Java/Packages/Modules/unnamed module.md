

A java **module** is a group of closely related packages and resources along with a new module descriptor file. Also, the module is a collection of packages designed for reuse. A Java module can identify which of the Java packages it contains that should be visible to other Java modules which use this module.is a package in a modular JAR file with a module descriptor in its root folder or a mechanism to pack the java applications or API separately


#### **There are three types of Modules present in java**



* Unnamed Module: An unnamed module is a JAR that is built without module-info.java declaration. An unnamed module will require all other modules and will export all its packages as well.
* Named Module: A named module is a module that is created with a module declaration file module-info.java in its root folder. The module has a name and it depends on some other modules. This means that when compiling and running this module, the required modules have to be present, otherwise compilation error or runtime error may occur.
* Automatic Module: An automatic module is a module that can read all other modules and all other modules can read it also the vice-versa. Even the named modules can read an automatic module.  An automatic module will have a module name that is derived from its jar name.


### **Unnamed Module**

An unnamed module is a jar construct without a module-info.java declaration. Since an unnamed module can render all other modules, this doesn't require a current application to be modularized before using Java 9. One thing to note is an unnamed module that exports whole its packages doesn't mean a named module can access unnamed module packages. This is because there is no way in module-info.java to declare requires unnamed module. An unnamed module will require all other modules and will export whole its packages as well. This gives a vast privilege to new applications to use Java 9 and Java 9 doesn't allow named modules to read unnamed modules. This only ensures other unnamed modules can access its packages.


### **Uses of Unnamed Module**



1. It exports all its packages and opens all its packages to all other modules.
2. Unnamed modules can access public types in all exported packages in all modules.
3. All classes in the unnamed module can read all classes exported by all the Java modules found on the module path.
4. We can use the -classpath argument to the Java VM when running an application.


### **Example**

In below mentioned example we created an unnamed module using Module class comes under java.lang in-built module and than finally print name and description of module.

Java

//Java program to get the name of unnamed module and the description of that module

public class GFG_UnnamedModule {

   public static void main(String args[]) {

      

      Module module = UnnamedModuleTest.class.getModule();

      System.out.print("Name of Module is: " + module.getName());

      System.out.println("Description of module: " + module.getDescriptor());

   

   }

}


### **Output**

Name of Module: is null

Description of module: null
