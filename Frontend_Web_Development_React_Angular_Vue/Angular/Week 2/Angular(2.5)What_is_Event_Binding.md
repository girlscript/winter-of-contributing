![image](https://user-images.githubusercontent.com/85386116/135746650-49c1fc61-250f-4360-86e3-58ef862127a9.png)


# Angular - What is Event Binding?

The event binding allows you to add an event handler for a specified event so that your chosen JavaScript function will be invoked when that event is triggered for the associated DOM element. This can be used to bind to any event, such as keypress, mouseover or mouseout.

## Example

```
<div>
    <div data-bind="event: { mouseover: enableDetails, mouseout: disableDetails }">
        Mouse over me
    </div>
    <div data-bind="visible: detailsEnabled">
        Details
    </div>
</div>
 
<script type="text/javascript">
    var viewModel = {
        detailsEnabled: ko.observable(false),
        enableDetails: function() {
            this.detailsEnabled(true);
        },
        disableDetails: function() {
            this.detailsEnabled(false);
        }
    };
    ko.applyBindings(viewModel);
</script>
```

## How event binding works

In an event binding, Angular configures an event handler for the target event. You can use event binding with your own custom events.
When the component or directive raises the event, the handler executes the template statement. The template statement performs an action in response to the event.

![image](https://user-images.githubusercontent.com/85386116/135746772-95552901-b7f3-4df3-8459-512238823a15.png)

A common way to handle events is to pass the event object, $event, to the method handling the event. The $event object often contains information the method needs, such as a user's name or an image URL.

The target event determines the shape of the $event object. If the target event is a native DOM element event, then $event is a DOM event object, with properties such as target and target.value.

In the following example the code sets the <input> value property by binding to the name property.

```
<input [value]="currentItem.name"
       (input)="currentItem.name=getValue($event)">
       
```

The code binds to the input event of the <input> element, which allows the code to listen for changes.
When the user makes changes, the component raises the input event.
The binding executes the statement within a context that includes the DOM event object, $event.
Angular retrieves the changed text by calling getValue($event.target) and updates the name property.

# How it is different from Property Binding?

## Property binding -

In case you have to pass the value from parent component to child component (whether the value is static or dynamic) we have to use the property binding that mean by doing so we send the value using attribute on component and receive it in the child component by using @Input decorator for example of property binding see here -
```
<my-child [myProp]="myProp" />
```

## Event Binding -
Catching the Child's Event/method from the parent component

whenever we have to fire some event on click or something else from child component and pass to the parent component, we have to use Event Binding see here in the example below -
```
<my-child [myProp]="myProp" (onPropChange)="onPropChange($event)" />
```

here we have onPropChange as output event binding, we can fire that event using EventEmitter.

# How to customise event binding?
Suppose we want to create a custom event named as updateEmployee. So first of all we need to instantiate an instance of EventEmitter in the variable updateEmployee as below.
```
@Output() updateEmployee = new EventEmitter<Employee>();  
```

We need to annotate it with @Output that declares it as output variable. Custom event binding is used in parent child component communication. Here we will send data from child component to parent component. To send data we need to use emit() method as below.
```
this.updateEmployee.emit(this.employee);  
```
Now we are ready to use variable updateEmployee as custom event. Event binding can be done using parenthesis () or on- keyword. Find event binding using ().
```
<person-app (updateEmployee) ="saveData($event)"
	[student] ="studentObj"> </person-app>  
 ```
 Now we will use on- keyword for updateEmployee event binding.
```
<person-app on-updateEmployee ="saveData($event)"
	[student] ="studentObj"> </person-app>  
 ```
 In the above code snippet [student] ="studentObj" is working as a property binding to send data from parent component to child component.
