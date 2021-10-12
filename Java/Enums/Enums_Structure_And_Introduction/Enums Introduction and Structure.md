# Enums in Java

## Let’s start with What is Enums?

So enums are basically data types in Java which contains a fixed set of constants. These special data types allows a variable to be a set of predefined constants.  
Theses variables when used at any stage later must be equal to one of the values that have been predefined for it in the enums. 

## Now let’s dive into some technical meaning

So Java ***enums*** are added and available for use since **JDK 1.5**. They can be thought of as classes which have a fixed set of constants. 
Now you might be wondering what constants are? So constants are basically variables that cannot be changed. In Java all the constants are written using capital letters.
Thus the enums have constant fields that are static and final implicitly.

The enum types in Java are more useful and powerful than their counterparts in other programming languages. enums are generally used to create our own datatypes like classes. 
The keyword enum type also called ***enumerated data type***, defines a class in Java called ***enum***. This enum can be initialized or declared inside the class or outside it.

As we saw that enum types inherits from the **enum** class thus they cannot inherit from any other class but definitely can implement a number of interfaces. 
They can also have constructors, fields and methods.

Some common example where enum is used can be days of week like (MONDAY, TUESDAY, WEDNESDAY….) or 
months in an year (JANUARY, FEBRUARY, MARCH, APRIL…) or directions, colours etc.


Now let’s move onto the Syntax or declaration of enum

### Syntax
```
enum Name_of_Class{
      //fields separated by commas
}
```
The same Syntax is followed in both the cases i.e. enum declared outside class or inside it.
Given below is a representation of the enum internally. So basically every enum is implemented using a Class internally. 
This also means that every enum constant represents an object of type enum.

### Internal Implementation
```
class ClassName{
      public static final ClassName FIELDNAME = new ClassName();
      // if more fields are present they are also declared the same way.
} 
```

Let’s analyse some simple examples now.

### Example of using enum outside the class
```
enum Space {
	STAR, PLANET, MOON, COMET, ASTEROIDS, DWARF_PLANETS
}
public class Universe {
      public static void main(String[] args) {
	 Space item1 = Space.STAR;
	 System.out.println(item1);
      }
}
```
This will give the Output: 
```
STAR
```

This was an example indicating use of **enum** outside the class. Now lets take one example inside the class. 
I am using a different example to showcase some method but if we use the same example as well the results won’t be affected and would remain same 
for outside as well as inside the class.

### Example of using enum inside class
```
class Compass{
      public enum Direction {NORTH, SOUTH, EAST, WEST}
      public static void main(String[] args){
          for(Direction d : Direction.values()){
		System.out.println(d);
	  }
      }
}
```

Here the output will be
```
NORTH
SOUTH
EAST
WEST
```

Here there are 2 important things to be noted.
-	First is the ***values() Method*** used. So basically there are some methods which Java compiler internally adds within the enum during the compile time. The functionality of **values()** Method is it returns an array containing all the values of the enum.
-	Secondly to print all the values here we have used the ***For Each loop***. 

So let’s analyse two methods that we used in the enum using an example.
- values() Method

##Example
```
enum Space {
	STAR, PLANET, MOON, COMET, ASTEROIDS, DWARF_PLANETS
}

public class Universe {
	public static void main(String[] args) {
	for (Space s : Space.values())
		System.out.println(s);
	}
}
```

This will give the output
```
STAR
PLANET
MOON
COMET
ASTEROIDS
DWARF_PLANETS
```

- valuesOf() Method
Similarly here let’s take an example

##Example
```
public enum Level {
    STAR,
    SUN,
    MOON;
}
```

```
Level level = Level.valueOf(“SUN”);
```

After this the level variable would be pointing to the Univ.SUN. If SUN is containing any value  then it will be printed out.

At last let’s have a look at an example for enum constructor.
```
enum Astro {
 
   SUN("The largest star."),
   EARTH("The living planet"),
   MARS("The red planet");

   private final String objDef;

   private Astro(String objDef) {
      this.objDef = objDef;
   }

   public String getDef() {
      return objDef;
   }
}

class Main {
   public static void main(String[] args) {
      Astro s = Astro.EARTH;
      System.out.println(s.getDef());
   }
}
```

This would yield the output
```
The living planet
```


The constructor for an enum type is package-private or private access. It automatically creates the constants that are defined at the beginning of the enum body. 
enum can contain a constructor and it is executed separately for each enum constant at the time of enum class loading.
We can’t create enum objects explicitly and hence we cannot invoke an enum constructor ourself.

So this was all about Introduction to enum and its Structure. 


## Author
- [@ Abhinay Garg] (https://github.com/techabhi08)


