### Stateless Widgets
#### What is Stateless Widget ?
State is information that can be read synchronously when the widget is built and might change during the lifetime of the widget.The widgets whose state can not be changed or rendered when they are built are called stateless widgets.which is immutable **Eg: Icon Widget where icon won't changes its state**
#### Use of Stateless Widget :
  - The widgets remain the same while build. 
  - Stateless Widgets will be like immutable state which builds the UI State of the App.
#### Syntax :
```dart
import 'package:flutter/material.dart';

void main() => runApp(MyApp());

class MyApp extends StatelessWidget{
@override
Widget build(BuildContext context) {
	return Container();
}
}
```
#### Keyword Description :

1. MyApp - name of stateless Widget
2. build(BuildContext context) - It is overridden function , is used to locate the widget inside the widget tree
3. Container() - Widget

