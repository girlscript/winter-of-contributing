# GirlScript Winter of Contributing

[![Backend_Development_PHP](https://img.shields.io/badge/Backend%20Development-PHP%20--%20Dependency%20Injection-orange?style=for-the-badge&logo=github)](https://github.com/girlscript/winter-of-contributing/blob/main/Competitive_Programming/Union%20Find/Disjoint_Set_Union.md)

> ### About
> Language: PHP <br>
> Type: Documentation <br>
> Topic: Dependency Injection <br>
> Sub-Topics: Backend Development, PHP <br>
<br />

# Table of Contents
1. [Introduction](#what-is-dependency-injection)
    - [Problem](#the-actual-problem)
    - [Solution](#solution-with-dependency-injection)
2. [Advantages](#advantages-of-dependency-injections)
3. [Disadvantages](#disadvantages-of-dependency-injections)
4. [Types](#types-of-dependency-injections)

## What is Dependency Injection
> "Dependency Injection is a technique whereby one object supplies the dependencies of another object" — Wikipedia

- In simple terms, Dependency Injection is a design pattern that helps avoid hard-coded dependencies for some piece of code or software.
  The dependencies can be changed at run time as well as compile time. We can use Dependency Injection to write modular, testable and maintainable code:
  
  - **Modular:** The Dependency Injection helps create completely self-sufficient classes or modules
  - **Testable:** It helps write testable code easily eg unit tests for example
  - **Maintainable:** Since each class becomes modular, it becomes easier to manage it

- Consider the Example
```php
class Profile {
    public function activateAccount(Setting $activate)
    {
        $activate->isActive = True;
    }
}
```
Because we need to use the `$setting` object inside the function, we inject/pass it as a parameter.
- Creating objects directly within the class is inflexible because it commits the class to particular objects and makes it impossible to change 
  the instantiation later independently from (without having to change) the class. It stops the class from being reusable if other objects are 
  required, and it makes the class hard to test because real objects can not be replaced with mock objects.
<br />

## The Actual Problem 
### Possible Problems that could arise if Dependency Injection is not used
- Consider the following Example: 

```php
function getEmployees() {
     global $database;
     return $database->getAll('active');
}
```

- Here the function `getEmployees()` has dependency on the `$database` variable (known as Tight Coupling), arising the following problems: 
  > The tightly coupled object is an object that needs to know about other objects and is usually highly dependent on each other's interfaces.
    Changing one object in a tightly coupled application often requires changes to a number of other objects. In the small applications, we can 
    easily identify the changes and there is less chance to miss anything. But in large applications, these inter-dependencies are not always 
    known by every programmer and there is a chance of overlooking changes.
  - The function `getEmployees()` needs a working connection to some database . Whether there is successful connection to database or not is the fate of 
    `getEmployees()` function
  - The `$database` comes from outer scope so chances are it might be overwritten by some other library or code in the same scope in which case function may fail
    
    We could have used the try-catch constructs for the first problem but it still the second problem remains unanswered. 
    <br />

- Consider the second Example:
```php
class Employee
{
    private $database = null;

    public function __construct() {
        $this->database = new database('host', 'user', 'pass', 'dbname');
    }

    public function getEmployees() {
        return $this->database->getAll('active');
    }
}

$emp = new Employee();
$emp->getEmployee();
```
- This code again has these problems:

    - The class `Employee` has implicit dependency on the specific database. All dependencies should always be explicit, not implicit. This defeats 
      Dependency inversion principle

    - If we wanted to change database credentials, we need to edit the `Employee` class which is not good; every class should be completely modular or 
      black box. If we need to operate further on it, we should actually use its public properties and methods instead of editing it again and again. 
      This defeats **Open/closed principle**

    Assuming we are using MySQL as database. What if we wanted to use some other type of database ? You will have to modify it.

    - The `Employee` class does not necessarily need to know about database connection, it should be confined to its own functionality only. So writing database               connection code in `Employee` class doesn't make it modular. This defeats the Single responsibility principle.

    - It would become harder to write unit tests for the `Employeee` class because we are instantiating the database class inside its constructor so it would be               impossible to write unit tests for the `Employee` class without also testing the database class.
<br />

## Solution with Dependency Injection
   - Dependency Injection solves problems such as:
        1. How can an application or class be independent of how its objects are created?
        2. How can the way objects are created be specified in separate configuration files?
        3. How can an application support different configurations?
      ```php
      class Employee 
      {
          private $database = null;

          public function __construct(Database $database) {
              $this->database = $database;
          }

          public function getEmployees() {
              return $this->database->getAll('active');
          }
      }

      $database = new Database('host', 'user', 'pass', 'dbname');
      $emp = new Employee($database);
      $emp->getEmployees();
      ```

- Notice that instead of hard-coding database dependency:
    ```php
    $this->database = new database('host', 'user', 'pass', 'dbname');
    ```
- We are now injecting it into the constructor, that's it:
    ```php
    public function __construct(Database $database)
    ```
- Notice also how we are passing database instance now:
    ```php
    $database = new Database('host', 'user', 'pass', 'dbname');
    $emp = new Employee($database);
    $emp->getEmployees();
    ```
 
> The class `Employee` has implicit dependency on the specific database . All dependencies should always be explicit not implicit. This defeats Dependency 
  inversion principle
- We have already made database dependency explicit by requiring it into the constructor of the `Employee` class:
```php
public function __construct(Database $database)
```
- Here we are taking advantage of `type hinting` by specifying type of object we are expecting which is Database although it wasn't necessary but it is always 
  a good idea to type hint when you can.
> If we wanted to change database credentials, we need to edit the `Employee` class which is not good; every class should be completely modular or black box. 
  If we need to operate further on it, we should actually use its public properties and methods instead of editing it again. This defeats Open/closed principle

- The `Employee` class now does not need to worry about how database is connected. All it expects is `Database` instance. We no more need to edit `Employee` class 
  for it's dependency, we have just provided it with what it needed.

> Let's assume right now class is using `MySQL as database`. What if we wanted to use some other type of `database` ? You will have to modify it.

Again, the `Employee` class doesn't need to know which type of database is used. For the Database, we could now create different adapters for different types of 
database and pass to `Employee` class. For example, we could create an interface that would enforce common methods for all different types of database classes that
must be implement by them. For our example, we pretend that interface would enforce to have a `getEmployees()` method requirement in different types of database 
classes.

> The `Employee` class does not necessarily need to know about database connection, it should be confined to its own functionality only. So writing database 
  connection code in `Employee` class doesn't make it modular. This defeats the `Single responsibility principle.`

Of course `Employee` class now doesn't know how database was connected. It just needs a valid connected `Database` instance.

> It would become harder to write unit tests for the `Employee` class because we are instantiating the database class inside its constructor so it would be 
  impossible to write unit tests for the `Employee` class without also testing the database class.
<br />

## Advantages of Dependency Injections
- **Modular Programming** - The main advantages of using dependency injection is that it encourages modular programming (The process of subdividing a computer program 
  into separate sub-programs)
- **Decoupling** - A service is nothing more than a PHP Object that can perform a certain (global) task. These services can be injected into other services 
  without being dependent on each other.Their purpose is isolated and can easily be swapped out by other components later. 
- **Reusable code** - Another advantage of dependency injection is that your code will be more reusable since there are no direct dependencies on other entities 
  (objects   or classes) in your code.
- **Testable code** - Your code becomes easier to test when you use dependency injection. Dependencies can be injected and therefore, be replaced by mock 
  implementations   that can be configured.
<br />

## Disadvantages of Dependency Injections
- Even though there are uncountable benefits of using Dependency Injection, it is of utmost importance to check the drawbacks and disadvantages provided by it. From encouraging dependence on a dependency injection framework to forcing complexity to move out of classes and into the linkages between classes, which might not 
always be desirable or easily managed, there are several disadvantages of dependency injection.
    - Dependency injection creates clients that demand configuration details to be supplied by construction code. This can be difficult when obvious defaults are               available.
    - Dependency injection can make code difficult to trace (read) because it separates behaviour from construction. This means developers must refer to more files 
      to follow how a system performs.
    - It requires more upfront development effort.
<br />

## Types of Dependency Injections
There are three types of dependency injection 
1. Constructor Injection
2. Setter Injection
3. Interface Injection.
