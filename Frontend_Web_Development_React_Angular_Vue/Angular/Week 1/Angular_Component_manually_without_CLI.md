<p align="center"><img src="https://ultimatecourses.com/assets/category/angular-2052c478f3fcf0adc1c1c5aad5a4d9fe46a896ccda52ee6b8383b687b0c61042.svg" width="400px"></p><br><br>

<h1 align="center"> Creating the Component without Angular CLI </h1>

    We have already shown how to create the Angular Application using Angular CLI. The Angular CLI has automatically created the root component app.component.ts.

    In this tutorial, we will not create the Angular Component, but let us see the Component creation process in detail.
___

## The creation of the Angular component requires you to follow these steps :-
<br>

* Create the Component file.
* Import the required external Classes/Functions.
* Create the Component class and export it.
* Add @Component decorator.
* Add metadata to @Component decorator.
* Create the Template.
* Create the CSS Styles.
* Register the Component in Angular Module.
___

## 1) Creating the Component File :-
<br>

    The Component app.component.ts. is already been created for us by Angular CLI under the folder src.

    By Convention, the file name starts with the feature name (app) and then followed by the type of class (component). These are separated by a dot. The extension used is ts indicating that this is a typescript module file.
___

## 2) Import the Angular Component Library :-
<br>

    Before we use any Angular (or external) functions or classes, we need to tell Angular how and where to find it. This is done using the Import statement. The Import statement is similar to the using statement in c#, which allows us to use the external modules in our class

    To define the Component class, we need to use the @Component decorator. This function is part of the Angular Core library. So we import it in our class as shown below

```javascript

import { Component } from '@angular/core';

```
___

## 3) Create the Component Class and export it :-

    The third step is to create the Component class using the export keyword. The Export keyword allows other components to use this component importing it. The AppComponent class is shown below

```javascript

export class AppComponent {
  title = 'app';
}

```
___

## 4) Add @Component decorator :-

    The next step is to inform the Angular that this is a Component class. We do that by adding the @Component decorator. We must add the decorator immediately above the class definition.

```javascript

@Component({
})
export class AppComponent {
  title = 'app';
}

```
___

## 5) Add meta data to @Component decorator :-

    The next step is to add the metadata to the component using the @component decorator. Add the following to the component metadata

```javascript

@Component({
  selector: 'app-root',
  templateUrl: './app.component.html',
  styleUrls: ['./app.component.css']
})

```
___

## 6) Create the Template (View) :-

    Template is nothing but an HTML file, which component must display it to the user

    The Angular knows which template display, using the templateUrl metadata, which points to app.component.html.

```javascript

<!--The content below is only a placeholder and can be replaced.-->
<div style="text-align:center">
  <h1>
    Welcome to {{title}}!
  </h1>
</div>
<h2>Here are some links to help you start: </h2>
<ul>
  <li>
    <h2><a target="_blank" href="https://angular.io/tutorial">Tour of Heroes</a></h2>
  </li>
  <li>
    <h2><a target="_blank" href="https://github.com/angular/angular-cli/wiki">CLI Documentation</a></h2>
  </li>
  <li>
    <h2><a target="_blank" href="https://blog.angular.io//">Angular blog</a></h2>
  </li>

```
___

## 7) Add the Styles :-

    The next step is to add the CSS Styles. The styleUrls metadata tells Angular, where to find the CSS File. This property points to external file app.component.css

    By convention, we name the file after the component file with .css extension
___

## 8) Register the Angular Component in Angular Module :-

    The next step is to register it with the Angular Module.

    The Angular Module organizes the components, directives, pipes, and services that are related and arrange them into cohesive blocks of functionality.

```javascript

import { BrowserModule } from '@angular/platform-browser';
import { NgModule } from '@angular/core';
 
import { AppComponent } from './app.component';
 
@NgModule({
  declarations: [
    AppComponent
  ],
  imports: [
    BrowserModule
  ],
  providers: [],
  bootstrap: [AppComponent]
})
export class AppModule { }

```