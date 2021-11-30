# Template Driven Forms 



This form model is implicit . NgModule creates and manages the whole form control .



```tsx
import { Component } from '@angular/core';

@Component({
  selector: 'app-template-favorite-color',
  template: `
    Favorite Color: <input type="text" [(ngModel)]="favoriteColor">
  `
})
export class FavoriteColorComponent {
  favoriteColor = '';
}
```



In template driven form we dont have direct access to Form Control .



![](https://i.imgur.com/G0idFPs.png)



# Data Flow in Template - Driven Forms



In this each element linked to directive.

The view - model diagram is used to represent how data flows .



1.  Firstly user selects blue.
2. Then the form control emits the input event
3. The control value that is attached with the input got triggered and called setvalue() method.
4. Then the new value emits through the **valueChange** 
5. any user having the valuechange recieves the new data .
6. The control value access calls **NgModule.viewToModelUpdate()** method.
7. Because the component template uses two way binding for the favouriteContributor property 



![](https://i.imgur.com/D1tefqC.png)



After these steps the color changes from blue to red and the value of favourite color got updated and the changes will be shown to user.



# Reference

[Angular documentation](https://angular.io/guide/forms-overview#data-flow-in-template-driven-forms) .