# Qualifiers

There may me instances where we create more than one bean of the same type but wish to wire only one of them with a property (as you shall se in the example below). In such cases, we can use Qualifiers to remove the confusion by specifying which exact bean will be wired.

Let us look at an example 

## Main.java

```java
package com.gwoc;

import org.springframework.context.ApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;

public class Main {
   public static void main(String[] args) {
      ApplicationContext context = new ClassPathXmlApplicationContext("config.xml");

      Person person = (Person) context.getBean("person");
      person.printBookName();
      person.printBookAuthor();
   }
}
```

## config.xml (Configuration file)

```xml
<?xml version = "1.0" encoding = "UTF-8"?>

<beans xmlns = "http://www.springframework.org/schema/beans"
   xmlns:xsi = "http://www.w3.org/2001/XMLSchema-instance"
   xmlns:context = "http://www.springframework.org/schema/context"
   xsi:schemaLocation = "http://www.springframework.org/schema/beans
   http://www.springframework.org/schema/beans/spring-beans-3.0.xsd
   http://www.springframework.org/schema/context
   http://www.springframework.org/schema/context/spring-context-3.0.xsd">

   <context:annotation-config/>

   <!-- Definition for profile bean -->
   <bean id = "person" class = "com.gwoc.Person"></bean>

   <!-- Definition for book1 bean -->
   <bean id = "book1" class = "com.gwoc.Book">
      <property name = "name" value = "Broken Wings" />
      <property name = "author" value = "Sarojini Naidu"/>
   </bean>

   <!-- Definition for book2 bean -->
   <bean id = "book2" class = "com.gwoc.Book">
      <property name = "name" value = "My Experiment With Truth" />
      <property name = "author" value = "M K Gandhi"/>
   </bean>

</beans>
```

## Person.java

```java
package com.gwoc;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.beans.factory.annotation.Qualifier;

public class Person {

   @Autowired
   private Book myBook;

   public Person()
   {
        System.out.println("Person() : Constructor called");
   }

   public void printBookName(){
      System.out.println("My Book's name is "+myBook.getName());
   }
   public void printBookAuthor() {
      System.out.println("My Book's author is "+myBook.getAuthor());
   }
}
```

## Book.java class

```java
com.gwoc

public class Book {
   private String name;
   private String author;

   public void setName(String name) {
      this.name = name;
   }
   public String getName() {
      return name;
   }
   public void setAuthor(String author) {
      this.author = author;
   }
   public String getAuthor() {
      return author;
   }
}
```

In the config.xml file we have two beans of the same type `(com.gwoc.Book)`. In Person class, the field `myBook` has the  `@autowired` annotation, which means it will inject the property at runtime. Since we have two beans of the same type, there would be a confusion as to which one will be wired. In such cases, we can use the `@Qualifier` annotation along with `@Autowired` to remove the confusion by specifying which exact bean will be wired. 

## Person.java (After adding `@Qualifier` annotation)
```java
package com.gwoc;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.beans.factory.annotation.Qualifier;

public class Person {

   @Autowired
   @Qualifier("book1")           //Added Here
   private Book myBook;

   public Person()
   {
        System.out.println("Person() : Constructor called");
   }

   public void printBookName(){
      System.out.println("My Book's name is "+myBook.getName());
   }
   public void printBookAuthor() {
      System.out.println("My Book's author is "+myBook.getAuthor());
   }
}
```

On Running Main.java , we will get the following output
```
Person() : Constructor called
My Book's name is Broken Wings
My Book's author is Sarojini Naidu
```


