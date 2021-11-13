## Stateful Widgets
#### What is Stateful Widget ?
State is information that can be read synchronously when the widget is built and might change during the lifetime of the widget. 
 Stateful Widgets are dynamic widgets,i.e.mutable state,describes part of the user interface,can change dynamically.StatefulWidget instances 
 themselves are immutable and store their mutable state either in separate State objects that are created by the createState method to which references are stored in 
 final fields on the StatefulWidget itself.**If we create a button widget that updates itself each time a user clicks that button, that is a stateful widget.**
 #### Use of Stateful Widget :

1. UI can change dynamically. </li>
2. Change multiple times with different sets of variables, inputs, data.</li>
3. Checkboxes, radio buttons, and sliders</li>
#### Syntax :
 ```dart
  import 'package:flutter/material.dart';

void main() => runApp(MyApp());

class MyApp extends StatefulWidget {
@override
_MyAppState createState() => _MyAppState();
}

class _MyAppState extends State<MyApp> {
@override
Widget build(BuildContext context) {
	return Container();
}
}
```
#### Keyword Description :
1. import   - importing the package
2. runApp() - function takes the given Widget and makes it the root of the widget tree
3. MyApp    - Class name
4. extends  -  inherit from or extend a class using the extends keyword