# <div align="center">🧲 Polymorphism in GoLang</div>
<p align="center"><img src="https://miro.medium.com/max/1200/1*BruAhzl61NYiVz83ZvEcEg.jpeg" alt="polymorphism" height=300x width=650px/></p>
</br>
In Object-Oriented Programming, an object can behave like another object. This property is called **Polymorphism**. This post will cover how we achieve **Polymorphism** in GoLang.

## 🤔 What is Polymorphism?

**Polymorphism** is a property that is available to many Object Oriented-languages. Go despite not being an OO-language achieves polymorphism through [interfaces](https://golangdocs.com/interfaces-in-golang).

Here is an example of polymorphism in action:-

```go
package main
 
import "fmt"
 
// declare interface
type Dog interface {
    Bark()
}
 
// declare struct
type Dalmatian struct {
    DogType string
}
 
// implement the interface
func (d Dalmatian) Bark() {
    fmt.Println("Dalmatian barking!!")
}
 
func MakeDogBark(d Dog) {
    d.Bark()
}
 
func main() {
    d := Dalmatian{"Jack"}
    MakeDogBark(d)                    // Dalmatian barking!!
}
```
In the code above, the struct Dalmatian implements the Dog interface. Thus the struct becomes the type Dog and so that it can be passed in that function.
Now, we can simply add any type and implement that interface and the type will behave as that interface. That is polymorphism. An object taking many different forms.

## ✨ Polymorphism using interfaces

<p align=center>
<img src="https://zkm.de/media/styles/r17_720/public/bild/interfaces_logo.jpg?itok=-8Wk2whC&c=40e89473a13cc4a7badec2836961b9fb" alt="interfaces" height=300px width=550px/>
</p>
In GoLang, polymorphism is achieved mainly using interfaces. A type implementing a function defined in interface becomes the type defined as an interface. This is the property that makes polymorphism achievable in Go.

**A variable of type interface can hold any value which implements the interface. This property of interfaces is used to achieve polymorphism in Go.**

Let's understand polymorphism in Go with the help of a program that calculates the net income of an organization. For simplicity, let's assume that this imaginary organization has income from two kinds of projects viz. *fixed billing* and *time and material*. The net income of the organization is calculated by the sum of the incomes from these projects. To keep this tutorial simple, we will assume that the currency is dollars and we will not deal with cents. It will be represented using `int`.

Let's first define an interface `Income`:-

```go
type Income interface {
    calculate() int
    source() string
}
```

The `Income` interface defined above contains two methods `calculate()` which calculates and returns the income from the source and `source()` which returns the name of the source.

Next, let's define a struct for `FixedBilling` project type:-

```go
type FixedBilling struct {
    projectName string
    biddedAmount int
}
```

The `FixedBilling` project has two fields `projectName` which represents the name of the project and `biddedAmount` which is the amount that the organization has bid for the project.

The `TimeAndMaterial` struct will represent projects of Time and Material type:-

```go
type TimeAndMaterial struct {
    projectName string
    noOfHours  int
    hourlyRate int
}
```

The `TimeAndMaterial` struct has three fields names `projectName`, `noOfHours` and `hourlyRate`.

The next step would be to define methods on these struct types which calculate and return the actual income and source of income:-

```go
func (fb FixedBilling) calculate() int {
    return fb.biddedAmount
}

func (fb FixedBilling) source() string {
    return fb.projectName
}

func (tm TimeAndMaterial) calculate() int {
    return tm.noOfHours * tm.hourlyRate
}

func (tm TimeAndMaterial) source() string {
    return tm.projectName
}
```

In the case of `FixedBilling` projects, the income is just the amount bid for the project. Hence we return this from the `calculate()` method of `FixedBilling` type.

In the case of `TimeAndMaterial` projects, the income is the product of the `noOfHours` and `hourlyRate`. This value is returned from the `calculate()` method with receiver type `TimeAndMaterial`.

We return the name of the project as the source of income from the `source()` method.

Since both `FixedBilling` and `TimeAndMaterial` structs provide definitions for the `calculate()` and `source()` methods of the `Income` interface, both structs implement the `Income` interface.

Let's declare the `calculateNetIncome` function which will calculate and print the total income:-

```go
func calculateNetIncome(ic []Income) {
    var netincome int = 0
    for _, income := range ic {
        fmt.Printf("Income From %s = $%d\n", income.source(), income.calculate())
        netincome += income.calculate()
    }
    fmt.Printf("Net income of organization = $%d", netincome)
}
```

The `calculateNetIncome` function above accepts a slice of `Income` interfaces as argument. It calculates the total income by iterating over the slice and calling `calculate()` method on each of its items. It also displays the income source by calling `source()` method. Depending on the concrete type of the `Income` interface, different `calculate()` and `source()` methods will be called. Thus we have achieved polymorphism in the `calculateNetIncome` function.

So now ,the only part remaining in the program is the main function:-

```go
func main() {
    project1 := FixedBilling{projectName: "Project 1", biddedAmount: 5000}
    project2 := FixedBilling{projectName: "Project 2", biddedAmount: 10000}
    project3 := TimeAndMaterial{projectName: "Project 3", noOfHours: 160, hourlyRate: 25}
    incomeStreams := []Income{project1, project2, project3}
    calculateNetIncome(incomeStreams)
}
```

In the `main` function above we have created three projects, two of type `FixedBilling` and one of type `TimeAndMaterial`. Next, we create a slice of type `Income` with these 3 projects. Since each of these projects has implemented the `Income` interface, it is possible to add all three projects to a slice of type `Income`. Finally, we call `calculateNetIncome` function and pass this slice as a parameter. It will display the various income sources and the income from them.

Here is the full program for your reference:-

```go
package main

import (
    "fmt"
)

type Income interface {
    calculate() int
    source() string
}

type FixedBilling struct {
    projectName string
    biddedAmount int
}

type TimeAndMaterial struct {
    projectName string
    noOfHours  int
    hourlyRate int
}

func (fb FixedBilling) calculate() int {
    return fb.biddedAmount
}

func (fb FixedBilling) source() string {
    return fb.projectName
}

func (tm TimeAndMaterial) calculate() int {
    return tm.noOfHours * tm.hourlyRate
}

func (tm TimeAndMaterial) source() string {
    return tm.projectName
}

func calculateNetIncome(ic []Income) {
    var netincome int = 0
    for _, income := range ic {
        fmt.Printf("Income From %s = $%d\n", income.source(), income.calculate())
        netincome += income.calculate()
    }
    fmt.Printf("Net income of organization = $%d", netincome)
}

func main() {
    project1 := FixedBilling{projectName: "Project 1", biddedAmount: 5000}
    project2 := FixedBilling{projectName: "Project 2", biddedAmount: 10000}
    project3 := TimeAndMaterial{projectName: "Project 3", noOfHours: 160, hourlyRate: 25}
    incomeStreams := []Income{project1, project2, project3}
    calculateNetIncome(incomeStreams)
}
```

This program will output:-

```
Income From Project 1 = $5000
Income From Project 2 = $10000
Income From Project 3 = $4000
Net income of organization = $19000
```

### Adding a new income stream to the above program

Let's say the organization has found a new income stream through advertisements. Let's see how simple it is to add this new income stream and calculate the total income without making any changes to the `calculateNetIncome` function. This becomes possible because of polymorphism.

Lets first define the `Advertisement` type and the `calculate()` and `source()` methods on the `Advertisement` type:-

```go
type Advertisement struct {
    adName     string
    CPC        int
    noOfClicks int
}

func (a Advertisement) calculate() int {
    return a.CPC * a.noOfClicks
}

func (a Advertisement) source() string {
    return a.adName
}
```

The `Advertisement` type has three fields `adName`, `CPC` (cost per click) and `noOfClicks` (number of clicks). The total income from ads is the product of `CPC` and `noOfClicks`.

Let's modify the `main` function a little to include this new income stream:-

```go
func main() {
    project1 := FixedBilling{projectName: "Project 1", biddedAmount: 5000}
    project2 := FixedBilling{projectName: "Project 2", biddedAmount: 10000}
    project3 := TimeAndMaterial{projectName: "Project 3", noOfHours: 160, hourlyRate: 25}
    bannerAd := Advertisement{adName: "Banner Ad", CPC: 2, noOfClicks: 500}
    popupAd := Advertisement{adName: "Popup Ad", CPC: 5, noOfClicks: 750}
    incomeStreams := []Income{project1, project2, project3, bannerAd, popupAd}
    calculateNetIncome(incomeStreams)
}
```

We have created two ads namely `bannerAd` and `popupAd`. The `incomeStreams` slice includes the two ads we just created.

Here is the full program after adding `Advertisement`:-

```go
package main

import (
    "fmt"
)

type Income interface {
    calculate() int
    source() string
}

type FixedBilling struct {
    projectName  string
    biddedAmount int
}

type TimeAndMaterial struct {
    projectName string
    noOfHours   int
    hourlyRate  int
}

type Advertisement struct {
    adName     string
    CPC        int
    noOfClicks int
}

func (fb FixedBilling) calculate() int {
    return fb.biddedAmount
}

func (fb FixedBilling) source() string {
    return fb.projectName
}

func (tm TimeAndMaterial) calculate() int {
    return tm.noOfHours * tm.hourlyRate
}

func (tm TimeAndMaterial) source() string {
    return tm.projectName
}

func (a Advertisement) calculate() int {
    return a.CPC * a.noOfClicks
}

func (a Advertisement) source() string {
    return a.adName
}
func calculateNetIncome(ic []Income) {
    var netincome int = 0
    for _, income := range ic {
        fmt.Printf("Income From %s = $%d\n", income.source(), income.calculate())
        netincome += income.calculate()
    }
    fmt.Printf("Net income of organization = $%d", netincome)
}

func main() {
    project1 := FixedBilling{projectName: "Project 1", biddedAmount: 5000}
    project2 := FixedBilling{projectName: "Project 2", biddedAmount: 10000}
    project3 := TimeAndMaterial{projectName: "Project 3", noOfHours: 160, hourlyRate: 25}
    bannerAd := Advertisement{adName: "Banner Ad", CPC: 2, noOfClicks: 500}
    popupAd := Advertisement{adName: "Popup Ad", CPC: 5, noOfClicks: 750}
    incomeStreams := []Income{project1, project2, project3, bannerAd, popupAd}
    calculateNetIncome(incomeStreams)
}
```

The above program will output,

```
Income From Project 1 = $5000
Income From Project 2 = $10000
Income From Project 3 = $4000
Income From Banner Ad = $1000
Income From Popup Ad = $3750
Net income of organization = $23750
```

You would have noticed that we did not make any changes to the `calculateNetIncome` function though we added a new income stream. It just worked because of polymorphism. Since the new `Advertisement` type also implemented the `Income` interface, we were able to add it to the `incomeStreams` slice. The `calculateNetIncome` function also worked without any changes as it was able to call the `calculate()` and `source()` methods of the `Advertisement` type.

## 🚨 Uses of polymorphism

Polymorphism is used to reduce code in general. There will be less coupling if polymorphism is used. A single function can be used to do the same thing on multiple different objects. This is where polymorphism is heavily used. It is one of the most important concepts in OO-Programming. Go not being a strict OO-language achieves polymorphism in an elegant way.

## Few more Examples of Polymorphism
### Example-1:

```go
/* Golang program to illustrate the
 concept of interfaces */
package main

import (
	"fmt"
)

// defining an interface
type Figure interface{

	Area() float64
}

// declaring a struct
type Rectangle struct{
	
	// declaring struct variables
	length float64
	width float64
}

// declaring a struct
type Square struct{
	
	// declaring struct variable
	side float64
}

/* function to calculate
 area of a rectangle */
func (rect Rectangle) Area() float64{

	// Area of rectangle = l * b
	area := rect.length * rect.width
	return area
}

/* function to calculate
area of a square */
func (sq Square) Area() float64{
	
	// Area of square = a * a
	area := sq.side * sq.side
	return area
}

// main function
func main() {
	
	// declaring a rectangle instance
	rectangle := Rectangle{
	
		length: 10.5,
		width: 12.25,
	}
	
	// declaring a square instance
	square := Square{
	
		side: 15.0,
	}
	
	// printing the calculated result
	fmt.Printf("Area of rectangle: %.3f unit sq.\n", rectangle.Area())
	fmt.Printf("Area of square: %.3f unit sq.\n", square.Area())
}
```
#### Output:-
```
Area of rectangle: 128.625 unit sq.
Area of square: 225.000 unit sq.
```

Objects of different types are treated in a consistent way, as long as they stick to a single interface, which is the essence of polymorphism. Variable declared in an interface are of interface type. They can take whichever value which implements the interface which helps interfaces to achieve polymorphism in the Golang. The following example explains the concept of polymorphism:

### Example-2:

```go
/* Golang program to illustrate the
 concept of polymorphism */
package main

import (
	"fmt"
)

// defining an interface
type Reading interface{

	// declaring interface method
	reading_time() int
}

// declaring a struct
type Book struct{
	
	// declaring struct variables
	name string
	page_count int
}

// declaring a struct
type Newspaper struct{

	// declaring struct variables
	name string
	page_count int
}

// declaring a struct
type Magazine struct{

	// declaring struct variables
	name string
	page_count int
}

/* function to calculate reading
 time for book */
func (book Book) reading_time() int {
	
	/* taking average speed
	 of 10 mins per page */
	read_time := 10 * book.page_count
	return read_time
}

/* function to calculate reading
time for newspaper */
func (newspaper Newspaper) reading_time() int {

	/* taking average speed
	 of 30 mins per page */
	read_time := 30 * newspaper.page_count
	return read_time
}

/* function to calculate reading
 time for magazine */
func (magazine Magazine) reading_time() int {
	
	/* taking average speed
	of 5 mins per page */
	read_time := 5 * magazine.page_count
	return read_time
}

// function to calculate reading time
func calcReadingTime(ReadingTime []Reading) int {

		totalTime := 0
	
	/* looping through elements
	of the Reading array */
		for _, t := range ReadingTime {
		
		/* run time polymorphism, call to
		 method depends on object being
		 referred at run time */
			totalTime += t.reading_time()
		}
	
		return totalTime
}

// main function
func main() {
	
	// declaring a book instance
	book1 := Book{
		name: "Goosebumps",
		page_count: 150,
	}
	
	// declaring a newspaper instance
	newspaper1 := Newspaper{
		name: "TOI",
		page_count: 12,
	}
	
	// declaring a magazine instance
	magazine1 := Magazine{
		name: "Forbes",
		page_count: 40,
	}
	
	// array of type Reading interface
	ReadingTime := []Reading{book1, newspaper1, magazine1}
	
	// total reading time calculated
		totalTime := calcReadingTime(ReadingTime)
	
	// Printing total time for reading
		fmt.Printf("Total Time is %d minutes.\n", totalTime)
}
```
#### Output:-

```
Total Time is 2060 minutes.
```

So that's all that you need to know about Polymorphism in Golang if you wish to know more you can definitely visit the official documentation of [Golang]("https://golang.org/doc/").

### 🛠 References:-

- The above documentation was prepared by referring to the [official documentation]("https://golang.org/doc/")</a> of Golang for authencity, [Geeks for geeks](https://www.geeksforgeeks.org/) and some [blogs]("https://golangbot.com/polymorphism/") for explainging the concepts in detail.
- The images that are used are also used from the following links:-
 <table align="center">
  <tr>
   <td>
    <a href="">Link1</a></td>
   <td>
    <a href="">Link2</a></td>
    </tr>
  </table>

## Thanks for Reading! ✨<br>
