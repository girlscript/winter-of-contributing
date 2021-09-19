# Null Safety

With the release of Dart 2, Dart's null safety feature has been enabled by default.

### But What is Null Safety ?

By default, Dart will throw an error if you try to use a null reference. That means any variable you create cannot be null. With null safety, your **runtime** null-dereference errors turn into **edit-time** analysis errors.

##### Let's see an example

```dart
int a = 42; // --> cannot be null so initialized with a value
String name = 'John'; 
final c = foo();

// What Happens if you don't initialize a variable?
int a; // --> Compiler will throw an error

```

**What if you need a variable that can be null ?**

To make a variable nullable, you need to add the `?` operator to its type declaration.

```dart

int ? value;  // --> this variable can be null

// So if you decide to give this variable a value or not, 
//Compiler will not complain about Null Reference
```

## Why Null Safety ?

Let's take a look at the following example:

```dart
// A boolean function which return true if the string 
// length is equal to 0 otherwise false
bool isEmpty(String string) => string.length == 0;

void main() {
    isEmpty(null);
}
```

Now, if you run this code without null safety, you will get an error at runtime:
It throws [*NoSuchMethodError*](https://api.flutter.dev/flutter/dart-core/Object/noSuchMethod.html) exception on the call to [*.length*](https://api.flutter.dev/flutter/dart-core/String/length.html) method.

` The null value is an instance of the Null class, and Null has no “length” getter. `

Now you must be thinking why would I pass a null value to a function if I know that the function will not accept null values ?

In this case your doubt seems legit. But what if you are working on a big codebase and somewhere you are passing a variable to a function but during runtime you get **Null** exception error ? Good luck finding the null variable then.

To know more about Null Safety problem, you can read this [article](https://www.infoq.com/presentations/Null-References-The-Billion-Dollar-Mistake-Tony-Hoare/).