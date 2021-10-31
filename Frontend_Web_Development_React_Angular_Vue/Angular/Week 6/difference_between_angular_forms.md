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

* Example mentioned below is the simple login details form.

```

import { Component } from '@angular/core';
@Component({
  selector: 'app-template-login-details',
  template: `
    Email: <input type="text" [(ngModel)]="loginDetails">
   
  `
})
export class LoginDetailsComponent {
  loginDetails = '';
}
```

## Reactive form
If forms are a key part of your application, or you’re already using reactive patterns for building your application, then the reactive form is a suitable match for the application. And also if you prefer direct access to modify data in your template as it is more explicit than the template-driven forms which are less explicit because they rely on directives embedded in the template, along with mutable data to track changes asynchronously.

* Below mentioned block is an example of reactive form for employee details. The sample attributes are employee name and department name. Since the department of an employee is not fixed in a company we prioritize Reactive form over template driven form.

```

import { Component } from '@angular/core';
import { FormControl } from '@angular/forms';
@Component({
  selector: 'app-reactive-employee-details',
  template: `
    Employee Name: <input type="text" [formControl]="employeeDetailsControl">
    Department Name: <input type="text" [formControl]="employeeDetailsControl">
  `
})
export class EmployeeDetailsComponent {
  employeeDetailsControl = new FormControl('');
}
```

## My point of view
* If you are a beginner and creating sample works then template driven forms are good at an initial step. 
* If you are assigned in a real time project and dealing with complex structures then choose reactive forms over template driven forms.

References:
https://www.calibraint.com/blog/angular-forms
