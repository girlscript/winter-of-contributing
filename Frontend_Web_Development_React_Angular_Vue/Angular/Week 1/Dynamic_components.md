# What is Dynamic component ?



It is a library that makes developing large applications easier. Angular enables dynamic component loading.

Sometimes an application needs some *time to load* new components at runtime.

so dynamic components are used.

# When do we use dynamic component ?



When some of the new components are being added, it makes it impractical to use a template with a static component structure.

Rather than we got a new way to load new components without even fixing reference.

***Angular comes with its own API to load such components dynamically.***

# How to create a Dynamic component 



## The anchor directive



Before we start adding components we have to define an anchor point that points out where to insert all components.

For Example :- ad banner uses a helper directive called **AdDirective** to mark these points.

```` Code
import { Directive, ViewContainerRef } from '@angular/core';

@Directive({
  selector: '[adHost]',
})
export class AdDirective {
  constructor(public viewContainerRef: ViewContainerRef) { }
}
````



## loading Components



ad banner used to add in **as-banner.component.ts.** 

The ng-template element is where you can apply and to apply **AdDirective** recalls **as.directive.ts** and it get apply to <ng-template> and after this angular knows that where to dynamically load component.



```` code
template: `
  <div class="ad-banner-example">
    <h3>Advertisements</h3>
    <ng-template adHost></ng-template>
  </div>
`
````





##  Resolving Components



Actually **AdServices** loads an array of **AdItem**. Passing an array of component **AdBannerComponent** allows for a dynamic list of ads using its **getadd**() method.

**AdBannerComponent** runs through that array and loads all items of array in every 3 seconds using **loadComponent**() . 



## AdComponent Interface

Usually all components implement in a common interface so that it can standardize the API.



After it You finally got your ad banner interface.