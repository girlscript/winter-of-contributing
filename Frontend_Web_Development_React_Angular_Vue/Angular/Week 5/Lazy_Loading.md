![](https://i.imgur.com/IuCRNuE.jpg)

# Lazy Loading



We can add some of the lazy mode modules i.e. Angular used to load the modules that are needed rather then loading all the modules. Loading some other modules helps to enhance the user experience.

**We can add some of the routes to lazy loading so that angular will load those routes only when needed .**

# Lazy Loading featuers



For large applications there are mant routes to be loaded for lazy loading help to reduce bundle-size .



To Lazy load modules we use loadChildren .

````tsx
const routes: Routes = [
  {
    path: 'items',
    loadChildren: () => import('./items/items.module').then(m => m.ItemsModule)
  }
];
````



add the route of the component in the lazy loaded module's



```tsx
const routes: Routes = [
  {
    path: '',
    component: ItemsComponent
  }
];
```



And also we have to make sure that we remove the itemModule from the AppModule.



For live example [click here](https://angular.io/generated/live-examples/lazy-loading-ngmodules/stackblitz.html) .

# References

[Angular Documentation](https://angular.io/guide/lazy-loading-ngmodules) .