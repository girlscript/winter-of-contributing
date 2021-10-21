#  <img src="https://user-images.githubusercontent.com/75877192/137760059-12d31b65-29f2-42a9-bc42-fdf41f52fe85.png" width="100">What is Goroutines.
*Go language provides a special feature known as Goroutines.*<br /> It is a function or method which executes independently and simultaneously in connection.
It can continue its work alongside the main goroutine and thus creating concurrent execution.
There are various activities expected to perform simultaneously, the Goroutines can be utilized to deal with this.
It is a lightweight thread in GoLang, the cost of creating a Goroutine is tiny when compared to a thread.
Hence it's common for Go applications to have thousands of Goroutines running concurrently.

Or in other words, every concurrently executing activity in the Go language is known as Goroutines.
Every program contains at least a single Goroutine and that Goroutine is known as the main Goroutine.
The Golang Goroutines call makes functions run immediately and running continues in the background while the rest of the program continues its execution.
All the Goroutines are working under the main Goroutines if the main Goroutine is terminated, then all the goroutine present in the program are also terminated.

<div align="center"><img src="https://user-images.githubusercontent.com/75877192/137954349-58b29c7f-c8e5-4b1a-a0df-036372939772.png" width="330"></div>

***Goroutine always works in the background. :octocat:***

---
### ❓ When to use Goroutines in GoLang.
- When one task can be split into different segments to perform better.
- When making multiple requests to different API endpoints.
- Any work that can utilize a multi-core CPU should be well optimized using goroutines.
- Running background operations in a program might be a use case for a goroutine.
## 🚀 How to start a Goroutine?
We can create our Goroutine simply by using the go keyword as a `prefixing` to the function or method.
Prefix the function or method call with the keyword `go` and you will have a new Goroutine running concurrently.
### ⚙️ Syntax:
Creating a goroutine is really simple. We simply need to add keyword “go” in front of the function we want to run concurrently and it will work.<br>
**Here is an example:-**
```go
func name(){
// statements
}

/* using go keyword as the 
   prefix of your function call */
go name()
```
***Let's create a Goroutine:-***<br />
In the code below `go hello()` starts a new Goroutine. Now the `hello()` function will run concurrently along with the `main()` function.
The main function runs in its own Goroutine and it's called the main Goroutine.
#### Example:-
```go 
package main

import (  
    "fmt"
)

func hello() {  
    fmt.Println("Hello world goroutine")
}
func main() {  
    go hello()
    fmt.Println("main function")
}
```
***Run this program and you will have a surprise!***

---
##### Output:-
This program only outputs the text
```
main function.
```
The reason it happens is the main goroutine does not wait for the other goroutine to finish.
It simply comes back to the main thread and executes without waiting for the goroutine to finish.<br />
To fix that we can make the main goroutine sleep for a bit. That way we provide enough time for the goroutine to execute and finish.
#### Let's fix the above code example:-
```go
package main

import (  
    "fmt"
    "time"
)

func hello() {  
    fmt.Println("Hello world goroutine")
}
func main() {  
    go hello()
    time.Sleep(1 * time.Second)
    fmt.Println("main function")
}
```
In the program above, we have called the `Sleep` method of the time package which sleeps the goroutine in which it is being executed.
In this case, the main goroutine is put to sleep for 1 second. Now the call to `go hello()` has enough time to execute before the main Goroutine terminates.
This program first prints `Hello world goroutine`, waits for 1 second, and then prints `main function.`
##### Output:-
```
Hello world goroutine
main function
```
### 🎉 Advantages of Goroutines over threads.
-  Goroutines are extremely cheap when compared to threads. It start with 8kb in size and its size can grow or shrink based upon runtime requirements.
Whereas OS threads are more than 1 mb in size.
- Goroutine are stored in the stack and the size of the stack can grow and shrink according to the requirement of the program.
- Goroutines communicate using channels.
- Goroutines communicate through built-in primivate channels which are built to handle race conditions.
Hence the communication between goroutines is safe and prevents explicit locking.
## Main goroutine
The `main goroutine` represents the `main program`. Once it exits then it means that the program has exited.
The `main function` in the `main package` is the main goroutine. All goroutines are started from the main goroutine.
These goroutines can then start multiple other goroutines and so on.<br />
Goroutines don’t have parents or children. When you start a goroutine it just executes alongside all other running goroutines.
Each goroutine exits only when its function returns. The only exception to that is that all goroutines exit when the main goroutine (the one that runs `function main`) exits.
***Let’s see a program to demonstrate that goroutines don’t have parents or children.***
#### Example:-
```go
package main

import (
    "fmt"
    "time"
)

func main() {
    go start()
    fmt.Println("Started")
    time.Sleep(1 * time.Second)
    fmt.Println("Finished")
}

func start() {
    go start2()
    fmt.Println("In Goroutine")
}
func start2() {
    fmt.Println("In Goroutine2")
}
```
In the above program, the first goroutine starts the second goroutine. The first goroutine then prints `In Goroutine` and then it exits.
The second goroutine then starts and prints `In Goroutine2`. It shows that goroutines don’t have parents or children and they exist as an independent execution. 
##### Output:-
```
Started
In Goroutine
In Goroutine2
Finished
```
*Also, please note that Timeout was just for illustration and should never be used in a production environment.*
## Starting multiple Goroutines.
Let's write one program that starts multiple Goroutines to better understand Goroutines.
#### Example:-
```go
package main

import (  
    "fmt"
    "time"
)

func numbers() {  
    for i := 1; i <= 5; i++ {
        time.Sleep(250 * time.Millisecond)
        fmt.Printf("%d ", i)
    }
}
func alphabets() {  
    for i := 'a'; i <= 'e'; i++ {
        time.Sleep(400 * time.Millisecond)
        fmt.Printf("%c ", i)
    }
}
func main() {  
    go numbers()
    go alphabets()
    time.Sleep(3000 * time.Millisecond)
    fmt.Println("main terminated")
}
```
The above program starts with two Goroutines. These two Goroutines now run concurrently. The `numbers` Goroutine sleeps initially for 250 milliseconds and then prints `1`,
then sleeps again and prints `2` and the same cycle happens till it prints 5. Similarly, the `alphabets` Goroutine prints alphabets from `a` to `e` and
has 400 milliseconds of sleep time. The main Goroutine initiates the `numbers` and `alphabets` Goroutines, sleeps for 3000 milliseconds and then terminates.
##### Output:-
```
1 a 2 3 b 4 c 5 d e main terminated
```
## Anonymous Goroutine.
In Go language, you can also start Goroutine for an anonymous function, or in other words, you can create an anonymous Goroutine
simply by using the go keyword as a prefix of that function as shown in the below:-
### ⚙️ Syntax:
```go
/* Anonymous function call */
go func (parameter_list){
// statement
}(arguments)
```
#### Example:-
```go
package main

import (
	"fmt"
	"time"
)

func main() {

	fmt.Println("Welcome!! to Main function")

	go func() {

		fmt.Println("Welcome!! to Golang")
	}()

	time.Sleep(1 * time.Second)
	fmt.Println("GoodBye!! to Main function")
}
```
##### Output:-
```
Welcome!! to Main function
Welcome!! to Golang
GoodBye!! to Main function
```
## 🛎 Conclusion:-
I briefly talked about the concepts of Goroutines such as What is Goroutines, When to use and How to start Goroutines, Advantages of Goroutines.
And I also talked about the Main goroutine, multiple Goroutines, Anonymous Goroutine.
We focused on some of the important examples of the Goroutines which can be used for the real world. I hope this article helps you learn more about Goroutines’s features 😃.
### Thanks for reading! ✨
