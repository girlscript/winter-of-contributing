# **Bounded Types**

## *Defination:*
When we are creating objects to the generic classes we can pass any derived data type as type parameters. These bounded types are used to limit the types that can be passed to type parameters. By usage of these bounded types, we can make the objects of a generic class to have data of specific derived types.

 For example, If we want a generic class that works only with numbers then declare the type parameter of that class as a bounded type to java.lang.Number class. Then while creating objects to that class we have to pass only Number types or its subclass types as type parameters.



### **Syntax for Bounded Type parameters:**

              <T extends SuperClass>

It says that ‘T’ can only be replaced by ‘SuperClass’ or its subclasses. Extends clause is an inclusive bound. It means bound includes ‘SuperClass’ also.


**Example:**

class Bound<T extends A>
{
    
    private T objRef;  
     
    public Bound(T obj){ 
        this.objRef = obj; 
    } 
       
    public void doRunTest(){  
        this.objRef.displayC();  
    }  

}
  
class A     
{  
    public void displayC()   
    {

        System.out.println("Inside super class A");  
    }
}

class B extends A  
{
    
    public void displayC()  
    {
        System.out.println("Inside sub class B");  
    }
}

class C extends A
{
    
    public void displayC() 
    {
        System.out.println("Inside sub class C"); 
    }
}

public class BoundedClass 
{
    public static void main(String a[]) 
    {
        
        // Creating object of subclass C and passing it to Bound as a type parameter.
        
        Bound<C> bc = new Bound<C>(new C());
        bc.doRunTest();
        
        // Creating object of subclass B and passing it to Bound as a type parameter. 
        
        Bound<B> bb = new Bound<B>(new B()); 
        bb.doRunTest(); 
        
        // similarly passing superclass A  
        
        Bound<A> ba = new Bound<A>(new A());    
        ba.doRunTest();
        
    }
}

Output:

Inside subclass C

Inside subclass B

Inside superclass A

**Conclusion**

 These bounded type are very useful for limiting the types that can be passed through type parameters.