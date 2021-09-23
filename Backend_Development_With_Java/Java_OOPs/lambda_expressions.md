 ## Lambda Expression
Lambda expressions basically express instances of functional interfaces (An interface with single abstract method is called functional interface. An example is java.lang.Runnable). lambda expressions implement the only abstract function and therefore implement functional interfaces

Lambda expressions are added in Java 8 and provide below functionalities.

- Enable to treat functionality as a method argument, or code as data.
- A function that can be created without belonging to any class.
- A lambda expression can be passed around as if it was an object and executed on demand.

e.g-
```java
interface Lambda{
	public void demo();
}
public class App{
	public static void main(String[] args){
		Lambda lambda = ()->{
			System.out.println("statement 1");
			System.out.println("statement 2");
		};
		lambda.demo();
	}
}
```
* Must be a [functional interface](https://docs.oracle.com/javase/8/docs/api/java/util/function/package-summary.html) ,i.e., shoudl have exactly one abstract method in the interface class.
* [Interface Runnable](https://docs.oracle.com/javase/8/docs/api/java/lang/Runnable.html) is a functional interfact having only one abstract method - void Run(), and can therefore be used as the assignment target for a lambda expression or method reference.

```java
public class App{
	public static void main(String[] args){
		Thread t1 = new Thread(new Runnable){
			public void run(){
				System.out.println("statement 1");
			}
		}
		t1.start();	
	}
}
```
or 
```java
public class App{
	public static void main(String[] args){
		Thread t1 = new Thread(()->
			System.out.println("statement 1"));
		t1.start();
	}
}
```
* Lambda expressions for [comparator funcitons](https://docs.oracle.com/javase/8/docs/api/java/util/Comparator.html), e.g. -
```java
Collections.sort(listName, (listType o1, litType o2)->o1.getName().compareTo(o2.getName()));
```
* [Effectively final variable](https://stackoverflow.com/questions/20938095/difference-between-final-and-effectively-final) concept also applies here, as we saw in the anonymous classes.
```java
int x = 10;
// x++ -> any opertn on x makes it non final.
new Thread(()->System.out.println("The value of x is : " + x)).start();
```
* More examples like using forEach loop
```java
List<Data> list = new ArrayList<>();
list.forEach(temp->println(temp.genName())); // simply print all
```
* Interface [Predicate](https://docs.oracle.com/javase/8/docs/api/java/util/function/Predicate.html)<T> => a functional interface and represents a predicate (boolean-valued function) of one argument.
```java
IntPredicate lestThan18 = new IntPredicate(){
	public boolean test(int value){
		if(value < 18) return true;
		else retur false;
	}
};
println(lessThan18.test(12));
```
using lambda expression
```
	IntPredicate lessThan18 = i->i<18;
	IntPredicate moreThan10 = temp -> temp>10;
	System.out.println(lessThan18.
		and(MoreThan10).test(10); // output is true
```
