# <img src="https://user-images.githubusercontent.com/75877192/134953326-adc222a0-4291-48a6-8817-f41f3c1510cb.png"  width="35px"> What is Go Concurrency?<br>
Concurrent programming is a large topic but it’s also one of the most interesting aspects of the Go language.
It;s a composition of independently executing computations.
Concurrency is a way to structure software, particularly as a way to write clean code that interacts well with the real world.
It has the capability concurrent language and it has lots of things at once,
It is not parallelism.

---
**Before discussing how concurrency is taken care in Go, we must first understand what is concurrency and how it is different from parallelism.**

## ⚔️ Concurrency vs Parallelism:-
Concurrency is not parallelism, although it enables parallelism.</br>

| **Concurrency**  | **Parallelism** |
| ------------- | ------------- |
| 1. Concurrency is the task of running and managing the multiple computations at the same time.  | 1. While parallelism is the task of running multiple computations simultaneously.  |
| 2. Concurrency can be done by using a single processing unit.  | 2. While this can’t be done by using a single processing unit. it needs multiple processing units.  |
| 3. Concurrency increases the amount of work finished at a time.  | 3. While it improves the throughput and computational speed of the system.  |
| 4. Concurrency is achieved through the interleaving operation of processes on the central processing unit(CPU) or in other words by the context switching.  | 4. While it is achieved by through multiple central processing units(CPUs).  |
| 5. Concurrency deals lot of things simultaneously.  | 5. While it do lot of things simultaneously.  |
| 6. In concurrency debugging is very hard.  | 6. While in this debugging is also hard but simple than concurrency.  |
| 7. Concurrency is the non-deterministic control flow approach.  | 7. While it is deterministic control flow approach.  |

#### For better understanding, refer this [video](https://vimeo.com/49718712)!

---
# 📁 What is Goroutines?
Go language provides a special feature known as a Goroutines
Goroutines are one of the most important aspects of the Go programming language. It is the smallest unit of execution and lightweight thread in GoLang. 
It can continue its work alongside the main goroutine.It has its own call stack, which grows and shrinks as required.

---
### 👇 Run Your Go Code:-
<p>Visit: <a href="https://play.golang.org/">play.golang.org!</a></p>

## How to create a Goroutine?
We can create our own Goroutine simply by using go keyword as a prefixing to the function or method.<br>
### Syntax:
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
### 🎉 Advantages of Goroutines:-
1. Goroutines are cheaper than threads.
2. Goroutine are stored in the stack and the size of the stack can grow and shrink according to the requirement of the program. But in threads, the size of the stack is fixed.
3. Goroutines can communicate using the channel and these channels are specially designed to prevent race conditions when accessing shared memory using Goroutines.

### Example:-
```go
package main
  
import "fmt"
  
func display(str string) {
    for w := 0; w < 6; w++ {
        fmt.Println(str)
    }
}
  
func main() {
  
    go display("Welcome")
    display("Girlscript Winter of Contributing")
}
```
#### 🌈 Output:-
Here we simply create a display() function and then call this function in two different ways 
first one is a Goroutine, i.e. go display(“Welcome”) and
another one is a normal function, i.e. `display(“Girlscript Winter of Contributing”)`.

```
Girlscript Winter of Contributing
Girlscript Winter of Contributing
Girlscript Winter of Contributing
Girlscript Winter of Contributing
Girlscript Winter of Contributing
Girlscript Winter of Contributing
```

**📛 But there is a problem:-**

You can see that it's only displaying the result of the normal function that does not display the result of Goroutine 
because when a new Goroutine executed, the Goroutine call return immediately. 
The control does not wait for Goroutine to complete their execution just like normal 
function they always move forward to the next line after the Goroutine call and ignores the value returned by the Goroutine. 

*So, to executes a Goroutine properly, we need to make some changes in our program as shown in the below code:-*

```go 
package main
  
import (
    "fmt"
    "time"
)
  
func display(str string) {
    for w := 0; w < 6; w++ {
        time.Sleep(1 * time.Second)
        fmt.Println(str)
    }
}
  
func main() {

    go display("Welcome")
    display("Girlscript Winter of Contributing")
}
```
#### 🌈 Output:-
We added the Sleep() method in our program which makes the main Goroutine sleeps for 1 second in between 1-second 
the new Goroutine executes, displays “welcome” on the screen, 
and then terminate after 1-second main Goroutine `re-schedule` and perform its operation.

```
Girlscript Winter of Contributing
Welcome
Welcome
Girlscript Winter of Contributing
Girlscript Winter of Contributing
Welcome
Welcome
Girlscript Winter of Contributing
Welcome
Girlscript Winter of Contributing
Girlscript Winter of Contributing
```

