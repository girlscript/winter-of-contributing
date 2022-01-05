
# Autowiring and dependency injection in spring
To understand Autowiring, good understanding of dependency injection is required, so let’s first do that.
# Dependency injection
Dependency injection or DI is a design pattern that is used to make our program independent in and of itself. Dependency injection helps us achieve more abstraction, loose coupling and flexibility in the program. Tight coupling can be easily managed in a small sized program, but when it comes to large scale and gigantic programs it becomes very tedious, difficult and overwhelming to manage the dependencies, because for every minor or major change, we will also have to modify all the other parts that depend on this particular piece of code. To dodge such situations dependency injection comes handy.

That was quick overview of dependency injection as a whole. Let’s dig deeper and understand it in the context of java.

In java we have loads of classes and to use any class we will have to create an object of that class, with all these different objects dependency of one object on another is unavoidable. <br/>
That doesn’t sound like such a big deal isn’t it? I mean what is so problematic about
```java
className object = new className();
```
Well it is, the moment we declare the new object we have made the program implementation concrete and endorsed tight coupling and now this doesn’t sound good, right? Hence, we require dependency injection. Dependency injection helps this scenario by acting as an external agent which will provide these dependencies for us. Concepts like dependency injection containers are responsible for creating such objects and injecting them in the places required, the Spring framework offers to be this external agent in java.


Other reason why tight coupling is avoided is “testing”. Tight coupling makes it hard to perform black box testing of the application. (Black-box testing is a method of software testing that examines the functionality of an application without peering into its internal structures or workings.)
# Autowiring
Autowiring is a feature of spring framework wherein the spring container injects the dependencies automatically. Before the spring framework, dependencies have to be manually injected by the programmer.

Before we dig deeper in Autowiring, the concept of "beans" must be made clear.
-	Beans

Dependency injection in spring is possible because spring behaves as a container of beans; it’s like a factory of beans. These beans are nothing but the objects that we talked about a while ago. All the objects that the dependency injection creates are called beans. In spring, the container is known as the spring container. Inside this container we can have as many objects/beans and the spring container manages them: their lifecycles, injection, instantiation and destruction. With this we are not required to create new objects with new keyword method, rather the spring container will do that for us, in addition, it will also manage them.


## Autowiring in java can be achieved in two ways.
1)	XML configuration
2)	Annotations 
# Autowiring using XML
To practically demonstrate Autowiring using xml firstly we need to make two classes under the same package that depends on each other. 
```java
class Company
{
        private Product prod;

        public Product getProduct()
        {
            return prod;
        }

        public void setProduct()
        {
            this.prod= prod;
        }

        public Company(Product prod)
        {
            this.prod=prod;
        }
}

class Product
{
        private float price;
        private String modelNo;

        public float getPrice()
        {
            return price;
        }
        
        public void setPrice()
        {
            this.price=price;
        }
        public String getModelNo()
        {
            return modelNo;
        }
        
        public void setModelNo()
        {
            this.modelNo=modelNo;
        }
	
	  

}
```
We have two classes, company and product. The class product is dependent on Class Company. Now, coming to the injection part. In the .xml configuration file we will have to declare the beans 
```java
<?xml version="xx.oo" encoding="UTF-8"?>
<beans
 xmlns="http://www.springframework.org/schema/beans"  
    xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"  
    xmlns:p="http://www.springframework.org/schema/p"  
    xsi:schemaLocation="http://www.springframework.org/schema/beans   
http://www.springframework.org/schema/beans/spring-beans-3.0.xsd "
>


<bean class="packageName.Product" name="prod">
        <property name="price" value=34.95/>
        <property name="modelNo" value="IND9970"/>
</bean>     
<!-- an object/bean with price=34.95 and modelNo=IND9970 will be created in the dependency injection container or the spring container.   -->

<bean class="packageName.Company" name="novel1" autowire="byName" 
<!-- byName is mode of Autowiring , we will see in a moment -->
 />

</beans>
```


That’s all the .xml file is setup.
After this the company class will automatically get injected with object/bean of product class.

The interfaces BeanFactory and ApplicationContext represent the Spring IoC container.   the ApplicationContext is a sub-interface of the BeanFactory. This application context interface will fetch the bean from the spring ioc container. So, in the main() we need to do some work.

```java
	public static void main(String[] args) {  
	    ApplicationContext context=new ClassPathXmlApplicationContext("applicationContext.xml");  
	    Company comp=context.getBean("prod",Company.class);  
	    System.out.println(comp); //this will print Company [ prod=Product [ price=34.95 modelNo=IND9970]] 
	} 
``` 


## Modes of Autowiring 
1)	byName: the bean is searched by name, in this case the property name and the bean name must be same. 
```java
<bean class="packageName.Product" name="novel1" autowire="byName" />
```

2)	byType: the search is made on the basis of type, the type of property name and the type of bean must be same but the names can be different.
```java
<bean class="packageName.Product" name="novel1" autowire="byType" />
```

3)	Constructor: the dependency is injected by calling the constructor of the class, the constructor with maximum number of parameters is called.
```java
<bean class="packageName.Product" name="novel1" autowire="constructor" />
```

4)	no: this is the default Autowiring mode, it means Autowiring is disabled by default.

# Autowiring using annotations 
With Spring 2.5 we can skip all the drama in xml and easily achieve Autowiring using annotations. 
As the annotation wiring is not enabled in the spring container, it has to be turned on. Inside the xml configuration, between the beans tag include this:
```java
<context:annotation-config/>
 
i.e.,
<?xml version = "xx.oo" encoding = "UTF-8"?>

<beans xmlns = "http://www.springframework.org/schema/beans"
   xmlns:xsi = "http://www.w3.org/2001/XMLSchema-instance"
   xmlns:context = "http://www.springframework.org/schema/context"
   xsi:schemaLocation = "http://www.springframework.org/schema/beans
   http://www.springframework.org/schema/beans/spring-beans-3.0.xsd
   http://www.springframework.org/schema/context
   http://www.springframework.org/schema/context/spring-context-3.0.xsd">

   <context:annotation-config/>
   

</beans>
```


 Both XML and annotation based configuration can be made, but the annotation injection is performed before the XML one, so the former will override the latter.


Using the annotation wiring, the above company and product problem can be solved by just using @Autowired annotation.
```java
@Component
class Company
{
        @Autowired
   private Product prod;

        public Product getProduct()
        {
            return prod;
        }

        public void setProduct()
        {
            this.prod= prod;
        }

        public Company(Product prod)
        {
            this.prod=prod;
        }
}

@Component
class Product
{
	 
        private float price;
        private String modelNo;

        public float getPrice()
        {
            return price;
        }
        
        public void setPrice()
        {
            this.price=price;
        }
        public String getModelNo()
        {
            return modelNo;
        }
        
        public void setModelNo()
        {
            this.modelNo=modelNo;
        }
	
	  

}
```
That's all !!
Happy coding :)




