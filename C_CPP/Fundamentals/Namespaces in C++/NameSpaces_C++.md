# Namespaces in C++  
## Introduction  
Let us consider a scenario, in a class we have two persons with the same name *ABC*. Whenever we need to call one of them we have to use some other information that differentiates both of them. For example, we can use their *roll no* for variation.  
The same ambigious situation can occur in C++ programs/applications. To understand how the above condition occurs in C++, consider an example. You have a function *lmn()* in your program, but there is another library function with the same name *lmn()*. In this situation compiler gets confused, which function you're referring to within the program.    
## Namespace  
A **namespace** is developed to overcome such difficulties and formulate many classes so that it is easy to handle the application. It is used to provide additional information to variate the similar classes, functions, variables etc. Basically, a namespace ***describes the scope***.  
- #### Declaration and Definition of a Namespace  
A namespace is defined using the keyword ***namespace*** followed by the name.  
***Syntax :***
~~~CPP
	namespace namespace_name
	{
		//code
	}
~~~
- #### Calling namespace-enabled function/variable  
To call the namespace-enabled function/variable you must use **scope resolution operator(::)**.  
***Syntax :***
~~~CPP
	name :: code;
	//code - variable or function
~~~  
- #### Example  
***Source Code:***
~~~CPP
	#include<iostream>
	using namespace std;
	
	//namespace 1
	namespace first_namespace {
		void fun() {
			cout << "First namespace" << endl;
		}
	}
	
	//namespace 2
	namespace sec_namespace {
		void fun() {
			cout << "Second namespace" << endl;
		}
	}
	int main(){
		//call namespace-enabled function
		first_namespace :: fun();   //from first namespace
		sec_namespace :: fun();    //from second namespace
		return 0;
	}
~~~
***Output:***
~~~output
	First namespace
	Second namespace
~~~  
#### "using" directive -  
You can call the namespace-enabled functions without scope resolution operator(::). Without prepending (::), you can use **using namespace** directive. This directive tells the compiler from which namespace the function/variable must be used for the consequent code.  
***Example***
~~~CPP
	#include<iostream>
	using namespace std;
	
	//namespace 1
	namespace first_namespace {
		void fun() {
			cout << "First namespace" << endl;
		}
	}
	
	//namespace 2
	namespace sec_namespace {
		void fun() {
			cout << "Second namespace" << endl;
		}
	}

	using namespace first_namespace;  //using directive
	int main() {
		fun();   //called from first namespace
		return 0;
	}
~~~	 
~~~output
	First namespace
~~~  
The 'using' directive is also used to refer a particular item within a namespace. For example,
~~~CPP
	#include<iostream>
	using std :: cout; 
	// from std namespace cout is used here 
	
	int main() {
		cout<< "using directive example" << std :: endl;
		return 0;
	}
~~~
~~~output
	using directive example
~~~  
#### Nested namespaces -  
A namespace defined inside another namespace is called as nested namepsaces. 
***Syntax***
~~~CPP
	namespace namespace_1 {
		//code
		namespace namespace_2 {
			//code
		}
	}
~~~  
The members of nested namespaces can be accessed using ***scope resolution operator( :: )***.  
***Syntax***
~~~CPP
	using namespace namespace_1 :: namespace_2
~~~
***Example***
~~~CPP
	#include<iostream>
	using namespace std;
	
	//namespace 1
	namespace first_namespace {
		void fun() {
			cout << "First namespace" << endl;
		}
		namespace nested_namespace {
		void fun() {
			cout << "Nested namespace" << endl;
		}
	}

	using namespace first_namespace :: nested_namespace ;  //using nested namespace
	int main() {
		fun();   //called from nested namespace
		return 0;
	}
~~~	
~~~output
	Nested namespace
~~~  
###### References-
For more details, visit the websites-
- [Tutorials Point](https://www.tutorialspoint.com/cplusplus/cpp_namespaces.htm)
- [javatpoint](https://www.javatpoint.com/cpp-namespaces)
- [Geeks for Geeks](https://www.geeksforgeeks.org/namespace-in-c/)
