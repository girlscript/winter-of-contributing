# What is Routing in Angular

In Angular , For Nevigation from one page to another by interpreting the browser to come on the new page directly is called the routing. 
Now we see how to generate angular application with the help of routing.

# How to generate Routing Enabled Application in Angular

 For generating the basic angular routing enabled application we use Angular CLI command with application called AppRoutingModule which is called NgModule where can can cofigures with our router. We use routing-app our appication name in below example.
 
```css
ng new routing-app --routing --defaults
```

# Add components for routing

For making router based angular application , we need atleast of two components so that we can easily navigate from one page to another . Following command line is used to crate a component using the CLI where first is our component name :

```css
ng generate component first
```

For making the second component we repeat the same step but the change the name ,Here we use second as a new name.

```css
ng generate component second
```

The CLI adds the component automatically .if we have to write second-component ,our component will be SecondComponentComponent.

<base href>
This guide works with a CLI-generated Angular application. If you are working manually, make sure that you have <base href="/"> in the <head> of your index.html file. This assumes that the app folder is the application root, and uses "/".


# Importing our new components

For our new components , we import them at the top of the file of AppRoutingModule , shown below :
  
AppRoutingModule
  
```css
import { FirstComponent } from './first/first.component';
import { SecondComponent } from './second/second.component';
```
