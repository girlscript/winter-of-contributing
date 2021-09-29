# Interfaces: A Recapitulation

- As you may already be knowing from the previous modules, interfaces are basically blueprints of a class, which can possess abstract methods having no *concrete* method body, along with variables. 

- The main objective is to gain the property of abstraction, which is essentially hiding the sophisticated details of an object's implementation and exposing only those which may be deemed necessary, in OOPS parlance.

- Another property that can be availed is that of multiple inheritance (Java doesn't allow direct implementation of it through ***extends*** keyword of classes).

---

### Sample Interface:


```
interface Music {
    public abstract void increaseVolume();
    void adjustBass(); //every method declared inside is public and abstract by default
}

public class Party implements Music {
    public void increaseVolume()
    {

        System.out.println("Increased!!");
    }
    public void adjustBass()
    {

        System.out.println("Adjusted!!");
    }
    public static void main(String args[])
    {
        Party par = new Party();
        par.increaseVolume();
        par.adjustBass();

    }
}
 
 ```
 
 ### Output:
 
 ![gsoc1](https://user-images.githubusercontent.com/61372508/135284882-542f0f6b-508f-4589-898a-3da234e32b19.PNG)

 ---
 
 # Static Methods In Interfaces:
 
 ### Static Methods: 
 
 Before we delve deep into static methods used in interfaces, let us first fully comprehend what a static method actually is:
 
* A static method is simply a method which doesn't need an object to be called or invoked.

* By contrast, instance methods need an object every time they're called as they have different *instances* for different objects. 

* A method can be declared static just by appending the keyword **`static`** in front of it.

  *Example:*
  
 ```
 public class Calculator
 {
    static int Add(int a, int b)
    {
        int res = a + b;
        return res;
    }
    public static void main(String args[])
    {
        int addRes = Add(5,3); //will get 8 as result
        System.out.println(addRes);
    }
}

  
  ```
  
  *Output:*
  
  ![gwoc2](https://user-images.githubusercontent.com/61372508/135284946-ace0d4b7-bd5b-4b98-a694-75c275fee0ec.PNG)

  
  

  
  
  
 Starting from Java 8, we get the added feature of being able to use static methods in interfaces too. How does it fare, you may wonder? Let's have a look at the properties that it offers.
  
  ---
  
### Properties of Static Method In Interfaces:
 
 1.  A static method cannot be overriden in the class that is implementing the interface. This is in line with the rule that we observed in case of static methods in *inheritance*. 
 
     #### Illustration of Property #1:

```
interface Property1 
{
    static void display() //static method in an interface
    {
        System.out.println("Hiya! How you doin'?");
    }
    void display2(String s);
}

public class Prop1 implements Property1
{
    public void display2(String s1) //overriding the abstract method of the interface
    {
        System.out.println(s1);
    }
    public static void main(String args[])
    {
        Prop1 obj = new Prop1(); //object of class prop1
        
        Property1.display(); //invoking the static method of the interface
        obj.display2("Howdy? I'm fine!"); /*invoking the non-static or abstract method of the interface*/
        
    }
}


```
 #### Output For Above Code Snippet:
 
 ![gwoc3](https://user-images.githubusercontent.com/61372508/135285199-db213d2b-fa97-4d26-bde7-bb3d892f12cd.PNG)


2. With respect to the scope of the static method of the interface, it has its resultant scope defined within the bounds of the interface only. In case a method with the same name is defined in the class implementing the interface, it's scope will get limited to class itself. To distinguish betwixt them, we invoke the interface's method using **`interfaceName.methodName();`**.

   #### Illustration of Property #2: 
   
```
interface Property2
{
    static double area(double r)
    {
        double a = (Math.PI)*Math.pow(r,2); //area of circle
        return a;
    }
}
public class Prop2
{
    public static void main(String args[])
    {
        double ar1 = Property2.area(2.4); //interface's static method
        double ar2 = area(3.2);           //static method of the class
        System.out.println(ar1);
        System.out.println(ar2);
    }
    static double area(double s)
    {
        double a = (Math.sqrt(3)/4.0)*(Math.pow(s,2)); //area of equilateral triangle
        return a;
    }
}

```

#### Output For Above Code Snippet:

![gwoc4](https://user-images.githubusercontent.com/61372508/135285250-59dade21-af05-423e-85ed-13ac550b7ce5.PNG)

