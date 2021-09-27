# <div align="center">🤖 Defer and Error Handling</div>
## <div align="center">✨ Defer Keyword in Golang</div>
<p align="center"><img src="https://qph.fs.quoracdn.net/main-qimg-d9c1c8b653c9eacbf90ea0c4a6045b13" alt="defer" height=200px width=350px/></p>
In Go language, defer statements delay the execution of the function or method or an anonymous method until the nearby functions returns. In other words, defer function or method call arguments evaluate instantly, but they don't execute until the nearby functions returns. You can create a deferred method, or function, or anonymous function by using the defer keyword.

### **Syntax:**
``` go
// Function
defer func func_name(parameter_list Type)return_type{
// Code
}

// Method
defer func (receiver Type) method_name(parameter_list){
// Code
}

defer func (parameter_list)(return_type){
// code
}()
```
### **Important Points:**

-   In Go language, multiple defer statements are allowed in the same program and they are executed in LIFO(Last-In, First-Out) order as shown in Example 2.
-   In the defer statements, the arguments are evaluated when the defer statement is executed, not when it is called.
-   Defer statements are generally used to ensure that the files are closed when their need is over, or to close the channel, or to catch the panics in the program. <br>
Let us discuss this concept with the help of an example:

**Example 1:**

```go
/* Go program to illustrate the
 concept of the defer statement */
package main
 
import "fmt"
 
// Functions
func mul(a1, a2 int) int {
 
    res := a1 * a2
    fmt.Println("Result: ", res)
    return 0
}
 
func show() {
    fmt.Println("Hello!, User")
}
 
// Main function
func main() {
 
    /* Calling mul() function 
    Here mul function behaves like a normal function */
    mul(45,78) 
 
    /*Calling mul()function Using defer keyword Here the mul() function is defer function */
    defer mul(23, 58)
 
    // Calling show() function
    show()
}
```

**Output:** 
```
Result:  3510 
Hello!, User 
Result:  1334 
```
**Explanation:** In the above example we have two functions named *mul()* and *show()*. Where *show()* function is called normally in the *main()* function, *mul()* function is called in two different ways:

-   First, we call *mul *function normally(without the defer keyword), i.e, mul(45,78) and it executes when the function is called(Output: Result : 3510 ).
-   Second, we call *mul()* function as a defer function using defer keyword, i.e, defer *mul(23, 58)* and it executes(Output: Result: 1334 ) when all the surrounding methods return.

**Example 2:**
```go
/* Go program to illustrate multiple defer statements, to illustrate LIFO policy */
package main
 
import "fmt"
 
// Functions
func add(a1, a2 int) int {
    res := a1 + a2
    fmt.Println("Result: ", res)
    return 0
}
 
// Main function
func main() {
 
    fmt.Println("Start")
    
    /* Multiple defer statements
     Executes in LIFO order */
    defer fmt.Println("End")
    defer add(34, 56)
    defer add(10, 10)
}
```

**Output:**

```
Start 
Result:  20 
Result:  90 
End
```
<hr>

## <div align="center">⚙ Errors and Exception Handling in GoLang</div>
<p align="center"><img src="https://i.morioh.com/5a512c319a.png" alt="error handling in go lang" height=250px width=450px/></p>

Errors are a language-agnostic part that helps to write code in such a way that no unexpected thing happens. When something occurs which is not supported by any means then an error occurs. Errors help to write clean code that increases the maintainability of the program.

- What is an error?
An error is a well developed abstract concept which occurs when an exception happens. That is whenever something unexpected happens an error is thrown. Errors are common in every language which basically means it is a concept in the realm of programming.

- Why do we need Error?
Errors are a part of any program. An error tells if something unexpected happens. Errors also help maintain code stability and maintainability. Without errors, the programs we use today will be extremely buggy due to a lack of testing.

- Errors in GoLang

GoLang has support for errors in a really simple way. Go functions returns errors as a second return value. That is the standard way of implementing and using errors in Go. That means the error can be checked immediately before proceeding to the next steps.

### Simple Error Methods

There are multiple methods for creating errors. Here we will discuss the simple ones that can be created without much effort:

