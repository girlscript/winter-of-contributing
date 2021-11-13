# **Ambiguity**
It is an error that caused when erasure causes two seemingly distinct generic declarartions to resolve to the same erased type which result a conflict. There are the issues that are not defined clearly in the Java language specification.

## **Ambiguity method in method overloading :**
During overloading of methods, an ambiguous situation is created in which the compiler cannot determine which method to use. For example, consider the following overloaded _buildTree()_ method declarations:
```
public static void buildTree(int root)
```
```
public static void buildTree(int root.left)
```
   
If you declare a int variable named myRoot and make a method call such as _buildTree(myRoot)_ ;, you will have created an ambiguous situation. Both methods are exact matches for your call. Each version of _buildTree()_ could accept a int, and Java does not presume which one you intend to use.  
         

 **Note**: Sometimes overloading a method that takes a variable-length argument can cause unexpected errors. These errors involve ambiguity and the compiler cannot decide on which method to bind the method call.   
     
## **Ambiguity in multiple inheritances :**  
Java doesn't allow multiple inheritance to `avoid the ambiguity` caused by it.  
`Diamond Problem` is the example of such problem that occurs in multiple inheritance.  
![Hybrid](https://beginnersbook.com/wp-content/uploads/2013/10/Hybrid_inheritance.jpg)  
Above image shows multiple inheritance as class D extends both classes B & C. Lets assume that you have a method in `class A` and `class B` & `C` overrides that method in their own way. Now, here problem arises because D is extending both B & C so if D wants to use the same method, then which method would be called. So, this causes ambiguity and this is the main reason why Java doesn't support multiple inheritance. 

# **Generic Restrictions**
* **Cannot Instantiate Generic Types with Primitive Types :**  

 Pair<int, char> doesn't work.  
You can substitute only non-primitive types for the type parameters k and v as shown below:
 ```
 Pair<Integer, character> p = new Pair<>(8, 'a');
 ```  
 * **Cannot Create Instances of Type Parameters** :   
 An instance of a type parameter cannot be created. The code which is written below is synatatically incorrect.
 ```
 public static <E> void append(ArrayList<E> b){E e} = new E();
 ```  
 * **Cannot Declare Static Fields Whose Types are Types Parameters** :
 Static fields of type parameters are not allowed. Consider the class below and it's two declarations:
 ```
 public class Fruit<T>{
          private static T os;
          ...
          }
```
```
Fruit<Apple> ifruit = new Fruit<>();
Fruit<Grape> sfruit = new Fruit<>();
```
Static field os is shared by ifruit and sfruit. It can't be both Apple and Grape. Therefore, static fields of type parameters are not allowed.
* **Cannot Create Arrays of Prameterized Types** :  
You cannot create arrays of parametrized types. Code written below is syntactically incorrect and won't be compiled.
```
new ArrayList<Integer>[3];
```
You can write code as shown below, thus creating a raw ArrayList.
```
ArrayList<Integer>[] a1 = new ArrayList[3];  // You will get an "unchecked conversion" warning
```  
* **Cannot Overload a Method Where the Formal Parameter Types of Each Overload Erase to the Same Raw Type** :  
A method name cannot be overloaded if type erasure leads to the same raw type.
```
public void print(ArrayList<Integer> p){...}
public void print(ArrayList<Double> p){...}
```
The overloads would all share the same classfile representation and will generate a compile-time error.

* **Generic Exception Restriction** :   
A generic class cannot extends `Throwable` and a catch clause cannot catch an instance of a Type parameter.  
The following declarations are syntactically incorrect.
```
class C<T> extends Throwable{ ... }
class C<T> extends Exception{ ... }
```
```
public static <T extends Exception> void m(...){
    try{...}
    catch(T e){...}
}
```
## **References :**
  ---
 1. [beginnersbook](https://beginnersbook.com/2013/05/java-multiple-inheritance/)
 2. [javase](https://docs.oracle.com/javase/tutorial/java/generics/restrictions.html#instantiate)

 ## **Conclusion**
 ---
You've successfully learnt about __Ambiguity and Generic Restrictions__.

Keep exploring Java :)

Contributor : [Binita Kumari](https://github.com/Binita-tech) 




