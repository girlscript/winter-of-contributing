![](https://i.imgur.com/0mtNSW5.jpg)

# Structural Directive

Structual Directives are responsible for  **structure and layout** of **DOM elements**by adding or removing the elements
We can easily identify a structural element by * sign.



# Create Structural Directive?

There are three types of directives:
1. ***ngIf**
2. ***ngFor**
3. ***ngIf-else**
The Structural Directives are written in the html tag elements
1. **ngIf**
 It conditionally includes a template based on the value of an expression coerced to Boolean.
 ![](https://imgur.com/5vX0Hma)

2. ***ngFor**
 *ngFor is used to loop through the dynamic lists in the DOM. Simply, it is used to build data presentation lists and tables in HTML DOM.
 ![](https://imgur.com/m21wgre)

3. **ngIf-else**
   The ngIf directive removes or recreates a portion of the DOM tree based on an {expression}. If the expression assigned to ngIf evaluates to a false value then the element is removed from the DOM, otherwise a clone of the element is reinserted into the DOM.

   ![](https://imgur.com/IuU3PkJ)


# How to test Structural Directive?

Step 1. Configure **Test Bed**
        The first parameter for MockBuilder is the directive itself, and if it has dependencies we should pass its module as the second parameter
        ![](https://imgur.com/iKW2hrs)
Step-2.We need to render a custom template.
![](https://imgur.com/S6av5cP)
Step-3.With help of MockRender we can access the element of the directive via fixture.point to cause events on, and we can change the value via fixture.componentInstance.value. 
![](https://imgur.com/S6av5cP)      

# Shorthand for Structural Directive

The asterisk, *, syntax on a structural directive, such as *ngIf, is shorthand that Angular interprets into a longer form. Angular transforms the asterisk in front of a structural directive into an **<ng-template>** that surrounds the host element and its descendants.
   

# How to improve template type checking for custom directive?
For improving template type checking for custom directive , the following methods can be applied:
1.Adding template guard properties to your directive definition
 These properties help the Angular template type checker find mistakes in the template at compile time, which can avoid runtime errors. These properties are as follows: 

1. ngTemplateGuard_(someInputProperty)- lets us specify a more accurate type for an input expression within the template.
2. ngTemplateContextGuard static property declares the type of the template context.