# Difference between angular forms

Angular provides two different approaches to handling user input through forms: reactive and template-driven. Both capture user input events from the view, validate the user input, create a form model and data model to update, and provide a way to track changes. 

## What is the difference between template and reactive forms?

Major differences between template driven and reactive forms are as follows:
| Serial No.| Template Driven Forms  | Reactive Forms |
| : ------: | :--------------------: | :------------: |
| 1. | make use of the "FormsModule"| based on "ReactiveFormsModule" |
| 2. | asynchronous in nature |  mostly synchronous|
| 3.| most of the logic is driven from the template|logic resides mainly in the component or typescript code|
| 4.|provides the easiest way to add a form to your application| more robust,scalable, reusable, and testable form|
|5.|Suitable for simple scenarios|Handles any complex scenarios|
|6.|Minimal component code|More component code and less HTML markup|
|7.|Two way data binding(using [(NgModel)] syntax)|No data binding is done (immutable data model preferred by most developers)|
|8.|Unit testing is another challenge|Easier unit testing|


