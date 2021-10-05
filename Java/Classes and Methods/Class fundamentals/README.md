<h1 align="center">📝Class Fundamentals</h1>
<p><b>Classes</b> have been used since the beginning of java. However, until now, only the most rudimentary form of a class has been used. The classes created in the preceding chapters primarily exist simply to encapsulate the main () method, which has been used to demonstrate the basics of the java’s syntax. As you will see, classes are substantially more powerful than the limited ones presented so far.</p>
<p>A class is a user defined blueprint or prototype from which objects are created. It represents the set of properties or methods that are common to all objects of one type. In general, class declarations can include these components, in order: </p>
<div align="center">
     <img alt="Classes" src="https://data-flair.training/blogs/wp-content/uploads/sites/2/2018/01/Class-Declaration-in-Java.jpg">
</div>
<p><i><b>*Source:</b></i> https://data-flair.training/blogs/java-class-and-object/</p>
<ol>
     <li><b>Modifiers</b> such as public, private, and a number of others that you will encounter later. (However, note that the private modifier can only be applied to Nested Classes).</li>
     <li>The <b>class name</b>, with the initial letter capitalized by convention.</li>
     <li>The name of the <b>class's parent</b> (superclass), if any, preceded by the keyword extends. A class can only extend (subclass) one parent.</li>
     <li>A comma-separated list of <b>interfaces</b> implemented by the class, if any, preceded by the keyword implements. A class can implement more than one interface.</li>        <li>The <b>class body</b>, surrounded by braces, {}.</li>
</ol>
<h3>General form</h3>
<p> When you define a class, you declare its exact form and nature. You do this by specifying the data that it contains and the code that operates on that data. While very simple classes may contain only code or only data, most real-world classes contain both. As you will see, a class’ code defines the interface to its data.</p>
<p> A class is declared by use of the class keyword. The classes that have been used up to this point are actually very limited examples of its complete form. Classes can ( and usually do) get much more complex. The general form of a class definition is shownhere:</p>
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
   <li><b>Instance variables−</b> Instance variables are variables within a class but outside any method. These variables are initialized when the class is instantiated. Instance variables can be accessed from inside any method, constructor or blocks of that particular class.</li>
   <li><b>Local variables−</b> Variables defined inside methods, constructors or blocks are called local variables. The variable will be declared and initialized within the method and the variable will be destroyed when the method has completed.
   <li><b>Class variables−</b> Class variables are variables declared within a class, outside any method, with the static keyword.</li>     
</ul>
<h3>Constructor</h3>
<p>Every class has a constructor. If we do not explicitly write a constructor for a class, the Java compiler builds a default constructor for that class. Each time a new object is created, at least one constructor will be invoked. The main rule of constructors is that they should have the same name as the class. A class can have more than one constructor.</p>
<div align="center">
     <img alt="Contructor" src="https://www.scientecheasy.com/wp-content/uploads/2018/07/java-constructor-overloading.png">
</div>     
<i><b>*Source:</b></i> https://www.scientecheasy.com/2020/06/java-constructor-overloading.html/
