![](https://i.imgur.com/XiCewMt.png)

# **<u>Built-in Directives</u>**



It adds an **additional behavior** to elements of **Angular applications**. It is used to manage forms, lists, styles.



There are **3 different types of Angular directive** :-



1. Attribute directive
2. Structural directive
3. components



For **live example** **[Click Here](https://stackblitz.com/angular/rxblxmklqvk?file=src%2Fapp%2Fapp.component.ts)** .



# **<u>Built - in attribute directives</u>**



It listens to and change the behavior of **HTML elements, attributes and components**.

There are **3 types of attributes** directive that are mostly used :-

1.  **NGclass**
2. **NgStyle**
3. **NGmodel**



### <u>Adding and removing classes using NgClass</u>

to add or remove CSS classes we can use NgClass .



#### Using NgClass with an expression

To apply it add ngclass and set it to true in the expression and setting it to true will apply the class of special .



```` html
<!-- toggle the "GWOC" class on/off with a property -->
<div [ngClass]="isGWOC ? 'GWOC' : ''">This div is special for GWOC</div>
````



### <u>Setting Inline styles with NgStyle</u>



To use NgStyles, We do setCurrentStyles()  to an object that defines three styles .

````tsx
currentStyles: Record<string, string> = {};
setCurrentStyles() {
    
    this.currentStyles = {
    'font-style':  this.canSave      ? 'italic' : 'normal',
    'font-weight': !this.isUnchanged ? 'bold'   : 'normal',
    'font-size':   this.isGWOC    ? '24px'   : '12px'
  };
}
````



To set it, add ngstyle property to Current styles .



````html
<div [ngStyle]="currentGWOCStyles">
  This div was having styles italic, normal weight, and extra large (24px) .
</div>
````



[For Example](https://stackblitz.com/angular/rxblxmklqvk?file=src%2Fapp%2Fapp.component.ts) .



###  <u>Displaying and updating with ngModel</u>



We will be using NgModel directive to display data and update when user make some changes.

1. We be uploading FormsModule and adding it

   

   ````tsx
   import { FormsModule } from '@angular/forms';
   @NgModule({
   
     imports: [
       BrowserModule,
       FormsModule 
     ],
   })
   export class AppModule { }
   ````

   

2. adding a ngModel in html file

   

   ````html
   <label for="GWOC-ngModel">[(ngModel)]:</label>
   <input [(ngModel)]="currentItem.name" id="GWOC-ngModel">
   ````

   

All variations includes Uppercase version



![](https://i.imgur.com/8Ln2IP3.gif)





# **<u>Built - in structural directives</u>**

 It is responsible for HTML layout and shape or reshape the DOM structure.

There are **3 types of structural directives** that are most commonly used :-



1. **NgIf**
2. **NgFor**
3. **NgSwitch**



### <u>Adding and removing Using NgIf</u>



When NgIf is true Angular adds those elements and when it is false it removes and frees up memory .



````html
<app-item-detail *ngIf="isActive" [item]="item"></app-item-detail>
````



isActive means true, and it will add the components to the DOM.



### <u>Listing Items with NgFor</u>



1. We have to declare ngFor in a div block of HTML .

2. We have to assign the short hand let item of items to ngFor.

   

   ````html
   <div *ngFor="let item of items">{{item.name}}</div>
   ````



let item of items is used to instruct the angular :-



- to store every element passed in the item array
- it make all the items available to html.
- it will convert let item of items to ng-template.



### Repeating a component view

 

In this example the Item is first interpolated and the binded the item - property to app - item - detail .


````html
<div *ngFor="let item of items">{{item.name}}</div>
<app-item-detail *ngFor="let item of items" [item]="item"></app-item-detail>
````



For Example 

![](https://i.imgur.com/vjfaVB3.gif)





###  <u>Switching  Cases with NgSwitch</u>



As we use switch in javascript similarly NgSwitch switch will show one element from the various elements.

It contains three different directives :-



1. **NgSwitch**
2. **NgSwitchCase**
3. **NgSwitchDefault**



![](https://i.imgur.com/PdZg4dZ.gif)

# **<u>Hosting a directive Without a DOM element</u>**



We use ng-container that doesn't interfere in styles or layout.

This is how we can use ng-container 



````html
<p>
  I am contributor at GWOC .
  <ng-container *ngIf="hero">
    and saw {{hero.name}}. I asked for help in contibution
  </ng-container>
  and I started contributing after that.
</p>
````



1. We will be importing **ngModel** directive.

   

2. Then add **FormsModule** to import some Angular module .

   

   ````html
   <div>
     Picking up top contributor .
     (<label><input type="checkbox" checked (change)="showSad = !showSad">show sad</label>)
   </div>
   <select [(ngModel)]="hero">
     <ng-container *ngFor="let h of heroes">
       <ng-container *ngIf="showSad || h.emotion !== 'sad'">
         <option [ngValue]="h">{{h.name}} ({{h.emotion}})</option>
       </ng-container>
     </ng-container>
   </select>
   ````



**OUTPUT** :-



![](https://i.imgur.com/65bPt9a.gif)





# <u>References</u>



[Angular Documentation](https://angular.io/guide/built-in-directives#adding-and-removing-classes-with-ngclass) , [stackblitz](https://stackblitz.com/angular/rxblxmklqvk?file=src%2Fapp%2Fapp.component.ts) . 