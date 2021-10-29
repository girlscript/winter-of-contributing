# Difference between angular forms

Angular provides two different approaches to handling user input through forms: reactive and template-driven. Both capture user input events from the view, validate the user input, create a form model and data model to update, and provide a way to track changes. 

## What is the difference between template and reactive forms?

Major differences between template driven and reactive forms are :
* Template-driven forms make use of the "FormsModule", while reactive forms are based on "ReactiveFormsModule".
* Template-driven forms are asynchronous in nature, whereas Reactive forms are mostly synchronous.
* In a template-driven approach, most of the logic is driven from the template, whereas in reactive-driven approach, the logic resides mainly in the component or typescript code. Let us get started by generating a component and then we'll update our form code.

| Template Driven | Reactive  |
| :------------: | :---------------------------: |
| make use of the "FormsModule"| based on "ReactiveFormsModule" |
