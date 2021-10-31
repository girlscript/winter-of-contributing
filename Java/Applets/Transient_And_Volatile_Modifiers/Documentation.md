# Table of Content
* [Transient Modifier](#transient-modifier)
* [Volatile Modifier](#volatile-modifier)

# Transient Modifier

The transient modifier is used in serialisation and it indicates that an instance field is to be omitted from a class's default serialized form. Transient modifier indicates JVM to skip original value of the variable while serialising. 

> When object is deserialized, variable will be initialised to its default value.
* for primitive types : zero
* for reference types : null

The variables whose value can be derived using other serialized objects such as total marks, age of a person etc. are marked with transient keyword.

* **static and transient keyword:** There is no impact of using **transient** keyword with static variables as **static** fields are not part of state of the object. There is no compile-time error though.

* **final and transient keyword:** There is no use of declaring final variable as **transient** because **final** variables are directly serialized by their values. However, there is no compilation error.

### Persist.java

```java
import java.io.*;
public class Persist{
    public static void main(String[] args)throws Exception{
        Student s1 =new Student(1,"Aman",'M',22);//creating object of Student class
        //writing object into file
        FileOutputStream f=new FileOutputStream("test.txt");
        ObjectOutputStream out=new ObjectOutputStream(f);
        out.writeObject(s1);
        out.flush();
        out.close();
        f.close();
        System.out.println("Success");
    }
}
class Student implements Serializable{
    static String school="GWOC";
    int id;
    String name;
    final char gender;
    transient int age;//Age will not be serialized
    public Student(int id, String name,char gender,int age) {
        this.id=id;
        this.name=name;
        this.gender = gender;
        this.age=age;
    }
}

```
**Output:**

```
Success
```

### DePersist.java
```java
import java.io.*;
class DePersist{
    public static void main(String[] args)throws Exception{
        ObjectInputStream in=new ObjectInputStream(new FileInputStream("test.txt"));
        Student s=(Student)in.readObject();
        System.out.println(s.id+" "+s.name+" "+s.age+" "+s.gender);
        System.out.println(Student.school);
        in.close();
    }
}

```

**Output:**

```
1 Aman 0 M
GWOC
```

# Volatile Modifier

Volatile keyword is related to the visibility of variables modified by multiple threads during concurrent programming i.e. every read or write of volatile variable will be to main memory and not CPU cache.

Volatile keyword is used when the value of a variable is modified by different threads. It makes classes thread safe, i.e. multiple threads can use a method and instance of the classes at the same time without any problem. The volatile modifier can be used with primitive types and objects.

Let us assume that multiple threads are working on a **Shared_Object**. If more than one threads run on different processors each thread will have its own local copy of **Shared_Variable**. If one thread modifies the value of the shared variable,it might not be reflected in the original value in the main memory instantly which leads to data inconsistency. There are no guarantees about when the JVM reads data of non-volatile variables from main memory into CPU caches, or writes data from CPU caches to main memory. Thus we use volatile keyword here.

<p align="center"> <img src="https://i.imgur.com/ZWukil2.png" alt="volatile_keword.png" align="centre" width=70% /></p>

```java
// Thread termination with a volatile field
public class StopThread {
    private static volatile boolean stopRequested;
    public static void main(String[] args) throws InterruptedException {
        //creating a thread
        Thread backgroundThread = new Thread(() -> {
            int i = 0;
            while (!stopRequested) {
                try {
                    Thread.sleep(60);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
                System.out.println(++i);
            }
        });
        backgroundThread.start();
        Thread.sleep(300);
        stopRequested = true;
    }
}

```


**Output:**
```
1
2
3
4
5
```
### References:

* [www.geeksforgeeks.org](https://www.geeksforgeeks.org/transient-keyword-java/)

* [www.javatpoint.com](https://www.javatpoint.com/volatile-keyword-in-java#:~:text=Volatile%20keyword%20is%20used%20to,same%20time%20without%20any%20problem.)

* Effective Java (by Addison Wesley)
