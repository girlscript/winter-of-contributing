# Evolution of Java

Java was conceived by James Gosling, Patrick Naughton, Chris Warth, Ed Frank, and Mike Sheridan at Sun Microsystems, Inc in 1991. The basic idea behind the design of the language was that it is
1. Simple
2. Secure
3. Portable
4. Object-oriented
5. Robust
6. Multi-threaded
7. Architecture-neutral
8. Interpreted
9. High Performance 
10. Distributed
11. Dynamic

While the first version of java was nothing short of revolutionary, it still managed to grow at a rapid rate. Each upgrade in java consisted of major upgrades which reconfigured the way things were handled. The following timeline of upgrades briefly defines the evolution of java through the years.

| Java Version | Year of release | Changes |
|:------------:|----------------:|---------|
| Java 1.0     |            1996 |    -    |
| Java 1.1     |            1997 | The first major upgrade change the way how events were handled and enhanced various features from the initial release. Some of the functions were deprecated.|
| J2SE 1.2     | 1998| It added several new features such as Swing and Collections Framework and it also enhanced JVM. It deprecated several functions from the thread class including ```suspend()```, ```resume()``` and ```stop()```.|
| J2SE 1.3     | 2000 | For the most part, it added to the existing functionality and "tightened up" the development environment.|
| J2SE 1.4     | 2002 | This release contained several important upgrades, enhancements, and additions. It added the new keyword assert, chained exceptions and a channel based I/O subsystem. It enhanced the collections framework and the networking classes.|
| <a href="https://www.oracle.com/java/technologies/javase/releasenotes-v150.html">J2SE 5 </a>       | 2004 | J2SE 5 fundamentally expanded the scope, power and range of the language. The major new features included- generics, annotations, autoboxing and auto-unboxing, enumerations, enhanced for each style for loop, variable length arguments, static imports, formatted I/O, concurrency utilities. These functionalities added an entirely new dimension to java programming.|
| <a href="https://www.oracle.com/java/technologies/javase/webnotes.html"> Java SE 6 </a> | 2006 | While Java SE 6 did not add any new features, it provided enhancement to API libraries, added several new features and offered improvements to the runtime.|
| <a href="https://www.oracle.com/java/technologies/javase/jdk7-relnotes.html"> Java SE 7 (LTS) </a>| 2011 | It addressed several small features such as a string could now be used in a switch statement, introducing binary integer literals, underscores in numeric literals, an expanded try statement, type reference when constructing a generic instance, enhanced exception handling and better type checking.|
| <a href="https://www.oracle.com/java/technologies/javase/8all-relnotes.html"> Java SE 8 (LTS) </a> | 2014 | It added an all-new GUI library JavaFX along with a far-reaching feature, lambda expressions. It also included Date & Time API, Stream API and Optional Class.|
| <a href="https://www.oracle.com/java/technologies/javase/9-all-relnotes.html"> Java SE 9 </a> | 2017 | This update added java platform module system update, jshell, XML Catalog, and JLink. It removed JavaDB from the JDK.|
| <a href="https://www.oracle.com/java/technologies/javase/10u-relnotes.html"> Java SE 10 </a> | 2018 | It added features like local variable type interface, application class data sharing, garbage collector interface etc.|
| <a href="https://www.oracle.com/java/technologies/javase/11-relnotes.html"> Java SE 11 (LTS) </a>| 2018 | This update added multiple features including dynamic class file loader, HTTP client and Transport layer security. While several modules- JavaFX, Java EE and COBRA were removed from JDK.|
| <a href="https://www.oracle.com/java/technologies/javase/12all-relnotes.html"> Java SE 12 </a>| 2019 | It added features like microbenchmark suite, JVM constant API, One AArch64Port, Default CDS Archives etc.|
| <a href="https://www.oracle.com/java/technologies/javase/13-relnote-issues.html"> Java SE 13 </a>| 2019 | It resolved thousands of bugs and provided numerous smaller enhancements. It added dynamic CDS archives, reimplemented the Legacy Socket API and added preview features such as Switch Expressions and Text Blocks.|
| <a href="https://www.oracle.com/java/technologies/javase/14-relnotes.html"> Java SE 14 </a>| 2020 | This update gave a stable functionality to Switch Expression which was in preview. It also added new preview features such as records and the second preview of Text Blocks.|
| <a href="https://www.oracle.com/java/technologies/javase/15u-relnotes.html"> Java SE 15 </a>| 2020 | It added support for Text Blocks and ZGC. Preview features such as Sealed classes, Hidden classes and pattern matching for ```instanceof```.  |
| <a href="https://www.oracle.com/java/technologies/javase/16u-relnotes.html"> Java SE 16 </a>| 2021 | JDK 16 removes Ahead-of-Time compilation and Graal JIT options. Complete support for record (which was a preview in earlier versions) was added along with pattern matching for ```instanceof```. |
| <a href="https://www.oracle.com/java/technologies/javase/17u-relnotes.html"> Java SE 17 (LTS) </a> | 2021 | JDK 17 is the current long term support (LTS). It provides support for Sealed classes and adds Pattern matching fow switch (Preview). It also restores the support for the orignal floating point semantics of the language and VM, thus, the modifier ```strictfp``` introduced in Java 1.2 is no longer required.|
