![](https://i.imgur.com/hcX3Fn0.png)

# What is Route ?



To Create a Route there are 3 basic steps .

Before that we have to import AppRoutingModule to AppModule.

And some of the things will be done by Angular CLI itself.



```` tsx
import { BrowserModule } from '@angular/platform-browser'; // Importing Browser module
import { NgModule } from '@angular/core';// Importing Ng module
import { AppRoutingModule } from './app-routing.module'; // CLI imports AppRoutingModule
import { AppComponent } from './app.component'; 

@NgModule({
  declarations: [
    AppComponent
  ],
  imports: [
    BrowserModule,
    AppRoutingModule // CLI adds AppRoutingModule to the AppModule's imports array
  ],
  providers: [],
  bootstrap: [AppComponent]
})
export class AppModule { }
````



Step 1. Importing RouterModule and Routes in routing module



```` tsx
import { NgModule } from '@angular/core';
import { Routes, RouterModule } from '@angular/router'; // CLI imports router

const GWOCroutes: Routes = []; // sets up GWOCroutes constant where you define your routes

// configures NgModule imports and exports
@NgModule({
  imports: [RouterModule.forRoot(routes)],
  exports: [RouterModule]
})
export class AppRoutingModule { }
````



Step 2.  Now we will define routes in array.

​				first component , path will define URL path

​				Second component is used for the coressponding path.

```` tsx
const GWOCroutes: Routes = [
  { path: 'first-GWOCcomponent', component: FirstComponent },
  { path: 'second-GWOCcomponent', component: SecondComponent },
];
````





Step 3.  Now we will add routes to our application.

​				We will also add <router-outlet> , It will update component for selected route .

````tsx
<h1>Angular Router App</h1>
<!-- This will tell your router that whc=ich route we have to use .-->
<nav>
  <ul>
    <li><a routerLink="/first-GWOCcomponent" routerLinkActive="active">GWOC's First Component</a></li>
    <li><a routerLink="/second-GWOCcomponent" routerLinkActive="active">GWOC's Second Component</a></li>
  </ul>
</nav>
<!-- The routed views will render in the <router-outlet>-->
<router-outlet></router-outlet>
````





# Route Order



There are particular routes 

Router uses first match wins strategy.

routes more specific should be placed above less specific route.

Priority order :

- Static path first
- empty path route
- Wildcard route



![](https://i.imgur.com/df5dE17.png)

# Reference



[Angular Documentation](https://angular.io/guide/router#route-order) , [Route Vedio Explaination](https://codecraft.tv/courses/angular/routing/route-configuration/) .