1\. **Using the New function:**
GoLang errors package has a function called New() which can be used to create errors easily. Below it is in action.

```go
package main
 
import (
    "fmt"
    "errors"
)
 
func e(v int) (int, error) {
    if v == 0 {
        return 0, errors.New("Zero cannot be used")
    } else {
        return 2*v, nil
    }
}
 
func main() {
    v, err := e(0)
     
    if err != nil {
        fmt.Println(err, v)      // Zero cannot be used 0
    }   
}
```

2\. **Using the Errorf function:**
The fmt package has an Errorf() method that allows formatted errors as shown below.

```go
fmt.Errorf("Error: Zero not allowed! %v", v)    // Error: Zero not allowed! 0
```

### Checking for an Error
To check for an error we simply get the second value of the function and then check the value with the nil. Since the zero value of an error is nil. So, we check if an error is a nil. If it is then no error has occurred and all other cases the error has occurred.

```go
package main
 
import (
    "fmt"
    "errors"
)
 
func e(v int) (int, error) {
    return 42, errors.New("42 is unexpected!")
}
 
func main() {
    _, err := e(0)
     
    if err != nil {   // check error here
        fmt.Println(err)      // 42 is unexpected!
    }   
}
```

### Panic and recover:-
Panic occurs when an unexpected wrong thing happens. It stops the function execution. Recover is the opposite of it. It allows us to recover the execution from stopping. Below shown code illustrates the concept.

```go
package main
 
import (
    "fmt"
)
 
func f(s string) {
    panic(s)      // throws panic
}
 
func main() {
        // defer makes the function run at the end
    defer func() {      // recovers panic
        if e := recover(); e != nil {
                    fmt.Println("Recovered from panic")
            }
    }()
     
    f("Panic occurs!!!") // throws panic 
     
    /* output:
     Recovered from panic */
}
```

### Creating custom errors
As we have seen earlier the function errors.New() and fmt.Errorf() both can be used to create new errors. But there is another way we can do that. And that is implementing the error interface.

```go
type CustomError struct {
    data string
}
 
func (e *CustomError) Error() string {
    return fmt.Sprintf("Error occured due to... %s", e.data)
}
```

### Returning error alongside values
Returning errors are pretty easy in Go. Go supports multiple return values. So we can return any value and error both at the same time and then check the error. Here is a way to do that.

```go
import (
    "fmt"
    "errors"
)
 
func returnError() (int, error) {  // declare return type here
    return 42, errors.New("Error occured!")  // return it here
}
 
func main() {
    v, e := returnError()
    if e != nil {
        fmt.Println(e, v)  // Error occured! 42
    }
}
```

### Ignoring errors in GoLang
Go has the skip (-) operator which allows skipping returned errors at all. Simply using the skip operator helps here.

```go
package main
 
import (
    "fmt"
    "errors"
)
 
func returnError() (int, error) {  // declare return type here
    return 42, errors.New("Error occured!")  // return it here
}
 
func main() {
    v, _ := returnError()   // skip error with skip operator
     
    fmt.Println(v)    // 42
}
```
<hr>

## <div align="center">🎨 Custom Errors in GoLang</div>
<p align="center"><img src="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRVbFEmVFBP11pID90g3kp0W2BwmPENjsgmqA&usqp=CAU" alt="" height=200px width=350px></p>

### Introduction :-

