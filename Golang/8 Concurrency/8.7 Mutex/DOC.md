# <img src="https://user-images.githubusercontent.com/75877192/136221503-ff7c102a-c94d-4a36-b896-8418eb2eaa23.png" width="85px">Mutex in Golang.
*Before we write any program, let’s see what is mutex actually?*
---
A Mutex is a method used as a locking mechanism to ensure that
only one Goroutine is running the critical section of code at any point in time to prevent race conditions from happening.
It means that when multiple threads access and modify shared data before they do that they need to acquire a lock.
Then when the work is done they release the lock and let some other goroutines acquire the lock.<br />
*This allows the goroutines to have synchronized access to the data and prevents data race.*

*Mutex is available in the `sync` package.*
---
There are two methods defined on Mutex:-
- Lock
- Unlock<br />
Any code present between a call to `Lock` and `Unlock` will be executed by only one Goroutine.
## ⚒ Syntax of Golang Mutex.
- First, we lock with the help of the mutex, remember to use the mutex we need to import the package called sync, and on sync we can call the mutex locking.
- Here locking means it will not take any other call till it will not complete the current call.
- Second we are operating, you can take any operation like addition or calculation of the amount from your current account also.
- Once the activity for which the code block is there will be done the unlock will be called.
- Unlock will remove the locking which we applied on the code block and again another call be taken.
- Remember we use this only for locking to any very critical type of the code block and that code block is not needed to run in the concurrent. <br />
*Here concurrent means the call should be made only for the code which can not run multiple times for a user or related one specific attribute* 
```go
mutex.Lock()
x = x + 1
mutex.Unlock()
```
In the above code, `x = x + 1` will be executed by only one Goroutine at any point in time thus preventing race conditions.
### *If one Goroutine already holds the lock and if a new Goroutine is trying to acquire a lock, the new Goroutine will be blocked until the mutex is unlocked.*
*To understand this concept, let’s first understand the Race Conditions.*
## 🚀 Race Condition.
The race condition appears when `multiple goroutines` try to access and update the shared data.
They instead fail to update data properly and produce incorrect output. This condition is called race condition and happens due to repeated thread access.
(Basically race condition means you have made a call for code block to perform its job and mean before completing 
the processing we are again calling which will lead to race condition)
### 🎨 1.1 Here is a code example of a program that encounters race conditions:-
```go
package main
import (
	"fmt"
	"sync"
)
var Golang = 0

func worker(wg *sync.WaitGroup) {
	Golang = Golang + 1

	wg.Done()
}
func main() {

	var w sync.WaitGroup

	for i := 0; i < 1000; i++ {
		w.Add(1)
		go worker(&w)
	}

	w.Wait()
	fmt.Println("Value of x", Golang)
}
```
In the program above, the `worker` function increments the value of Golang by 1 and then calls `Done()` on the `WaitGroup` to inform its completion.
The `worker` function is called 1000 times. Each of these Goroutines `run simultaneously` and race condition occurs when trying to increment `Golang` as multiple Goroutines
try to access the value of `Golang` concurrently.
### <div align="center"> 📌 But 📌</div>
***Running the same program multiple times gives different outputs each time because of the race condition.***<br />
Some examples of the outputs are:-
```
1. final value of x 941
2. final value of x 928
3. final value of x 922
```
and so on..

---
Remember one thing, if you will check the output of the above program using the online compiler, you might get the same output 
every time(means no race condition) due to the deterministic nature. So use the local compiler like Visual Studio or CMD to see the results.
### Now Let's solve the above code using Mutex:-
In the program above, we spawn 1000 Goroutines. If each increments the value of x by 1, the final desired value of x should be 1000. 
In this section, we will fix the race condition in the program above using a mutex.<br />
### 🎨 1.2 *Here is an example of a program which how race condition is fixed using Mutex.*
```go
package main
import (
	"fmt"
	"sync"
)
var Golang = 0

func worker(wg *sync.WaitGroup, m *sync.Mutex) {

	m.Lock()
	Golang = Golang + 1
	m.Unlock()
	wg.Done()
}
func main() {

	var w sync.WaitGroup

	var m sync.Mutex

	for i := 0; i < 1000; i++ {
		w.Add(1)
		go worker(&w, &m)
	}

	w.Wait()
	fmt.Println("Value of x", Golang)
}
```
#### 🎯 Output:-
In this example after adding mutex, the program outputs correctly.
```
Value of x 1000
```
Mutex is a struct type and variable `m` of type `Mutex` is created. The `worker function` is changed
so that the code increments `Golang` between `m.Lock()` and `m.Unlock()`.
Now only `one Goroutine` is allowed to execute this piece of code at any point in time and thus race condition is dealt with.
### 🎨 2. Example:-
```go
package main
import (
"fmt"
"sync"
)
var UTV = 0
func worker(wt *sync.WaitGroup, k *sync.Mutex) {
k.Lock()
UTV = UTV + 1
k.Unlock()
wt.Done()
}
func main() {
var s sync.WaitGroup
var n sync.Mutex
for i := 0; i < 1001; i++ {
s.Add(1)
go worker(&s, &n)
}
s.Wait()
fmt.Println("The y value is", UTV)
}
```
In the above code example we are performing the `addition` and we have used `loop` also.
Our goal for this example is to execute only after the completion of the `one call` or in the more technical way
we are trying to `lock` the `operation UTV+1` and each time the next call be made only after the previous call is completed.
With the help of this example, we can see that we can `lock a certain block of code` and hence we are avoiding the `unnecessary race conditions`.
We have to use the `unlock` which means each time when the code block is complete it will be `unlocked again` and ready for use.
#### 🎯 Output:-
```
The y value is 1001
```
## 🛎 Conclusion:-
From this article we saw the basic concept of the mutex in the go language, we saw the working of the mutex and we also saw the syntax of the mutex.
We focused on some of the important examples of the mutex which can be used for the real world. I hope this article helps you learn more about Golang’s features 😃.
### 🥳 Now you are familiar with Mutex.
## Thanks for Reading! ✨