---
# 🗂 Channels
A channel in Go provides a connection between two goroutines, allowing them to communicate.
It can be thought of as pipes using which Goroutines communicate. 
Similar to how water flows from one end to another in a pipe, data can be sent from one end and received from the other end using channels.
## ✍️ Declaring channels:-<br>
Each channel has a type associated with it. This type is the type of data that the channel is allowed to transport. No other type is allowed to be transported using the channel.
chan T is a channel of type `T`
The zero value of a channel is `nil`.`nil` channels are not of any use and hence the channel has to be defined using `make` similar to maps and slices.
##### ⌨️ Let's write some code that declares a channel:-
```go
package main

import "fmt"

func main() {  
    var a chan int
    if a == nil {
        fmt.Println("channel a is nil, going to define it")
        a = make(chan int)
        fmt.Printf("Type of a is %T", a)
    }
}
```
#### 🌈 Output:-
The channel `a` declared in line no. 6 is `nil` as the zero value of a channel is `nil`. 
Hence the statements inside the if condition are executed and the channel is defined. 
`a` in the above program is a int channel. This program will output.<br>
```
channel a is nil, going to define it
Type of a is chan int
```
*Enough of theory Let's write a program to understand how Goroutines communicate using channels.*

### Example:-
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
#### 🌈 Output:-
```
Hello world goroutine
main function
```

---
# 🗂 Buffered Channel in Golang
Channels can be defined as a pipes using which Goroutines communicate. 
Similar to water flows from one end to another in a pipe, data can be sent from one end and received from the another end using channels.
Buffered channels can be created by passing an additional capacity parameter to the `make( )` function which specifies the size of the buffer.
### ⚙️ Syntax:-
`ch := make(chan type, capacity)` Here you can see, *capacity* in the above syntax should be greater than `0` for a channel to have a buffer. 
The *capacity* for an unbuffered channel is `0` by default and hence it omit the capacity parameter.

#### A small code example to create a buffered channel.
```go
package main

import (
	"fmt"
)

func main() {

	ch := make(chan string, 2)
	ch <- "Girlscript Winter of Contributing"
	ch <- "Girlscript Winter of Contributing"
	fmt.Println(<-ch)
	fmt.Println(<-ch)
}
```
#### 🌈 Output:-
In above code ,it is possible to write 2 strings into the channel without being blocked. 
It take 2 strings to the channel  and does not block and print the result.<br>
```
Hello world goroutine
main function
```

---
# 🗂 Range and Close
A sender can close a channel to indicate that no more values will be sent. 
Receivers can test whether a channel has been closed by assigning a second parameter to the receive expression: 
after ``v, ok := <-ch`` 
`ok` is false if there are no more values to receive and the channel is closed.
The loop `for i := range ch` receives values from the channel repeatedly until it is closed.

**🔖 Note:-**
*Only the sender should close a channel, never the receiver. Sending on a closed channel will cause a panic.*
Channels aren’t like files; you don’t usually need to close them. 
Closing is only necessary when the receiver must be told there are no more values coming, such as to terminate a range loop.
### Let's see a example:-
```go
 package main

import (
    "fmt"
)

func fibonacci(n int, c chan int) {
    x, y := 0, 1
    for i := 0; i < n; i++ {
        c <- x
        x, y = y, x+y
    }
    close(c)
}

func main() {
    c := make(chan int, 10)
    go fibonacci(cap(c), c)
    for i := range c {
        fmt.Println(i)
    }
}
```
#### 🌈 Output:-
```
0
1
1
2
3
5
8
13
21
34
```

---
# 🗂 What is select?
The `select` statement is used to choose from multiple send/receive channel communication operations.
A `select` blocks until one of its cases can run, then it executes that case. If multiple operations are ready it chooses one at random.
If multiple operations are ready, one of them is chosen at random
The ***syntax*** is similar to `switch` except that each of the case statements will be a channel operation.
#### Let's dive right into some code for better understanding:-
```go
package main

import (  
    "fmt"
    "time"
)

func server1(ch chan string) {  
    time.Sleep(6 * time.Second)
    ch <- "from server1"
}
func server2(ch chan string) {  
    time.Sleep(3 * time.Second)
    ch <- "from server2"

}
func main() {  
    output1 := make(chan string)
    output2 := make(chan string)
    go server1(output1)
    go server2(output2)
    select {
    case s1 := <-output1:
        fmt.Println(s1)
    case s2 := <-output2:
        fmt.Println(s2)
    }
}
```
 
