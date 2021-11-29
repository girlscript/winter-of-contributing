# Nesting Routes



As we are creating more and more complex sites, we need to add some more nested routes to the root component. And these types of routes is called child route.

**For - example** in the following example there are two child components frontend and frontend-with-framework.



````html
<h2>First Component</h2>

<nav>
  <ul>
    <li><a routerLink="frontend">Frontend</a></li>
    <li><a routerLink="frontend-with-framework">Frontend With Framework</a></li>
  </ul>
</nav>

<router-outlet></router-outlet>
````



child route is same as the other routes that it needs both path and component.

and child route is placed in the children array.



````tsx
const routes: Routes = [
  {
    path: 'GWOC-component',
    component: GWOCComponent, // this is the component with the <router-outlet> in the template
    children: [
      {
        path: 'frontend', // child route path
        component: FrontendComponent, // child route component that the router renders
      },
      {
        path: 'frontend-with-framework',
        component: FrontendframworkComponent, // another child route component that the router renders
      },
    ],
  },
];
````



# Using relative Path



We can add the relative path defined relative to the current URL.

In this the first component and the second component are on the same level of the tree but the second component is present within the first component. 



```html
<h2>First Component</h2>

<nav>
  <ul>
    <li><a routerLink="../second-component">Relative Route to second component</a></li>
  </ul>
</nav>
<router-outlet></router-outlet>
```





# Reference

[Angular documentation](https://angular.io/guide/router#nesting-routes) .