Go provides two methods to create errors in the standard library, [`errors.New` and `fmt.Errorf`](https://www.digitalocean.com/community/tutorials/handling-errors-in-go#creating-errors). When communicating more complicated error information to your users, or to your future self when debugging, sometimes these two mechanisms are not enough to adequately capture and report what has happened. To convey this more complex error information and attain more functionality, we can implement the standard library interface type, [`error`](https://golang.org/pkg/builtin/#error). <br>
The syntax for this would be as follows:

```go
type error interface {
  Error() string
}
```

The [`builtin`](https://golang.org/pkg/builtin/) package defines `error` as an interface with a single `Error()` method that returns an error message as a string. By implementing this method, we can transform any type we define into an error of our own.
Let's try running the following example to see an implementation of the `error` interface:

```go
package main

import (
    "fmt"
    "os"
)

type MyError struct{}

func (m *MyError) Error() string {
    return "boom"
}

func sayHello() (string, error) {
    return "", &MyError{}
}

func main() {
    s, err := sayHello()
    if err != nil {
        fmt.Println("unexpected error: err:", err)
        os.Exit(1)
    }
    fmt.Println("The string:", s)
}
```

We'll see the following output:

```
Outputunexpected error: err: boom
exit status 1
```

Here we've created a new empty struct type, `MyError`, and defined the `Error()` method on it. The `Error()` method returns the string `"boom"`. 
Within `main()`, we call the function `sayHello` that returns an empty string and a new instance of `MyError`. Since `sayHello` will always return an error, the `fmt.Println` invocation within the body of the if statement in `main()` will always execute. We then use `fmt.Println` to print the short prefix string `"unexpected error:"` along with the instance of `MyError` held within the `err` variable. <br>
Notice that we don't have to directly call `Error()`, since the `fmt` package is able to automatically detect that this is an implementation of `error`. It calls `Error()` transparently to get the string `"boom"` and concatenates it with the prefix string `"unexpected error: err:"`.

### Collecting Detailed Information in a Custom Error

Sometimes a custom error is the cleanest way to capture detailed error information. For example, let's say we want to capture the status code for errors produced by an HTTP request; run the following program to see an implementation of `error` that allows us to cleanly capture that information:

```go
package main

import (
    "errors"
    "fmt"
    "os"
)

type RequestError struct {
    StatusCode int

    Err error
}

func (r *RequestError) Error() string {
    return fmt.Sprintf("status %d: err %v", r.StatusCode, r.Err)
}

func doRequest() error {
    return &RequestError{
        StatusCode: 503,
        Err:        errors.New("unavailable"),
    }
}

func main() {
    err := doRequest()
    if err != nil {
        fmt.Println(err)
        os.Exit(1)
    }
    fmt.Println("success!")
}
```

We will see the following output:

```
Outputstatus 503: err unavailable
exit status 1
```

In this example, we create a new instance of `RequestError` and provide the status code and an error using the `errors.New` function from the standard library. We then print this using `fmt.Println` as in previous examples. <br>
Within the `Error()` method of `RequestError`, we use the `fmt.Sprintf` function to construct a string using the information provided when the error was created.

### Type Assertions and Custom Errors
The `error` interface exposes only one method, but we may need to access the other methods of `error` implementations to handle an error properly. For example, we may have several custom implementations of `error` that are temporary and can be retried---denoted by the presence of a `Temporary()` method. <br>
Interfaces provide a narrow view into the wider set of methods provided by types, so we must use a *type assertion* to change the methods that view is displaying, or to remove it entirely. 
The following example augments the `RequestError` shown previously to have a `Temporary()` method which will indicate whether or not callers should retry the request:

```go
package main

import (
    "errors"
    "fmt"
    "net/http"
    "os"
)

type RequestError struct {
    StatusCode int

    Err error
}

func (r *RequestError) Error() string {
    return r.Err.Error()
}

func (r *RequestError) Temporary() bool {
    return r.StatusCode == http.StatusServiceUnavailable // 503
}

func doRequest() error {
    return &RequestError{
        StatusCode: 503,
        Err:        errors.New("unavailable"),
    }
}

func main() {
    err := doRequest()
    if err != nil {
        fmt.Println(err)
        re, ok := err.(*RequestError)
        if ok {
            if re.Temporary() {
                fmt.Println("This request can be tried again")
            } else {
                fmt.Println("This request cannot be tried again")
            }
        }
        os.Exit(1)
    }

    fmt.Println("success!")
}
```

We will see the following output:

```
Outputunavailable
This request can be tried again
exit status 1
```

Within `main()`, we call `doRequest()` which returns an `error` interface to us. We first print the error message returned by the `Error()` method. Next, we attempt to expose all methods from `RequestError` by using the type assertion `re, ok := err.(*RequestError)`. If the type assertion succeeded, we then use the `Temporary()` method to see if this error is a temporary error. Since the `StatusCode` set by `doRequest()` is `503`, which matches `http.StatusServiceUnavailable`, this returns `true` and causes `"This request can be tried again"` to be printed. In practice, we would instead make another request rather than printing a message.

### Wrapping Errors
Commonly, an error will be generated from something outside of your program such as: a database, a network connection, etc. The error messages provided from these errors don't help anyone find the origin of the error. Wrapping errors with extra information at the beginning of an error message would provide some needed context for successful debugging.

The following example demonstrates how we can attach some contextual information to an otherwise cryptic `error` returned from some other function:

```go
package main

import (
    "errors"
    "fmt"
)

type WrappedError struct {
    Context string
    Err     error
}

func (w *WrappedError) Error() string {
    return fmt.Sprintf("%s: %v", w.Context, w.Err)
}

func Wrap(err error, info string) *WrappedError {
    return &WrappedError{
        Context: info,
        Err:     err,
    }
}

func main() {
    err := errors.New("boom!")
    err = Wrap(err, "main")

    fmt.Println(err)
}
```

We will see the following output:
```
Outputmain: boom!
```

`WrappedError` is a struct with two fields: a context message as a `string`, and an `error` that this `WrappedError` is providing more information about. When the `Error()` method is invoked, we again use `fmt.Sprintf` to print the context message, then the `error` (`fmt.Sprintf` knows to implicitly call the `Error()` method as well).

Within `main()`, we create an error using `errors.New`, and then we wrap that error using the `Wrap` function we defined. This allows us to indicate that this `error` was generated in `"main"`. Also, since our `WrappedError` is also an `error`, we could wrap other `WrappedError`s---this would allow us to see a chain to help us track down the source of the error. With a little help from the standard library, we can even embed complete stack traces in our errors.

### Conclusion

Since the `error` interface is only a single method, we've seen that we have great flexibility in providing different types of errors for different situations. This can encompass everything from communicating multiple pieces of information as part of an error all the way to implementing exponential backoff. While the error handling mechanisms in Go might on the surface seem simplistic, we can achieve quite rich handling using these custom errors to handle both common and uncommon situations. <br>
Go has another mechanism to communicate unexpected behavior, panics. In our next article in the error handling series, we will examine panics---what they are and how to handle them.
<hr>

## <div align="center">🥵 Panic in Golang</div>
In Go language, panic is just like an exception, it also arises at runtime. Or in other words, panic means an unexpected condition arises in your Go program due to which the execution of your program is terminated. Sometimes panic occurs at runtime when some specific situation arises like out-of-bounds array accesses, etc. as shown in Example 1 or sometimes it is deliberately thrown by the programmer to handle the worst-case scenario in the Go program with the help of panic() function as shown in Example 2.
The panic function is an inbuilt function which is defined under the builtin package of the Go language. This function terminates the flow of control and starts panicking.

### Syntax:
```go
func panic(v interface{})
```

It can receive any type of argument. When the panic occurs in the Go program the program terminates at runtime and in the output screen an error message as well as the stack trace till the point where the panic occurred is shown. Generally, in Go language when the panic occurs in the program, the program does not terminate immediately, it terminates when the go completes all the pending work of that program.

For Example, suppose a function A calls panic, then the execution of the function A is stopped and if any deferred functions are available in A, then they are executed normally after that the function A return to its caller and to the caller A behaves like a call to panic. This process continues until all the functions in the current goroutine are returned, after that the program crashes as shown in example 3.

- **Example 1**:

```go
/* Simple Go program which illustrates
 the concept of panic */
package main
  
import "fmt"
  
// Main function
func main() {
  
    /* Creating an array of string type
     Using var keyword */
    var myarr [3]string
  
    /* Elements are assigned
     using an index */
    myarr[0] = "GFG"
    myarr[1] = "GeeksforGeeks"
    myarr[2] = "Geek"
  
    /* Accessing the elements
     of the array
     Using index value */
    fmt.Println("Elements of Array:")
    fmt.Println("Element 1: ", myarr[0])
  
    /* Program panics because the size of the array is 3 and we try to access index 5 which is not  available in the current array,So, it gives an runtime error */
    fmt.Println("Element 2: ", myarr[5])
  
}
```

**Output**:
```
./prog.go:32:34: invalid array index 5 (out of bounds for 3-element array)
```

- **Example 2**:
```go
/* Go program which illustrates how to create your own panic Using panic function */
package main
  
import "fmt"
  
// Function
func entry(lang *string, aname *string) {
  
    /* When the value of lang is nil it will panic  */
    if lang == nil {
        panic("Error: Language cannot be nil")
    }
      
    // When the value of aname is nil it will panic
    if aname == nil {
        panic("Error: Author name cannot be nil")
    }
  
    // When the values of the lang and aname are non-nil values it will print normal output
    fmt.Printf("Author Language: %s \n Author Name: %s\n", *lang, *aname)
}
  
// Main function
func main() {
    A_lang := "GO Language"
  
    // Here in entry function, we pass a non-nil and nil value Due to nil value this method panics
    entry(&A_lang, nil)
}
```
**Output**:

```
panic: Error: Author name cannot be nil

goroutine 1 [running]:
main.entry(0x41a788, 0x0)
    /tmp/sandbox108627012/prog.go:20 +0x140
main.main()
    /tmp/sandbox108627012/prog.go:37 +0x40
```

- **Example 3**:

```go
// Go program which illustrates the concept of Defer while panicking
package main
  
import (
    "fmt"
)
  
// Function
func entry(lang *string, aname *string) {
  
    // Defer statement
    defer fmt.Println("Defer statement in the entry function")
  
    // When the value of lang is nil it will panic
    if lang == nil {
        panic("Error: Language cannot be nil")
    }
      
    // When the value of aname is nil it will panic
    if aname == nil {
        panic("Error: Author name cannot be nil")
    }
  
    // When the values of the lang and aname are non-nil values it will print normal output
    fmt.Printf("Author Language: %s \n Author Name: %s\n", *lang, *aname)
}
  
// Main function
func main() {
  
    A_lang := "GO Language"
  
    // Defer statement
    defer fmt.Println("Defer statement in the Main function")
  
    // Here in entry function, we pass one non-nil and one-nil value Due to nil value this method panics
    entry(&A_lang, nil)
}
```
**Output**:

```
Defer statement in the entry function
Defer statement in the Main function
panic: Error: Author name cannot be nil

goroutine 1 [running]:
main.entry(0x41a780, 0x0)
    /tmp/sandbox121565297/prog.go:24 +0x220
main.main()
    /tmp/sandbox121565297/prog.go:44 +0xa0
```

**Note:** Defer statement or function always run even if the program panics.

### Usage of Panic:

- You can use panic for an unrecoverable error where the program is not able to continue its execution.
- You can also use panic if you want an error for a specific condition in your program.
<hr>

## <div align="center">😄 Recover in Golang</div>

Just like try/catch block in exception in languages like Java, C#, etc. are used to catch exception similarly in Go language, recover function is used to handle panic. It is an inbuilt function which is defined under the builtin package of the Go language. The main use of this function is to regain control of a panicking Goroutine. Or in other words, it handles the panicking behavior of the Goroutine.

### Syntax:

```go
func recover() interface{}
```

### Important Points:

- Recover function is always called inside the deferred function, not in the normal function. If you call recover function inside the normal function or outside the deferred function, then the recover function does not stop the panicking sequence as shown in Example 1. So, always called recover function inside the deferred function because the deferred function does not stop its execution if the program panic, so the recover function stops the panicking sequence by simply restoring the normal execution of the goroutine and retrieves the error value passed to the call of panic as shown in the Example 2.
- Recover function only work if you call in the same goroutine in which panic occurs. If you call it in a different goroutine, then it will not work as shown in Example 3.
- If you want to find the stack trace, then use the PrintStack function which is defined under Debug package.

#### **Example 1:**
```go
// Go program which illustrates the concept of recover
package main
  
import "fmt"
  
/* This function is created to handle the panic occurs in entry function 
but it does not handle the panic occurred in the entry function because 
it called in the normal function */
func handlepanic() {
  
    if a := recover(); a != nil {
        fmt.Println("RECOVER", a)
    }
}
  
// Function
func entry(lang *string, aname *string) {
  
    // Normal function
    handlepanic()
  
    // When the value of lang is nil it will panic
    if lang == nil {
        panic("Error: Language cannot be nil")
    }
      
    // When the value of aname is nil it will panic
    if aname == nil {
        panic("Error: Author name cannot be nil")
    }
      
    fmt.Printf("Author Language: %s \n Author Name: %s\n", *lang, *aname)
    fmt.Printf("Return successfully from the entry function")
}
  
// Main function
func main() {
  
    A_lang := "GO Language"
    entry(&A_lang, nil)
    fmt.Printf("Return successfully from the main function")
}
```

**Output:**
```
panic: Error: Author name cannot be nil

goroutine 1 [running]:
main.entry(0x41a788, 0x0)
    /tmp/sandbox777592252/prog.go:35 +0x180
main.main()
    /tmp/sandbox777592252/prog.go:46 +0x40
```

#### **Example 2:**

```go
// Go program which illustrates the concept of recover
package main
  
import (
    "fmt"
)
  
// This function handles the panic occur in entry function with the help of the recover function
func handlepanic() {
  
    if a := recover(); a != nil {
      
        fmt.Println("RECOVER", a)
    }
}
  
// Function
func entry(lang *string, aname *string) {
  
    // Deferred function
    defer handlepanic()
  
    // When the value of lang is nil it will panic
    if lang == nil {
      
        panic("Error: Language cannot be nil")
    }
      
    // When the value of aname is nil it will panic
    if aname == nil {
        panic("Error: Author name cannot be nil")
    }
    fmt.Printf("Author Language: %s \n Author Name: %s\n", *lang, *aname)
    fmt.Printf("Return successfully from the entry function")
}
  
// Main function
func main() {
  
    A_lang := "GO Language"
    entry(&A_lang, nil)
    fmt.Printf("Return successfully from the main function")
}
```
**Output:**
```
RECOVER Error: Author name cannot be nil
Return successfully from the main function
```

#### **Example 3:**

```go
// Go program which illustrates recover in a goroutine
package main
  
import (
    "fmt"
    "time"
)
  
// For recovery
func handlepanic() {
    if a := recover(); a != nil {
        fmt.Println("RECOVER", a)
    }
} 
/* Here, this panic is not handled by the recover function because of the recover function is not called in the same goroutine in which the panic occurs */
  
// Function 1
func myfun1() {
  
    defer handlepanic()
    fmt.Println("Welcome to Function 1")
    go myfun2()
    time.Sleep(10 * time.Second)
}
  
// Function 2
func myfun2() {
  
    fmt.Println("Welcome to Function 2")
    panic("Panicked!!")
}
  
// Main function
func main() {
  
    myfun1()
    fmt.Println("Return successfully from the main function")
}
```

**Output:**
```
Welcome to Function 1
Welcome to Function 2
panic: Panicked!!

goroutine 6 [running]:
main.myfun2()
    /tmp/sandbox157568972/prog.go:31 +0xa0
created by main.myfun1
    /tmp/sandbox157568972/prog.go:24 +0xc0
```
<hr>

So thats all that you need to know about Defer and Error Handling in Golang . You can definetly visit the official Docs of Golang ig you need more info. 
### References-: 

- The above documentation was prepared by reffering to the <a href="https://golang.org/doc/">official documentation</a> of Golang for authencity and also <a href="https://www.geeksforgeeks.org/">Geeks for geeks</a> for explainging the concepts in detail.
- The images that are used are also used form the following links-:
 <table align="center">
  <tr>
   <td>
    <a href="https://qph.fs.quoracdn.net/main-qimg-d9c1c8b653c9eacbf90ea0c4a6045b13">Link1</a></td>
   <td>
    <a href="https://camo.githubusercontent.com/c725e0da1dbf862ab2f0efee91183f43e6dad0106400ab4e607435bf89ac2ad0/68747470733a2f2f692e6d6f72696f682e636f6d2f356135313263333139612e706e67">Link2</a></td><td> <a href="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRVbFEmVFBP11pID90g3kp0W2BwmPENjsgmqA&usqp=CAU">Link3</a> </td></tr></table>

## THANKS FOR READING! ✨<br>
