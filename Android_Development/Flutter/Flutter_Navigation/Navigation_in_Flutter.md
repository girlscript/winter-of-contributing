<h1 align="center"> Flutter: Navigation </h1>
<p align="center">
  <img width="600" src="https://brainsandbeards.com/static/d189b48add3cbd63d126aafb3e81320d/d3ba7/bottom_nav.png" alt="Flutter logo">
</p>
<h2 align="center">What is navigation in flutter?
</h2>
<p>In any typical mobile app, you must have noticed that there are different screens for displaying different types of information.Navigation is a process which allows the user to move between the different pages/screens. Eg: An app may display different food items (as a menu) and clicking on any of the image will show more information about it, like ingredients etc. </p>
<h3 align="left">- Routing :</h3>
<p>The screens and pages, in flutter, are known as routes.These routes are just a widget. In Android, a route is similar to an Activity, whereas, in iOS, it is equivalent to a ViewController.
The workflow of any app is defined by its navigation and routing is the process to handle it.
</p>
<h2 align="center">Approach to use Navigation
</h2>
<p align="center">
  <img width="400" src="https://appdividend.com/wp-content/uploads/2019/01/Flutter-Navigation-Example-Navigate-To-A-New-Screen-And-Back-Tutorial.png" alt="Flutter logo">
</p>
<p>MaterialPageRoute and its two methods Navigator.push() and Navigator.pop() are useful to navigate between two routes.Follow these steps to introduce navigation in your application:</P>
<h3 align="left">Step -1 :Create a new flutter project</h3>
<p>create a folder inside the lib folder called pages and create two screens inside that folder.</P>
<p>HomeScreen.dart</P>
<p>SecondScreen.dart </P>
<h3 align="left">Step -2 :Code the SecondScreen.dart file </h3>

```dart
import 'package:flutter/material.dart';

class SecondScreen extends StatelessWidget {

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text('Second Screen'),
      ),
      body: Center(
        child: RaisedButton(
          child: Text('Back To HomeScreen'),
          color: Theme.of(context).primaryColor,
          textColor: Colors.white,
          onPressed: () => Navigator.pop(context)
        ),
      ),
    );
  }
}
```

This is the SecondScreen.On pressing the button here, the user will go one step back of the screen. Then, we pop the route from the stack and get back to the previous route.
In this case, it is a HomeScreen.dart page that we would want to reach to(navigate) after we click the back to HomeScreen button.


<h3 align="left">Step -3 :Create the HomeScreen.dart file </h3>

```dart
import 'package:flutter/material.dart';

import './SecondScreen.dart';

class HomeScreen extends StatelessWidget {

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text('Home Screen'),
      ),
      body: Center(
        child: RaisedButton(
          child: Text('Go to Second Screen'),
          color: Theme.of(context).primaryColor,
          textColor: Colors.white,
          onPressed: () => Navigator.push(
            context,
            MaterialPageRoute(
              builder: (BuildContext context) => SecondScreen(),
            ),
          ),
        ),
      ),
    );
  }
}
```

<p>When the user clicks the RaisedButton widget, we call the Navigator.push() method and pass the context and MaterialPageRoute parameters.

The MaterialPageRoute() widget also takes one function argument called the builder, and in that argument, we pass the destination page where we need to navigate to. In our case, it is a second screen, so we have created an instance of SecondScreen, and we have also imported that screen at the top of the file.

So, when the user clicks on the Go to second screen button, we navigate theren, and when the user clicks the SecondScreen’s button, we will navigate to this screen which is HomeScreen.

Finally we code the main.dart file.</P>

```dart
import 'package:flutter/material.dart';

import './pages/HomeScreen.dart';

void main() => runApp(MyApp());

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
        theme: ThemeData(primarySwatch: Colors.deepPurple), home: HomeScreen());
  }
}

```

<h3 align="center">Following this approach, you have successfully tried your hands on Navigation in Flutter!
</h3>

<h3 align="center"> Now create many pages in your app and give them a smooth navigation.
</h3>
           
<p align="center">
  <img width="250" src="https://freepngimg.com/thumb/emoji/47426-8-smiley-hd-free-transparent-image-hd-thumb.png" alt="Flutter logo">
</p>