#### 🌈 Output:-<br>
In the program above, the `server1` function in line no. 8 sleeps for 6 seconds then writes the text from server1 to the channel `ch`. 
The `server2` function in line no. 12 sleeps for 3 seconds and then writes from server2 to the channel `ch`.<br>
The main function calls the go Goroutines `server1` and `server2` in line nos. 20 and 21 respectively.
In line no. 22, the control reaches the `select` statement. The `select` statement blocks until one of its cases is ready.<br>
*The program prints:-*
``` 
from server2  
```
---
# 🗂 Default Selection
The default case in a `select` is run if no other case is ready.
This generally Use a `default` case to try a send or receive `select statement` without blocking.
### A small code example:-
```go
package main

import (  
    "fmt"
    "time"
)

func process(ch chan string) {  
    time.Sleep(10500 * time.Millisecond)
    ch <- "process successful"
}

func main() {  
    ch := make(chan string)
    go process(ch)
    for {
        time.Sleep(1000 * time.Millisecond)
        select {
        case v := <-ch:
            fmt.Println("Pull request received: ", v)
            return
        default:
            fmt.Println("No pull requrst received")
        }
    }

}
```
In the program above, the `process` function in line no.8 sleeps for 10500 milliseconds and then writes `process successful` to the `ch` channel. 
This function is called concurrently.
After calling the `process` Goroutine concurrently, an infinite for loop is started in the main Goroutine.
the first case of the select statement namely `case v := <-ch:` will not be ready since the `process` Goroutine will write to the `ch` channel 
Hence the `default` case will be executed during this time and the program will print `No pull requrst received` 10 times.

#### 🌈 Output:-<br>
the `process` Goroutine writes `process successful` to `ch`Now the first case of the select statement will be executed and 
the program will print `Pull request received:  process successful` and then it will terminate. This program will output:-

```
No pull requrst received
No pull requrst received
No pull requrst received
No pull requrst received
No pull requrst received
No pull requrst received
No pull requrst received
No pull requrst received
No pull requrst received
No pull requrst received
Pull request received:  process successful
```

---
# 🗂 Go Mutex
A Mutex is used to provide a locking mechanism to ensure that 
only one Goroutine is running the critical section of code at any point in time to prevent race conditions from happening.
Mutex is available in the <a href="https://pkg.go.dev/sync">sync!</a> package. 
There are two methods defined on <a href="https://pkg.go.dev/sync@master#Mutex">Mutex!</a> namely `Lock` and `Unlock` 
Any code that is present between a call to `Lock` and `Unlock` will be executed by only one Goroutine, thus avoiding race condition.
### Now let's understand how Mutex works:-

*Let's write a simple code*
In the program above, we spawn 1000 Goroutines. 
If each increments the value of x by 1, the final desired value of x should be 1000. 
In this section, we will fix the race condition in the program above using a mutex.

```go
package main  
import (  
    "fmt"
    "sync"
    )
var x  = 0  
func increment(wg *sync.WaitGroup, m *sync.Mutex) {  
    m.Lock()
    x = x + 1
    m.Unlock()
    wg.Done()   
}
func main() {  
    var w sync.WaitGroup
    var m sync.Mutex
    for i := 0; i < 1000; i++ {
        w.Add(1)        
        go increment(&w, &m)
    }
    w.Wait()
    fmt.Println("final value of x", x)
}
```
#### 🌈 Output:-
Mutex is a struct type and we create a zero valued variable `m` of type `Mutex` in line no. 15. 
In the above program we have changed the `increment` function so that the code which increments x `x = x + 1` is between `m.Lock(`) and `m.Unlock()`.
Now this code is void of any race conditions since only one Goroutine is allowed to execute this piece of code at any point in time.

*Now if this program is run, it will output*
```
final value of x 1000
```
---
# 💫 Some Tips and Tricks:-

*This section will grow over time but the main goal is to share some tricks experienced developers discovered over time. 
Hopefully this tips will get new users more productive faster.*

## Alternate Ways to Import Packages:-
There are a few other ways of importing packages. We’ll use the fmt package in the following 
examples:
- `import format "fmt"` - Creates an alias of `fmt.` Preceed all fmt package content with `format.` instead of `fmt..`
-  `import . "fmt"` - Allows content of the package to be accessed directly, without the need for it to be preceded with `fmt.`
-  `import _ "fmt"` - Suppresses compiler warnings related to `fmt` if it is not being used, and executes initialization functions if there are any.
   The remainder of `fmt` is inaccessibl.
   
### How to see what packages my app imports:- 

It’s often practical to see what packages your app is importing. 
Unfortunately there isn’t a simple way to do that, however it is doable via the go list tool and using templates.

Go to your app and run the following.

```git
$ go list -f '{{join .Deps "\n"}}' |  
  xargs go list -f '{{if not .Standard}}{{.ImportPath}}{{end}}'
```

#### Here is an example with the clirescue refactoring example:-

```
$ cd $GOPATH/src/github.com/GoBootcamp/clirescue
$ go list -f '{{join .Deps "\n"}}' | 
  xargs go list -f '{{if not .Standard}}{{.ImportPath}}{{end}}'
github.com/GoBootcamp/clirescue/cmdutil
github.com/GoBootcamp/clirescue/trackerapi
github.com/GoBootcamp/clirescue/user
github.com/codegangsta/cli
```

#### If you want the list to also contain standard packages, edit the template and use:-

```
$ go list -f '{{join .Deps "\n"}}' |  xargs go list -f '{{.ImportPath}}'
```

## Conclusion:-
Conclusion

I briefly talked about the essential concepts in Golang such as goroutines and channels, which are the implementations of concurrency in Go. I hope this article helps you learn more about Golang features 😃.

## Thanks for Reading! ✨
