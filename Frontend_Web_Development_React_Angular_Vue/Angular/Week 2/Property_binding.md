

![](https://i.imgur.com/oXxWvy2.png)



# What is Property Binding ?



It helps us to set up values for properties of **HTML elements**. It is used to do things like **toggle button functionality, share values between components** and many more things.

To see the live example [Click Here](https://stackblitz.com/angular/xamvkonjydvn?file=src%2Fapp%2Fapp.component.ts) .

# How it Works ?



- First, We have to **disable** that button using a disable attribute.

```` css
/* Creating button */

<button class="btn btn-primary"  
        [disabled]="allowNewServer">Add Server</button>
````



- After this we have to add a new property in components.ts and it will handle that button by its own.

  ````tsx
  import { Component, OnInit } from '@angular/core';  
    
  /* Components */
  
  @Component({  
    selector: 'app-server2',  
    templateUrl: './server2.component.html',  
    styleUrls: ['./server2.component.css']  
  })  
  export class Server2Component implements OnInit {  
   GWOCServer = false;  
    
      /* Setting up timeout */
    constructor() {  
      setTimeout(() =>{  
        this.GWOCServer = true;  
      }, 10000);  
    }  
    ngOnInit() {  
    }  
    
  }
  ````

  

- Through This we have added a **10 second timer** and after this timer it will **automatically disabled**.



# Difference between property binding and interpolation 



We can use property binding and interpolation both for databinding cases.



### Example for Interpolation

````html
<p>  Server2 for Girlscript organization is working properly.  </p>  
<button class="btn btn-dark shadow" [disabled]="!GWOCServer"> Adding a GWOC server </button>  
<h4>{{GWOCServer}}</h4>  
````





### Example for property binding

```` html
<p>  
  Server2 of girlscript is also working properly.  
</p>  
<button class="btn btn-success"  
        [disabled]="!GWOCServer" >Adding a GWOC Server</button>  
<h3 [innerText]= "GWOCServer"></h3>
````





Here we have done the same thing one using interpolation and one with property binding .

But String Interpolation has some kind of syntax and which is converted to property binding by Angular.



**When We want to concatenate strings, we should use interpolation instead of property binding.**

**And property binding is used when we have to use some non-string data value.**

# How to bind directive property?



To setup a directive property we have to place it within **square brackets** followed by **equal sign** and the **property**.

````html
<p [ngClass]="classes">[ngClass] GirlScript Winter of contributing</p>
````



To use it we have to declare the value of **class** as **special** .

````tsx
classes = 'special';
````



In this Angular will apply special to <p> tag So that it can be applied to CSS styles.



# Bind values between components 



To setup the model property we have to place the target in square brackets as shown below -

````html
<app-item-detail [childItem]="parentItem"></app-item-detail>
````



**childItem** is the target here 

**parentItem** is the property here



To us the target and property , they must be declared in the component class.

In this case the component class for the **childItem** is **ItemDetailComponent** .

**@Input()** decorator with the **childItem** property.



````tsx
@Input() childItem = '';
````



Here **childItem** is a **string**, so **parentItem** also needs to be **string** .



````tsx
parentItem = 'lamp';
````



By doing this the view of app item detail uses the value of **lamp** for **childItem**.



# References

[Angular Documentation](https://angular.io/guide/property-binding) , [geeksforgeeks ](https://www.geeksforgeeks.org/property-binding-in-angular-8/), [Javapoint](https://www.javatpoint.com/angular-7-property-binding) ,[Stackblitz ](https://stackblitz.com/angular/xamvkonjydvn?file=src%2Fapp%2Fapp.component.ts).

