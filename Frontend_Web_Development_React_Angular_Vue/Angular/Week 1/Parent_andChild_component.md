# **<u>Sending data to child component</u>** 

The *@Input()* decorator represents that the property can received by the child component from the parent component.

To use @*Input*() we have to configure parent and child.

![](https://i.imgur.com/x5a7Sv7.png)



### <u>Configuring the Child component</u>

To use *@Input()* decorator we have to

- import Input
- decorate the property with *@Input()*

**Item's property can be of any type string, number, boolean or object to decorate**.



### <u>Configuring the Parent class</u>

Now, We have to *bind the property* in the parent component's template. 

- we have to use the **child selector** as a directive within **parent** **component**.
- Then use the **binding property** to bind the property in the child component.
- In the parent component class , there will be a designated value for currentItem.

With @input , Angular passes the value for currentItem to the child component.



# **<u>Sending Data to a parent component</u>**



The @*output*() decorator lets the data flow from child to parent. 

The child component uses @*Output*() property to raise an event and notify the parent of the change.

To create an event @*output*() must have **EventEmitter**

***EventEmitter*** is a class in *@*angular*/*core* which is used to emit events.

![](https://i.imgur.com/rgvju2T.png)



### <u>Configuring  the child component</u>

- We have to import output  and **EventEmitter** in the child component class.
- Then in the component class, decorate a property with @*Output*().
- *Create an addNewItem() method* in the same component class.



### <u>Configuring the parent component</u>

- AppComponent used to create the list of items in an array and also a method for adding more items to an array.
- addItem takes the argument in form of string and add it into items array.



# **<u>Using @Input() and @Output() together</u>**



![](https://atts.w3cschool.cn/attachments/image/20200630/1593499999174379.png)



Using  *@Input() and @Output()* on the **same child component**.

*@Input()* property receives its value from *Parent's property*.

When user clicks on delete the child component raises an event it raises the event ***deleteRequest*** that is argument for parent component.

<u>To combine property and event bindings using the banana-in-a-box syntax, [()], see Two-way Binding.</u>
