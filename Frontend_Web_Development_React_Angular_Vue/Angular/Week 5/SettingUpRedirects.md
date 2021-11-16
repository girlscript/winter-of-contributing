# **Setting up redirects** 



To set up a redirect page we have to **configure a path** through which we can redirect 



````tsx
const routes: Routes = [
  { path: 'first-component', component: GWOCComponent },
  { path: 'second-component', component: GirlScriptComponent },
  { path: '',   redirectTo: '/first-component', pathMatch: 'full' }, // redirect to `first-component`
  { path: '**', component: PageNotFoundComponent },  // Wildcard route for a 404 page
];
````



In the example we have given two components and after that **third route is a redirect** . 
The redirect precedes the wildcard route .



**' ' represents that it is a initial relative URL** .



# References

[Angular Documentation](https://angular.io/guide/router#setting-up-redirects) , [MDN Docs](https://developer.mozilla.org/en-US/docs/Web/HTTP/Redirections) .

