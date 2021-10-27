# **State in React-Declarative and Imperative programing**

<img src="https://www.dottedsquirrel.com/content/images/2021/06/app.jpg">

## **What is Declarative Programming ?**

*   Declarative programming is a style of programming where applications are structured in a way that prioritizes describing what should happen over defining how it should happen.

*   Describes what a program should accomplish (or what the end result should be)
*   Leaves the determination of how to get to the end result up to the program

*   This approach involves providing a domain-specific language (DSL) for expressing what the user wants





## **Benefits of Declarative Programming**



*   Declarative approach makes React easy to use.
*   The resulting code is simple.
*    It has possibility of fewer bugs and more maintainability.
*   This Domain Specific Language shields users from messy low-level constructs while still achieving the desired end-state. 
*   Declarative programming generally allows for quicker and simpler problem resolution. 
*   Easy optimisation as implementation is controlled by an algorithm.




## **Where we use Declarative programing ?**

React is so powerful is because it enforces a declarative programming paradigm. Declarative programming is approach as a way of describing what you want to achieve.It expresses the logic of a computation without describing its control flow.Hence to achieve the optimal solution with easy code and efficient approach Declarative Programming is used.

### **CODE :**
class Button extends React.Component{
  this.state = { color: 'green' }
  handleChange = () => {
    const color = this.state.color === 'green' ? 'blue' : 'green';
    this.setState({ color });
  }
  render() {
    return (<div>
      <button 
         className=`btn ${this.state.color}`
         onClick={this.handleChange}>
      </button>
    </div>);
  }
}


## **Explanation**

* We have the logic that says if it is not green color then its blue !

* The React example never actually touches an element. it simply declares an element should be rendered given our current state as stated in the above code. It does not actually manipulate the DOM itself.

* This sets us up for a good control flow where state goes through a series of predictable and replicable mutations.

## **What is Imperative Programing in React ?**

* Imperative programming is when you tell your program every single step to achieve a specific outcome. 
* It is the step by step process of getting to the result (often disregarding the process to get there).
*  This means your program have to follow each procedure or else it will fail.

## **Benefits Of Imperative Programming**

* Imperative Program is relatively easy to learn, as the code can be read like a step-by-step instruction. 
* It is relatively easy to learn, as the code can be read like a step-by-step instruction. 
* Conceptual model (solution path) is very easy for beginners to understand.
* Characteristics of specific applications can be taken into account.
* Imperative programming is great for spaces where the sequence is required to achieve a particular result. That’s why it often sits at the hardware level of programming.

## **Where we use Imperative Programming ?**

Although, Imperative way of programming has been used a long time ago, and used in the implementation of low-level- machine language programming.it is still used in modern era as it includes machine architecture , sequential execution and mutable state.Procedural, Object-Oriented and Parallel Processing are also invloved in imperative programming.


### **CODE :**

const container = document.getElementById(‘container’);
const btn = document.createElement(‘button’);
btn.className = ‘btn green;
btn.onclick = function(event) {
 if (this.classList.contains(‘green’)) {
   this.classList.remove(‘green’);
   this.classList.add(‘blue’);
 } else {
   this.classList.remove(‘blue’);
   this.classList.add(‘green’);
 }
};
container.appendChild(btn);

### **Explanation**

* We still have logic that says if green then blue as in example of declarative programming .
* but there is difference the declarative approach simply describes the aim where here the program describe each step on how to perform the operation.
* Hence it has listed out the directions step by step, hence indicative of an imperative approach. 


## **Difference between Declarative and Imperative programing**

<br>


### **Declarative Programming**  
* In this, programs specify what is to be done.
* It simply expresses the logic of computation.  
* Its main goal is to describe the desired result without direct dictation on how to get it.  
* Its advantages include effective code, which can be applied by using ways, easy extension, high level of abstraction, etc.  
* It has no side effects and does not include any mutable variables as compared to imperative programming.  
* It may automate repetitive flow along with simplifying code structure. 

### **Imperative Programming**  

* In this, programs specify how it is to be done.  
* It simply describes the control flow of computation. 
* Its main goal is to describe how to get it or accomplish it.
* Its advantages include ease to learn and read, the notional model is simple to understand, etc.  
* It has many side effects and includes mutable variables as compared to declarative programming.  
* It gives full control to developers that are very important in low-level programming.  

#### **CONCLUSION**
I hope this short article on the brief introduction to Programming paradigms and differences between Imperative and Declarative programming helped you to get a better and a clear understanding of the discussed topics. 

#### **References**
https://learn.co/lessons/react-declarative-programming - LEARN.CO
https://dev.to/itsjzt/declarative-programming--react-3bh2 -DEV COMMUNITY
https://www.explainprogramming.com/theory/imperative-declarative-react/ - EXPLAIN PROGRAMMING








