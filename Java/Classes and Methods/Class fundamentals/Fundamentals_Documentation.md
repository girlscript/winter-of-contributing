<h1 align="center">📝Class Fundamentals</h1>
<p><b>Classes</b> have been used since a long time in Java. However, til now, only the most basic principles of a class has been used. The classes which is created in the previous steps mainly exist simply to encapsulate the main () method, which is used to demonstrate the basics of the java’s syntax. It is known that classes are substantially more powerful than the limited ones presented so far.</p>
<p>A class is a user defined blueprint in which objects are created. It represents the set of properties that are common to all objects of single type. Generally, class declarations include these components: </p>
<div align="center">
     <img alt="Classes" src="https://data-flair.training/blogs/wp-content/uploads/sites/2/2018/01/Class-Declaration-in-Java.jpg">
</div>
<p><i><b>*Source:</b></i> https://data-flair.training/blogs/java-class-and-object/</p>
<ol>
     <li><b>Modifiers</b> for example public, private, and a number of others that you will deal later. (Note- Private modifier can only be applied to Nested Classes).</li>
     <li>The <b>class name</b>, in which initial letter is capitalized by convention.</li>
     <li>The name of the <b>class's parent</b> (superclass) it is preceded by the keyword extends. A class can only extend (subclass) of one parent.</li>
     <li>The comma-separated list of <b>interfaces</b> which is  implemented by the class, if any, preceded by the keyword implements. Note- Class can implement more than one        interface.</li>       
     <li>The <b>class body</b>, is always surrounded by braces, {}.</li>
</ol>
<h3>General form</h3>
<p> Whenever you define a class, you always declare its exact form and nature. <b>How will you do this?</b> You will do this by specifying the data that it contains and the code that operates on that data. While simple classes may contain only code or only data, most of the real-world classes contain both. As you can see, a class code defines the interface to its data.</p>
<p> A class is always declared by using class keyword. The classes that have been used up till this point are actually very limited examples. Classes can usually do get much more complex. The general form of a class is:</p>
<h4>For Example</h4>
<pre>
<code>
public class Student {
   String Height;
   int age;
   String Weight;

   void Marks() {
   }

   void Percentage() {
   }

   void Qualification() {
   }
}
</code>
</pre>
<h4>Variable Types in Class</h4>
<ul>     
   <li><b>Instance variables−</b> Instance variables are the variables within a class but outside the method. These variables are initialized when the class is instantiated. Instance variables can be accessible from inside the method, constructor or blocks of that particular class.</li>
   <li><b>Local variables−</b> Variables defined inside the methods, constructors or blocks are called local variables. The variable will be declared and initialized within the method and the variable will get destroyed when the method has completed.
   <li><b>Class variables−</b> Class variables are the variables declared within a class, outside the method, with the static keyword.</li>     
</ul>
<h3>Constructor</h3>
<p>Every class has a constructor. If we do not write a constructor for a class,Java compiler will build a default constructor for that class. Each time when a new object is created, at least one constructor will get invoked. The main rule of constructors is that they must have the same name as the class. A class can have more than one constructor.</p>
<div align="center">
     <img alt="Contructor" src="https://www.scientecheasy.com/wp-content/uploads/2018/07/java-constructor-overloading.png">
</div>     
<i><b>*Source:</b></i> https://www.scientecheasy.com/2020/06/java-constructor-overloading.html/
<h4>Example:</h4>
<p>Code to find area of Rectangle having AreaOFrec class, which contains four constructors:</p>
<pre>
<code>
    public class AreaOFrec {
    public int width = 0;
    public int height = 0;
    public Point origin;

    // four constructors
    public Rec() {
        origin = new Point(0, 0);
    }
    public Rec(Point i) {
        origin = i;
    }
    public Rec(int j, int k) {
        origin = new Point(0, 0);
        width = j;
        height = k;
    }
    public Rec(Point i, int j, int k) {
        origin = i;
        width = j;
        height = k;
    }

    //  method for moving the rectangle
    public void move(int x, int y) {
        origin.x = x;
        origin.y = y;
    }

    // method for computing the area of the rectangle
    public int getArea() {
        return width * height;
    }
}
</code>
</pre>
<p>This calls one of Rec's constructors that initializes origin to OriginONE. Also, the constructor sets width to 50 and height to 100.</p>
<pre>
<code>
 Rec rectangleONE = new Rec(OriginONE , 50 , 100)
</code>
</pre>
     
