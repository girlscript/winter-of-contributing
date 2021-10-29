# Difference between angular forms

Angular provides two different approaches to handling user input through forms: reactive and template-driven. Both capture user input events from the view, validate the user input, create a form model and data model to update, and provide a way to track changes. 

## What is the difference between template and reactive forms?

Major differences between template driven and reactive forms are as follows:


| Sr No. | Template Driven Forms  | Reactive Forms  |
| :----: | :--------------------: | :-------------: |
| 1.     |  Make use of the "FormsModule" | Based on "ReactiveFormsModule" |
| 2.     | Asynchronous in nature |  Mostly synchronous|
| 3.     | Most of the logic is driven from the template | Logic resides mainly in the component or typescript code |
| 4.     | Provides the easiest way to add a form to your application | More robust,scalable, reusable, and testable form |
|5.      | Suitable for simple scenarios | Handles any complex scenarios |
|6.      | Minimal component code| More component code and less HTML markup |
|7.      | Two way data binding(using [(NgModel)] syntax) | No data binding is done (immutable data model preferred by most developers) |
|8.      | Unit testing is another challenge | Easier unit testing |

## Template driven form 
These forms are basically useful when adding very basic forms to your apps like a simple email list signup form.
Simply forms which has basic requirements, with minimal logic needs and might need no scaling in the future.

```
javascript 
import { Component } from '@angular/core';
@Component({
  selector: 'app-template-login-details',
  template: `
    Email: <input type="text" [(ngModel)]="loginDetails">
    Password: <input type="password" [(ngModel)]="loginDetails">
  `
})
export class LoginDetailsComponent {
  loginDetails = '';
}
```
