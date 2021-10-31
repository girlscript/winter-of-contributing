![Angular Forms](https://github.com/Mann-tech13/winter-of-contributing/blob/Frontend_Web_Development_React_Angular_Vue/Frontend_Web_Development_React_Angular_Vue/Angular/Week%206/assests/Angular-Forms.png)

# **Why Forms are required?**

Forms are used to handle user input data. We can use Angular form in our application to enable users to log in, to update profile, to enter 
information, and to perform many other data-entry tasks. Form validation is an important part of web application. It is used to validate whether 
the user input is in correct format or not.

# **Types of Forms**

Angular provides two different approaches to handling user input through forms: <u>**reactive**</u> and <u>**template-driven**.

![Form Types](https://github.com/Mann-tech13/winter-of-contributing/blob/Frontend_Web_Development_React_Angular_Vue/Frontend_Web_Development_React_Angular_Vue/Angular/Week%206/assests/TemplateVSReactive_Angular.jpg)
  
# **What are reactive forms and when to use them?**

Reactive forms are forms where we define the structure of the form in the component class. Reactive Forms is created inside component class 
so it is also referred as model driven forms. Every form control will have an object in the component and this provides greater control and 
flexibility in the form programming. Reactive Form is based on structured data model.Compared to template-driven forms, they are more robust: they're more 
scalable, reusable, and testable. 

To use reactive forms controls, import necessary modules from the @angular/.... packages.
```
import { ReactiveFormsModule } from '@angular/forms';
import { Component, OnInit } from '@angular/core';
import { FormBuilder, FormGroup, Validators } from '@angular/forms';

@NgModule({
  imports: [
    <!-- other imports -->
    ReactiveFormsModule
  ],
})

export class AppModule { }
```

At a certain point, reactive forms provide access to the state and meaning of form control.  The component class or the component prototype used to controls the current state and value.Basically, a reactive form is an HTML form filed with RxJS to manage the status as a real-time stream. This makes a point clear that one can receive changes to the values as visible and respond to the changes accordingly with validation errors, feedback, database operations, etc. So if this is not the issue in your project, you are advised to use **reactive forms**

# **What are template driven forms and when to use them?**

Template driven forms is created using directives in the template. It is mainly used for creating a simple form application. They are useful for 
adding an email list signup form and many more such details. They don't scale as well as reactive forms. If you have very basic form 
requirements and logic that can be managed solely in the template, template-driven forms could be a good fit.
  
To use reactive forms controls, import necessary modules from the @angular/.... packages.
```
import { BrowserModule } from '@angular/platform-browser';
import { NgModule } from '@angular/core';
import { FormsModule } from '@angular/forms';        //import FormsModule
 
import { AppRoutingModule } from './app-routing.module';
import { AppComponent } from './app.component';
 
@NgModule({
  declarations: [
    AppComponent
  ],
  imports: [
    BrowserModule,
    AppRoutingModule,
    FormsModule                    //Add in Imports Array
  ],
  providers: [],
  bootstrap: [AppComponent]
})
export class AppModule { }
```


Template-driven forms get it easy to create simple apps in an application like an email list signup form. Each and every field will have a separate 
individual binding in Template-driven forms. The upside of this way of handling forms is its initial simplicity, and it's probably enough to build 
small to medium-sized forms. So if your demand matches this simplicity, always prefer **Template driven form**

# **Conclusion**
  
Every Application needs adding, updating, data collection and many more features to make it user friendly. So, forms are useful components that makes this task easier. 
  
# **References**
  
[https://angular.io/guide/forms-overview](https://angular.io/guide/forms-overview)
  
[https://www.tutorialspoint.com/angular8/angular8_forms.htm](https://www.tutorialspoint.com/angular8/angular8_forms.htm)
