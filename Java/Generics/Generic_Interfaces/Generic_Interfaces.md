# Generic Interfaces
This is interfaces in Java that deal with abstract data types. They are specified just like generic classes. They can only create reference to interface, not objects. These don't contain any instance variables and constructors. This involves `implement` keyword. They have static and final variables.  

## Syntax:
```
interface interface_name <parameter list type>   { .....  }
class class_name <parameter list type> implements interface_name <type of arguments list>{  .....  }

```   
## Below program shows example of generic interface:
```
class Behaviour
{
    public static void main(String args[])
    {
        Behaviour<Dog> dogBehaviour = new Behaviour<Dog>();
        Dog dog = new Dog();
        dogBehaviour.tellBehaviour(dog);

        Behaviour<Pigeon> pigeonBehaviour = new Behaviour<Pigeon>();
        Pigeon pigeon = new Pigeon();
        pigeonBehaviour.tellBehaviour(pigeon);
    }
}

interface Mammal<T>
{
    void tellBehaviour(T mammal);
}

class Behaviour<T> implements Mammal<T>
{
    public void tellBehaviour(T mammal)
    {
        String mammalName = mammal.getClass().getName();
        if(mammalName.equals("Dog"))
        {
            System.out.println("Dog walk");
        }
        else if(mammalName.equals("Pigeon"))
        {
            System.out.println("Pigeon fly");
        }
    }
}

class Dog
{

}

class Pigeon
{

}
```

## Output:  

> Dog walk   
  Pigeon fly    

## Explanantion:
This interface work same as Generic Classes. Here Mammal is a Generic interface and a generic implementation class is Behaviour. The implementation class is usec to decide the behaviour of the mammals.   

## Benefits:
1. It allows you to put bounds on data types for which your interface is implemented.
2. It is implemented for different and several data types.

## References:
1. [geeksforgeeks](https://www.geeksforgeeks.org/generic-constructors-and-interfaces-in-java/)
2. [meritcampus](https://java.meritcampus.com/core-java-topics/java-generic-interface-or-generic-interface-in-java)