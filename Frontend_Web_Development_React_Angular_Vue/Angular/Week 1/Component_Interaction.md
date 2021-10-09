<p align="center"><img src="https://calibraint-website.s3.us-east-2.amazonaws.com/s3fs-public/styles/large/s3/2020-04/blog.jpg?itok=j_LwfY4Q" width="600px"></p><br><br>

<h1 align="center"> Component Interaction in Angular </h1>

    Data sharing is an essential concept to understand before diving into your first Angular project. In this lesson, I provide four different methods for sharing data between Angular components.

## Angular Components Interaction Methods :-
<br>

Data sharing between the angular components is possible with the following ways,

* Sharing Data from Parent to Child:  @Input
* Sharing Data from Child to Parent:  @ViewChild
* Sharing Data from Child to Parent:  @Output & EventEmitter 
* Sharing Data Between Various Components:  Service
___
<br>

## 1) Parent to Child: Sharing Data via @Input :-

    Firstly, Angular provides a decorator called @Input decorator which can be used to pass data from Parent to Child. This is one of the most common methods of sharing data from Parent to Child in Angular application. Now, let's see the working of the @Input decorator in the following code.

### #parent.component.ts

```javascript

import { Component } from '@angular/core';

@Component({
  selector: 'app-parent',
  template: `
    <app-child [childMessage]="parentMessage"></app-child>
  `,
  styleUrls: ['./parent.component.css']
})
export class ParentComponent{
  parentMessage = "message from parent"
  constructor() { }
}

```

### #child.component.ts

```javascript

import { Component, Input } from '@angular/core';

@Component({
  selector: 'app-child',
  template: `
      Say {{ message }}
  `,
  styleUrls: ['./child.component.css']
})
export class ChildComponent {

  @Input() childMessage: string;

  constructor() { }

}

```
___
<br>

## 2) Child to Parent: Sharing Data via @ViewChild :-
<br>

    Angular provides this  @ViewChild() decorator which can be used to inject one component to another. Now, this is made possible by giving the parent access to its attributes and functions. Also, to be noted that the Child component gets available only after the view gets initialized. So, we need to implement the AfterViewInit lifecycle hook to get the data from the child.  Now, let's see the working of the @ViewChild decorator in the following snippets,

### #parent.component.ts

```javascript

import { Component, ViewChild, AfterViewInit } from '@angular/core';
import { ChildComponent } from "../child/child.component";

@Component({
  selector: 'app-parent',
  template: `
    Message: {{ message }}
    <app-child></app-child>
  `,
  styleUrls: ['./parent.component.css']
})
export class ParentComponent implements AfterViewInit {

  @ViewChild(ChildComponent) child;

  constructor() { }

  message:string;

  ngAfterViewInit() {
    this.message = this.child.message
  }
}


```

### #child.component.ts

```javascript

import { Component, Input } from '@angular/core';

import { Component} from '@angular/core';

@Component({
  selector: 'app-child',
  template: `
  `,
  styleUrls: ['./child.component.css']
})
export class ChildComponent {

  message = 'Hola Mundo!';

  constructor() { }

}

```
___
<br>

## 3) Child to Parent: Sharing Data via Output() and EventEmitter :-

    Another way to share data is to emit data from the child, which can be listened to by the parent. This approach is ideal when you want to share data changes that occur on things like button clicks, form entires, and other user events.

    In the parent, we create a function to receive the message and set it equal to the message variable.

    In the child, we declare a messageEvent variable with the Output decorator and set it equal to a new event emitter. Then we create a function named sendMessage that calls emit on this event with the message we want to send. Lastly, we create a button to trigger this function.

    The parent can now subscribe to this messageEvent that’s outputted by the child component, then run the receive message function whenever this event occurs.

### #parent.component.ts

```javascript

import { Component } from '@angular/core';

@Component({
  selector: 'app-parent',
  template: `
    Message: {{message}}
    <app-child (messageEvent)="receiveMessage($event)"></app-child>
  `,
  styleUrls: ['./parent.component.css']
})
export class ParentComponent {

  constructor() { }

  message:string;

  receiveMessage($event) {
    this.message = $event
  }
}

```

### #child.component.ts

```javascript

import { Component, Output, EventEmitter } from '@angular/core';

@Component({
  selector: 'app-child',
  template: `
      <button (click)="sendMessage()">Send Message</button>
  `,
  styleUrls: ['./child.component.css']
})
export class ChildComponent {

  message: string = "Hola Mundo!"

  @Output() messageEvent = new EventEmitter<string>();

  constructor() { }

  sendMessage() {
    this.messageEvent.emit(this.message)
  }
}

```
___
<br>

## 4) Unrelated Components: Sharing Data with a Service :-

    Service is a class that holds the data or functions based on the application's need and also stores the logic in the file, this allows us to reuse the code with the different components when it requires. In the service, we create a private BehaviorSubject that holds the current value of the message. Then, we have to define a current message variable to handle this data stream as an observable that will be used by the components. Lastly, we have to create a function that calls next on the BehaviorSubject to change its value.

### #data.service.ts

```javascript

import { Injectable } from '@angular/core';
import { BehaviorSubject } from 'rxjs';

@Injectable()
export class DataService {

  private messageSource = new BehaviorSubject('default message');
  currentMessage = this.messageSource.asObservable();

  constructor() { }

  changeMessage(message: string) {
    this.messageSource.next(message)
  }

}

```

    Components of the parent, child, and sibling will receive the same values. We inject the CalibraintDataService into the constructor, then subscribe to the observable current message and set its value equal to the variable message.

    Now if we create a function in any of these components which changes the message value. When the new data is executed this function will automatically transmit it to all other components.

### #parent.component.ts

```javascript

import { Component, OnInit } from '@angular/core';
import { DataService } from "../data.service";
import { Subscription } from 'rxjs';

@Component({
  selector: 'app-parent',
  template: `
    {{message}}
  `,
  styleUrls: ['./sibling.component.css']
})
export class ParentComponent implements OnInit, OnDestroy {

  message:string;
  subscription: Subscription;

  constructor(private data: DataService) { }

  ngOnInit() {
    this.subscription = this.data.currentMessage.subscribe(message => this.message = message)
  }
  
  ngOnDestroy() {
    this.subscription.unsubscribe();
  }

}

```

### #sibling.component.ts

```javascript

import { Component, OnInit } from '@angular/core';
import { DataService } from "../data.service";
import { Subscription } from 'rxjs';

@Component({
  selector: 'app-sibling',
  template: `
    {{message}}
    <button (click)="newMessage()">New Message</button>
  `,
  styleUrls: ['./sibling.component.css']
})
export class SiblingComponent implements OnInit, OnDestroy {

  message:string;
  subscription: Subscription;

  constructor(private data: DataService) { }

  ngOnInit() {
    this.subscription = this.data.currentMessage.subscribe(message => this.message = message)
  }

  ngOnDestroy() {
    this.subscription.unsubscribe();
  }

  newMessage() {
    this.data.changeMessage("Hello from Sibling")
  }

}

```
___
<br>