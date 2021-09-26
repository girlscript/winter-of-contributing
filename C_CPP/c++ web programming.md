What is C++?
C++ is an OOPs based programming language, much suitable for building high-performance applications. C++ finds its use in applications that need high speed and accuracy, for example, operating systems, gaming applications, Graphical User Interface (GUI), and embedded systems. The most popular IDE for C++ in Visual Studio will be used for the projects below. You can also write your programs on a text editor like Notepad or Textpad and compile them using a compiler like GCC. Some other popular IDEs are Eclipse and Code::Blocks. Turbo C++ is one of the time-tested IDEs that you can use for all C++ programs without any hassles.
Some salient features of C++ are:

-Object-oriented
-Simple to code and understand
-Rich set of libraries
-Efficient memory management 
-Powerful and fast

What is CGI?

CGI stands for Common Gateway Interface is a set of standards that define how information is exchanged from the web server, passing the web user's request to an application program and to receive data back to the user. When any user requests for a web page, the server sends back the requested page. The Web server typically passes the form information to a small application program that processes the data and may send back a confirmation message. This method or convention for passing data back and forth between the server and the application is called the common gateway interface (CGI) and is part of the Web's Hypertext Transfer Protocol (HTTP).

For knowing the concept of CGI, let us take a look at the scenario that takes place when users browse something on the web using a specific URL.

i) The browser you are using contacts the HTTP web server and demands for the URL.
ii) The web server will parse the URL and will search for the file name; if the requested file is found, immediately sends back that file to the browser or else sends an error message.
iii) The web browser takes the response from a web server and displays either file received or an error message.

If you are developing a website and you required a CGI application to control then you can specify the name of the application in the URL (uniform resource locator) that your code in an HTML file.

Server Configuration

Before using the CGI programming, programmers should make sure that the Web server supports CGI and is well configured for handling CGI programs. By convention, CGI files will have an extension as .cgi, though they are C++ executable. By default, Apache Web Server is configured to run CGI programs in /var/www/cgi-bin. Programmers need to have a web server up and running in order to run any CGI program like Perl, shell etc.

Here is an example of CGI using c++:

#include <iostream>
void main ()
{
   cout << "Content-type:text/html\r\n\r\n";
    cout << "<html>\n";
     cout << "<head>\n";
     cout << "<title>Hello Everyone </title>\n";
     cout << "</head>\n";
     cout << "<body>\n";
    cout << "<h3> <b> First CGI program </b> </h2>\n";
    cout << "</body>\n";
   cout << "</html>\n";
}

Compile the above program and give this executable a suitable name along with the extension .cgi. This file needs to be kept in /var/www/cgi-bin directory and it has following content. Before running your CGI program make sure that you have change mode of the file using chmod 755 cplusplus.cgi UNIX command to make the file executable. The above C++ program writes its output on STDOUT file i.e. on the screen. There are some other HTTP headers which are frequently used in CGI programs. They are:

1.Content-type: It is a MIME string which defines the format of the file being returned.
2.Expires: Date: It defines the date the information of the current web page becomes invalid.
3.Location: URL: The URL that has to be returned instead of the URL that is requested.
4.Last-modified: Date: The date of last modification of the resource.
5.Content-length: N: The length, in bytes, of the data being returned. This value 'N' is used by the browser to report the estimated download time.
6.Set-Cookie: String: Used to set the cookie passed through the string

The Advantages of Using C++ for Web Development:

There’s a good reason some of the most visited websites in the world use C++ for their backend code and dynamic content. Sites such as:

~Google
~Facebook
~YouTube
~Amazon
~Twitter
Using C++ greatly improves the performance of their Web applications and reduces the overhead on their servers. Just as important, C++ enables fine control over every aspect of their applications.

C++ is used in many industries and can be used to write almost type of software application. It particularly excels in delivering performance and using system resources efficiently. The control C++ gives a programmer over system resources enables a skilled coder to write programs that are faster, more powerful and more efficient than similar programs written in another programming language.

Since C++ can out perform programs written in other programming languages, enterprises often use C++ to develop functions that have a critical reliance on speed and resource usage.

Why C++ is not used much used in Web Development?

1) Lack of Industrial Standard Rapid Web Application Development Framework
C and C++ language doesn't have a mature and stable rapid web application development Framework like another high-level language framework.

