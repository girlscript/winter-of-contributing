# **JavaScript Static method**
The JavaScript provides static methods that belong to the class instead of an instance(object) of that class. So, an instance is not required to call the static method. These methods are called directly on the class itself. Static method are often used to create utility functions for an application.

**JavaScript static Method Example 1**
 
```javascript
 <script>
	class Test {  
	  static display() {  
	    return "static method is invoked"  
	  }  
	}  
	document.writeln(Test.display()); 
 </script>  
``` 
**Output**:

static method is invoked

***Points to remember***:- 
  *	JavaScript static methods are shared among instances of a class. Thus, they are associated with the class, not any particular instance of that class.
  *	The static methods are called via the class name, not the instances of the class.
  * The static keyword is used to declare a static method.
  *	The static method can be of any name.
  *	A class can contain more than one static method.
  *	If we declare more than one static method with a similar name,the JavaScript always invokes the last one.
  *	The static method can be used to create utility functions.
  *	We can use this keyword to call a static method within another static method.
  *	We cannot use this keyword directly to call a static method within the non-static method. In such case, we can call the static method either using the class name or as the property of the constructor.

__Contributor :__ [Sakshi Jain](https://github.com/sakshi168) :heart:
