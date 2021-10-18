# **Method Overriding**

## **What is Method Overriding in Java?**

It is declaration of subclass i.e. child class which is already present in parent class is called as method of overriding in Java.


## **What is usage of Method Overriding in Java?**


Method of overriding is nothing but to provide the specific implementation of which is already provided by parent class/ super class. Runtime polymorphism is also demonstrated by the method Overriding. In method overriding, a parent class overrides a method having the same signature as its parent class.

## **Rules for Method Overriding in Java**

1. The method must be named the same as the parent class's method.
2. The parameter in the method must be the same as in the parent class/ super class.
3. It is compulsary to have inheritance relationship.

Let's look at the issue that we could encounter in the application if we don't utilise method overriding.

```
//A Java programme to show why method overriding is required.
//Here, we are calling the method of parent class with child class object.
//Now creating a parent class
class Airplane {
    void run() {
        System.out.println("Airplane is in the air");
    }
}

// Now creating a child class
class Helicopter extends Airplane {
    public static void main(String args[]) {
        // creating a child class instance
        Helicopter obj = new Helicopter();
        // using a child class instance to invoke the method
        obj.run();
    }
}
```

### **Output:**

```
Airplane is in the air
```

The issue is that I must supply a particular implementation of the run() function in each subclass, which is why we utilise method overriding.

Let's take one more example of method overriding-
Here in this example, we have declared the run method in the another class i.e. subclass in the same way that it is defined in the parent class, but it has a different implementation. Because the method's name and parameters are the same, and there is an inheritance link between the classes, method overriding is possible.

```
//A Java programme that demonstrates the use of a Java Method Overriding
//Now creating a parent class
class Airplane {
    // defining a method
    void run() {
        System.out.println("Airplane is in the air");
    }
}

// Now creating a child class
class Helicopter2 extends Airplane {
    void run() {
        // declaring the same function/method as the parent class
        System.out.println("Helicopter is running safely");
    }

    public static void main(String args[]) {
        Helicopter2 obj = new Helicopter2();
        // creating object
        obj.run(); // calling method/ function
    }
}

```

### **Output:**

```
Helicopter is running safely
```

