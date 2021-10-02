# Angular Component lifecycle

Hello all 👋,
In this topic I have tried to cover everything related to Angular component lifecycle hook along with the Code Sample, but before starting this make sure you are familiar with AngularJS.

So let's start the learning and below is the Index for Topic Contents we are going to cover also you can directly navigate to the specific topic by clicking on the URL.

| Index                                                                              |
| ---------------------------------------------------------------------------------- |
| [Angular component lifecycle hooks](#angular-component-lifecycle-hooks)            |
| [Functions in lifecycle hooks](#functions-in-lifecycle-hooks)                      |
| [● ngOnChnages](#ngonchnages)                                                      |
| [● ngOnInit](#ngoninit)                                                            |
| [● ngDoCheck](#ngdocheck)                                                          |
| [● ngAfterContentInit](#ngaftercontentinit)                                        |
| [● ngAfterContentChecked](#ngaftercontentchecked)                                  |
| [● ngAfterViewInit](#ngafterviewinit)                                              |
| [● ngAfterViewChecked](#ngafterviewchecked)                                        |
| [● ngOnDestroy](#ngondestroy)                                                      |
| [Conclusion](#conclusion)                                                          |

## Angular component lifecycle hooks

Angular is a frontend evelopment framework that is used for building single page applications. It makes of use of individual resuable components for building scalable web applications. These components follows a series of different phases from being created to being destroyed. A component lifecycle goes typically through eight different stages. We can hook into these different lifecycle phases to get more control over our application.

In order to do this, we make use of certain functions/methods which gets invoked during these lifecycle phases. These methods/functions are called hooks.

These hooks are executed in this order.

![image](https://23o0161033pm1289qo1hzrwi-wpengine.netdna-ssl.com/wp-content/uploads/2021/06/Angular-Components.png)

## Functions in lifecycle hooks

The components in angular are typescript classes that is why every component must be considered as constructor method. The the lifecyce hook methods, constructor gets executed first and then only executiong of lifecycle methods takes place.

### ngOnChnages

#### Purpose

● It responds when angular sets or resets data bound input properties.<br />
● Tracks current and previous values.<br />
● Only tracks @Input property values.

#### Timing

● Called before ngOnInit() and whenever the input changes.

#### Limitations

● Fails to detect changes user object types.

#### Code Sample

``` javascript
@Component({selector: 'my-cmp', template: `...`})
class MyComponent implements OnChanges {
  @Input() prop: number = 0;

  ngOnChanges(changes: SimpleChanges) {
    // changes.prop contains the old and the new value...
  }
}
```

### ngOnInit

#### Purpose

● It responds when angular first displays the data bound properties.<br />
● To Perform initialization shortly after constructor.<br />
● To setup the component after angular sets the input properties.<br />
● One-and-Done Hook!

#### Timing

● Called only once after the first ngOnChanges()

#### Limitations

● A directive's input properties are not set until constructor()

#### Code Sample

``` javascript
@Component({selector: 'my-cmp', template: `...`})
class MyComponent implements OnInit {
  ngOnInit() {
    // ...
  }
}
```

### ngDoCheck

#### Purpose

● Detect when angular doesn't detects on its own.<br />
● Compares currents state against previous values

#### Timing

● Called during every change detection run.<br />
● Called immediately after ngOnChanges() and ngOnInit()

#### Limitations

● Called with an enormous frequency.<br />
● Dependency must be very less or the user experience suffers.

#### Code Sample

``` javascript
@Component({selector: 'my-cmp', template: `...`})
class MyComponent implements DoCheck {
  ngDoCheck() {
    // ...
  }
}
```

### ngAfterContentInit

#### Purpose

● Respond when angular projects external content into the component's view.<br />
● To perform additional initialization tasks shortly after content projection.

#### Timing

● Called only once after angular fully initialized all the contents.

#### Code Sample

``` javascript
@Component({selector: 'my-cmp', template: `...`})
class MyComponent implements AfterContentInit {
  ngAfterContentInit() {
    // ...
  }
}
```

### ngAfterContentChecked

#### Purpose

● It responds when change detector completes the content checking.<br />
● To perform tasks after every content checking.

#### Timing

● Called after ngAfterContentInit() and every subsequent ngDoCheck().

#### Limitations

● Instantiated before the changes in child component.

#### Code Sample

``` javascript
@Component({selector: 'my-cmp', template: `...`})
class MyComponent implements AfterContentChecked {
  ngAfterContentChecked() {
    // ...
  }
}
```

### ngAfterViewInit

#### Purpose

● It responds when angular fully initialized a component's view.<br />
● To perform tasks after all set in the view.

#### Timing

● Called once after the first ngAfterContentChecked().

#### Limitations

● Invoked only once after the view is initialized.

#### Code Sample

``` javascript
@Component({selector: 'my-cmp', template: `...`})
class MyComponent implements AfterViewInit {
  ngAfterViewInit() {
    // ...
  }
}
```

### ngAfterViewChecked

#### Purpose

● It responds after Angular checks the component's views and child views, or the view that contains the directive..<br />
● To perform tasks after every content checking.

#### Timing

● Called after the ngAfterViewInit() and every subsequent ngAfterContentChecked().

#### Limitations

● Called even when there is no changes so performance issues.

#### Code Sample

``` javascript
@Component({selector: 'my-cmp', template: `...`})
class MyComponent implements AfterViewChecked {
  ngAfterViewChecked() {
    // ...
  }
}
```

### ngOnDestroy

#### Purpose

● Clean just before angular destroys the component.<br />
● Time to notify the other components.<br />
● Unsubscribe observables, detach DOM events, stop interval timers, free up the memory leaks and resources.

#### Timing

● Called just before angular destroys the component.

#### Limitations

● Instantiated before the changes in child component.

#### Code Sample

``` javascript
@Component({selector: 'my-cmp', template: `...`})
class MyComponent implements OnDestroy {
  ngOnDestroy() {
    // ...
  }
}
```

## Conclusion

So from this tutorial we have understood different functions of angular components life cycle. I hope you enjoyed this tutorial and got your concepts clear.Thank you for reading 😊.
