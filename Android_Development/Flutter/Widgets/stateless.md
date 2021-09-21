#### State
The State is the information that can be read synchronously when the widget is built and might change during the lifetime of the widget.
#### What are stateless Widgets?
The widgets whose state can not be altered once they are built are called stateless widgets. These widgets are immutable once they are built i.e any amount of change in the variables, icons, buttons, or retrieving data can not change the state of the app. examples can be Text, RaisedButton, IconButtons.
import 'package:flutter/material.dart';
#### Use of Stateless Widgets.
  - The widgets remain the same. 
  - The build function is called only once which makes the UI of the screen.
#### Syntax of Stateless Widget.
<img width="371" alt="Screenshot 2021-09-21 101910" src="https://user-images.githubusercontent.com/71007973/134114175-ddf346b6-44c9-481f-980c-2fb02ab87c4b.png">

#### Description of Keywords in the syntax with example.
The name of the stateless widget is MyApp which is being called from the runApp() and extends a stateless widget. Inside this MyApp a build function is overridden and takes BuildContext as a parameter. This BuildContext is unique to each and every widget as it is used to locate the widget inside the widget tree
The build function contains a container which is again a widget of Flutter inside which we will design the UI of the app.