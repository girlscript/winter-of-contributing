<h1 align="center">📝Class Fundamentals</h1>
<p><b>Classes</b> have been used since the beginning of java. However, until now, only the most rudimentary form of a class has been used. The classes created in the preceding chapters primarily exist simply to encapsulate the main () method, which has been used to demonstrate the basics of the java’s syntax. As you will see, classes are substantially more powerful than the limited ones presented so far.</p>
<p>A class is a user defined blueprint or prototype from which objects are created. It represents the set of properties or methods that are common to all objects of one type. In general, class declarations can include these components, in order: </p>
<ol><li><strong>Modifiers</strong>: A class can be public or has default access .</li><li><strong>class keyword: </strong>class keyword is used to create a class.</li><li><strong>Class name:</strong>&nbsp;The name should begin with an initial letter (capitalized by convention).</li><li><strong>Superclass(if any):</strong> The name of the class’s parent (superclass), if any, preceded by the keyword extends. A class can only extend (subclass) one parent.</li><li><strong>Interfaces(if any):</strong> A comma-separated list of interfaces implemented by the class, if any, preceded by the keyword implements. A class can implement more than one interface.</li><li><strong>Body:</strong> The class body surrounded by braces, { }.</li></ol>
<h3>The general form of class</h3>
<p> When you define a class, you declare its exact form and nature. You do this by specifying the data that it contains and the code that operates on that data. While very simple classes may contain only code or only data, most real-world classes contain both. As you will see, a class’ code defines the interface to its data.</p>
<p> A class is declared by use of the class keyword. The classes that have been used up to this point are actually very limited examples of its complete form. Classes can ( and usually do) get much more complex. The general form of a class definition is shownhere:</p>
<pre>
<code>
class classname {

     type instance-variable1;

     type instance-variable2;

     // ..

type instance-variableN;

 

type methodname1(parameter-list) {

     //body of method

}

type methodname2(parameter-list) {

     //body of method

}

     //..
type methodnameN(parameter-list) {

     // body of method
}
}
</code>
</pre>
<p>The data, or variables, defined with a class are called instance variables. The code is contained within methods. Collectively, the methods and variables defined within a class are called members of the class. In most classes, the instance variables are acted upon and accessed by the methods defined for that class. Thus, it is the methods that determine how a class’ data can be used.</p>
<p>Variables defined within a class are called instance variables because each instance of the class (that is, each object is separate and unique from the data for another.</p>
<p>All methods have the same general form as main (), which we have been using thus far. However, most methods will not be specified as static or public. Notice that the general form of a class does not specify a main () method. Java classes do not need to have a main () method. You only specify one if that class is the starting point for your program.</p>
