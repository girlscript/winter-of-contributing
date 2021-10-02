![](https://i.imgur.com/QP8zdWu.png)

# What is Two way Data Binding ?



It provides **Components to Your application** and also gives a way to **share data.**

It is used to **listen for events and updates** the value of **parent** and **child** components.

If we *change data in one place* then it will automatically reflect on the other side.



For **Live example** [Click Here](https://stackblitz.com/angular/dnbdrnvnkexr?file=src%2Fapp%2Fapp.component.ts) .



# How it is different from one way data Binding ?



**One - way data binding** is that in which **data flows in a single direction** and we change the value in the component then it will also update on other end also.



![](https://i.imgur.com/EoEpH9m.png)



Data property is defined in **app.component.ts** and it is connected by html using **{{ }}** .



**Two - data binding**, In this the data flows in **two directions** , We can create two way data binding by using ***ngModel directive*** .



![](https://i.imgur.com/oefwBSx.png)

In this image data property title is connected input box using ***ngModel directive*** .



# How to add two - way data binding ?



To make it work if we use **@input() for size** then **@output must be sizeChange** .

**dec()** is used to **decrease** the font size.

**inc()** is used to **increase** the font size.



````tsx
export class SizerComponent {

  @Input()  size!: number | string;
  @Output() GWOCFontSize = new EventEmitter<number>();

  dec() { this.resize(-1); }
  inc() { this.resize(+1); }

  resize(delta: number) {
    this.size = Math.min(40, Math.max(8, +this.size + delta));
    this.GWOCFontSize.emit(this.size);
  }
}
````



**sizerComponent** has two button binded with click event and with **inc() adn dec()** methods.

on clicks **inc() and dec()** are called and they got resized with a **+1 or -1**.



````html
<div>
  <button (click)="dec()" title="smaller"> - </button>
  <button (click)="inc()" title="bigger"> + </button>
  <label [style.font-size.px]="size"> FontSize: {{size}}px</label>
</div>
<app-sizer [(size)]="fontSizePx"></app-sizer>
<div [style.font-size.px]="fontSizePx">Resizable Text for Contributing .</div>
````



**Two way binding is a combination of both property binding and event binding.**



# How it is implemented in forms ?



Two way binding with forms requires NgModel . To use it we need to import it.



1. **Importing forms module** and adding it

   

   ```` tsx
   import { FormsModule } from '@angular/forms';
   @NgModule({
     imports: [
       BrowserModule,
       FormsModule ],
   })
   export class AppModule { }
   ````

   

2. adding that **model to html form.**

   

   ```` html
   <label for="GWOC-ngModel"> [(ngModel)]: </label>
   <input [(ngModel)]="currentItem.name" id="GWOC-ngModel">
   ````

   

   *using property binding to set property and event binding to respond to the changes.*

   

   ```` html
   <input [ngModel]="currentItem.name" 
          (ngModelChange)="setUppercaseName($event)" id="GWOC-uppercase">
   ````

   

# Reference

[Angular Documentation](https://angular.io/guide/two-way-binding) , [Reactgo](https://reactgo.com/angular-oneway-vs-twoway-binding/) , [Stackblitz](https://stackblitz.com/angular/dnbdrnvnkexr?file=src%2Fapp%2Fapp.component.ts).