

# **Wildcard Routes**



A nice web-application should also knows how to handle when the user requests or wants to navigate on that part which doesn't exist or doesn't match the the router path. So, to handle it you must add wildcard route.



to setup wildcard route :

````tsx
{ path: '**', component:  }
````



****** represents that it is a **wildcard route** .

There are different components most commonly used are like :-

**PageNotFound** for this we can display **404 error**.

**redirecting to you main component**.



# **Display 404 error / page**



![](https://i.imgur.com/X0fgt6G.jpg)



For showing this page we have to develop a **wildcard route**. 



````tsx
const routes: Routes = [
  { path: 'first-component', component: GWOCComponent },
  { path: 'second-component', component: GirlScriptComponent },
  { path: '**', component: PageNotFoundComponent },  // Wildcard route for a 404 page
];
````



In this there are two components and after that if the requested url dosen't match with the paths the **PageNotFoundComponent is called and 404 error is displayed** .



# Reference 

[Angular Documentation](https://angular.io/guide/router#setting-up-wildcard-routes) , [c-sharpcorner documentation](https://www.c-sharpcorner.com/article/overview-of-wildcard-routing-and-path-matching-in-angular/) .