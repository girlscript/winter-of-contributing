# Introduction

_In the Spring framework the objects which form the backbone of your application and that are managed by the Spring **IOC** container are called beans. A **bean** is an object that is **instantiated, assembled** and otherwise **managed** by the Spring IOC container._ Also beans can be said to be one of the many objects of your application.

Let's get a more glimpse of what are beans by firstly understanding what is **Spring IOC container** and more precisely **Inversion of Control (IOC)**.

## Inversion of Control (IOC)

An object which defines what dependencies are required without creating them such a process is called **Inversion of Control**. Such an object delegates the job of constructing and instantiating the dependencies to an IOC container.

Example:

We are defining two domain classes as follows:

```java
//Person class having a property of class Name which is declared below
public class Person {
    private Name name;

    //Parameterized constructor
    public Person(Name name) {
        this.name = name;
    }

    //Getter, setter and other methods
}
```

```java
//Name class with arguements f_name and l_name
public class Name {
    private String f_name, l_name;

    public Address(String f_name, String l_name) {
        this.f_name = f_name;
        this.l_name = l_name;
    }

    //Getter, setter and other methods
}
```

To instantiate **Person** class we traditionally create an object of that class and also the collaborator class **Name** with the following syntax:

```java
Name name = new Name("Yash", "Maroo");
Person person = new Person(name);
```

There is no harm with this approach, wouldn't it be better if we could instantiate it in a better method.

Meaning, here we are only dealing with one instance of Person class, which takes a property of class **Name**, but what if there is a case that we are given a dozen of instances of **Person** class which requires different properties of the **Name** class. Handling such a situation with the above traditional approach would make the task tedious and more prone to errors. So here IOC comes to the rescue.

Instead of constructing the dependencies by ourselves, an object can retrieve its dependencies from the IOC container. All we need to do is provide the container with the correct and appropriate configuration metadata.

So let's learn the syntax of the above-described method in the next section

## Configuration (@Configuration)

Annotating a class with the ```@Configuration``` annotation indicates that the class will be used by the ```JavaConfig``` as a source of bean definitions.

Syntax for ```@Configuration``` anootation:

```java
@Configuration(defaultAutowire = Autowire.BY_TYPE, defaultLazy = Lazy.false)
public class class_Name {
    // bean definitions
}
```

Let us solve the previous problem using ```@Configuration```

```java
@Container
public class Person {
    @Autowired
    private Name name;

    // ...
}
```

Instantiating the Name class with the bean annotations as follows:

```java
@Configuration
public class Name {
    @Bean
    public Name getName() {
        return new Name("Yash", "Maroo");
    }
}
```

An instance of **Person** class will already get injected with the instance of **Name** class already instantiated as (```f_name="Yash", l_name="Maroo"```).

## @Bean annotation

```@Bean``` is a method-level annotation and a direct analog of the XML ```<bean />``` element.

In the previous section you would have already seen the ```@Bean``` annotation in use so just let us once again go through the declaration of the annotation:

```java
@Congiguration
public class AppConfig {
    @Bean
    public TransferService transnferService() {
        return new TransferServiceImpl();
    }
}
```

This is equivalent to the following ```Spring XML```:

```xml
<beans>
    <bean name="transferService" class="com.acme.TransferServiceImpl">
</beans>
```

Both will result in a bean named ```transferService``` being available in the ```BeanFactory/ApplicationContext```.

Let us see the IOC container in action or how to get the beans for the previous example:

## IOC in action

First, we setup an instance of the ```AnnotationConfigApplicationContext``` class to build up a container

```java
ApplicationContext context = new AnnotationConfigApplicationContext(Config.class)
```

Now the following test verifies whether the bean and its values exist or not:

```java
Person person = context.getBean("person", Person.class)
//check for value equality
assertEquals("Yash", company.getName().getFirst())
```

In this documentation we have covered the most basic annotations ```@Bean``` and ```@Configuration```. If you want to learn more annotations you could head to [Spring Beans Annotations](https://javatechonline.com/spring-boot-bean-annotations-with-examples/).

### References

1. [Spring Beans Baeldung](https://www.baeldung.com/spring-bean)
2. [Bean Annotations](https://medium.com/javarevisited/spring-beans-in-depth-a6d8b31db8a1)
3. [Spring Beans Doc](https://docs.spring.io/spring-javaconfig/docs/1.0.0.M4/reference/html/ch02s02.html)