Web Framework	Description
TreeFrog	It is a high-performance full-stack C++ framework for developing Web Application supporting Http and Web Socket Protocol. It is written in C++/Qt.
The framework is just a collection of libraries. And TreeFrog still does not have rich libraries that other rapid web framework does.
CppCMS	It is a high-performance Web Application Framework mainly focuses on performance demanding web application.It supports FastCGI,SCGI,Http.(source)
It is also hard to write, debug, and maintain business logic with C++.

2)Low-Level Programming and Compilation Dependent Language
C/C++ has compiled language which converts code directly into machine-dependent binary code. But in case of Java/C#, it gets compiled to an intermediate code called bytecode(in Java), MSIL(in C#), these are machine-independent code which makes them runnable in any environment on any OS. Due to directly converted into machine-dependent code, C and C++ are not portable.
So, code written in Windows may not work on Linux and vice versa because every machine is different and every binary compiled code is specific to hardware and OS.

Only one solution gets the source code written in C/C++ and compiled it in a specific platform. If windows, then compiled code in a windows environment and if Linux then compiled in Linux environment. and soon. Otherwise, you can use the Virtual Machine concept, but these all are tedious work.

3)No much plugin support and less library support
C++ programmers usually do not have rich library support as another language has. So, if C++ programmers want to do the new things then they may not get the library to play with them. So, the C++ programmer forcefully has to build themselves which is very tedious and difficult.

The lack of standard tools and libraries is one of the key reasons for C++ is not widely used to build a web applications.

3)Syntax
Comparatively syntax of C and C++ is difficult as compared to another high-level language. A high-level language is constantly adding new features and syntax for doing any work fast and in optimizing ways but C++ and C syntax are not added as others.

4) Playing with Pointers:
The developer has to carefully play with a pointer for memory allocation and deallocation which is a difficult task.

5)Memory Allocation and Garbage Collection
You don't have much to worry about garbage collection with C #, Java, Python. There are automatic garbage collection facilities. But in C++ we have to carefully allocate and deallocate memory for objects.

Improperly allocating and deallocating memory may cause unexpected behaviors to an application and server.

5)New Technology Adoption
In this advanced cloud computing era, lots of new web technology and concept are developing, and C++ is still focusing only on system-level programming.

6) No backed support by large companies
Like C# is supported and promoted by Microsoft, Java by oracle. These are there own intellectual property and heavily patented. But C is not owned by companies and are not supported by any companies directly.

7)Server Crashes
If you host webservice build in C++, then if you host in the server, and if any problem due to bad static and dynamic memory allocation server may be crashed and OS will close all sockets.

8)Web Debugging Supporting IDE
Most of the C++ IDE does not have Web Debugging.

9) Hosting is expensive(For cloud-based hosting):
Hosting for the C++ program is expensive.

10) Not hosting provider available for C++
C++ creates native code, and no web hosting service allows you to upload CGI binary programs. Alternatively, You can host or rent a VM yourself. The options BOTH may be more costly than generally available cloud   Website hosting service. And is available for high-level language only.

11) Difficult to Learn
C++ and C are difficult to learn and frustrate the learner as they could not develop anything from the beginning whereas, in python, java, u can do that in less time.

People who want to build web application does not like to learn all complicated stuff present in C++ even for building simple real-life application. But they sooner or later may become frustrated and change the language.

12) JSON support
Data in web applications are mainly transferred in the form of JSON. And JSON in C++ is painful.

13)Large Development time and time to market
Making web applications or any software with C++ takes time because of the absence of packages and libraries. So, it may take a relatively longer time for a developer to build it.

14) Less Developer
It is difficult to get a developer who can code in C++.

15)High Development Cost
As there are fewer developers so obviously they charge more for building applications and also server cost is more.

16) Lack of Learning Source
There are fewer forums and feeds related to the C and C++ web applications. If there are then also they are not well managed and noobie and average developer find difficult learning from them.

17)Difficult to fix the bug.
C++ is an unsafe language when code has to be updated constantly and if problems occur then it is difficult to debug and fix it. And if one develops an application and if left the company and if another came then it will be difficult to understand that code and manage if especially in case of bug fixing.


 