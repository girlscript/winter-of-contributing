## Appbar widget
#### What is Appbar Widget ?
Appbar is the most important component of any application. We can build our application's topbar beautiful with the help of appbar. Appbar consist of another widgets like TabBar, FlexibleSpaceBar etc. We use appbar in sacffold.appbar property because
appbar need some padding if we wrap with mediaquery so it is better to use inside scaffold
<br>
<br>
## This is how a simple appbar look like:-

<div align="center">
    <img width="35%" alt="Ukkonen" src="https://media.geeksforgeeks.org/wp-content/uploads/20210124210755/AppBar-300x185.png">
     <p> image credit geeksforgeeks  <p>
</div>

## AppBar constructor
```
AppBar(
{Key? key,
Widget? leading,
bool automaticallyImplyLeading,
Widget? title,
List<Widget>? actions,
Widget? flexibleSpace,
PreferredSizeWidget? bottom,
double? elevation,
Color? shadowColor,
ShapeBorder? shape,
Color? backgroundColor,
Color? foregroundColor,
IconThemeData? iconTheme,
IconThemeData? actionsIconTheme,
bool primary,
bool? centerTitle,
bool excludeHeaderSemantics,
double? titleSpacing,
double toolbarOpacity,
double bottomOpacity,
double? toolbarHeight,
double? leadingWidth,
TextStyle? toolbarTextStyle,
TextStyle? titleTextStyle,
SystemUiOverlayStyle? systemOverlayStyle}
)
```
Appbar have some important properties:
  <ul>
  <li> leading - content inside leading will display before title of appbar</li>
  <li> title - It will display the title of appbar </li>
  <li> actions - It will display its content after title </li>
  </ul>

## Implementation of title property
```
import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  // This widget is the root of your application.
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: MyHomePage(),
    );
  }
}
class MyHomePage extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text("Learning"),
        
      ),
      );

  }
}

```
## Output
<img style = "display:block;margin-left:auto;margin-right:auto;"
 src="./Appbar/assets/First.png" width="300" height="600" />
 
 ## Explanation
 Here title prperty is used to display the given word on Appbar. title use text widget to display the text.



  
  
  ## Implementation of another properties
  ```
  import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  // This widget is the root of your application.
  @override
  Widget build(BuildContext context) {
    return MaterialApp(


      home: MyHomePage(),
    );
  }
}

class MyHomePage extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text("Learning"),
        actions: <Widget>[
          IconButton(
            icon: Icon(Icons.account_circle),
            tooltip: 'Your account',
            onPressed: () {},
          ),
        ],
        backgroundColor: Colors.blue,
        leading: IconButton(
          icon: Icon(Icons.menu),
          tooltip: 'Menu',
          onPressed: () {},
        ),
      ),
      );

  }
}
```
## Output
<img style = "display:block;margin-left:auto;margin-right:auto;"
 src="./Appbar/assets/Second.png" width="300" height="600" />
 
 ## Explanation
 Here first property we use is title which display the title of the appbar for example we have written 'Learning' inside text widget and then title take that text widget and display learning in appbar.
 second property used here is action widget. In action widget iconbutton is used to display account_circle icon after the title and tooltip is also provided which shows text when user hover over that icon.
 Third property used here is backgroundcolor which gives the colour to appbar. Fourth property used here is leading. In leading iconbutton is used to display menu icon befor the title of appbar. 
 
 ###### Reference taken from https://www.geeksforgeeks.org/flutter-appbar-widget/ and https://api.flutter.dev/flutter/material/AppBar-class.html





