![image](https://user-images.githubusercontent.com/64470404/134809190-c2451032-f316-4d2a-b101-4a5b29359b04.png)

# FLUTTER ANIMATION

- Animation is a technique or a process which manipulates figures object or anything like that, with the moving appearance.<br>
- It enhances the app, and makes it look more beautiful.<br>
- Animation have two distinct values, namely, start value and end value.<br>
- Duration of the animation affect the speed of animation.

 ### ___ANIMATION CLASSES IN FLUTTER:___
 ``Animation <double>``  : Alters value between decimal numebers. <br>
 ``Animation <Color>``   : alters colours <br>
 ``Animation <Size> ``   : alters size <br>
 ``Animation Controller``: Controls animation <br>
 
 Every Flutter animation needs atleast two elements,tween to get generate values and AnimationController as parent.<br>
 AnimationController gives progress of the animation but animation gives actual tween value.<br>
 AnimationController controls over behaviour of animation. <br>
For the AnimationController.  we need to add a mixin to our class for vsync <br>
 ### CREATING BASIC ANIMATION IN FLUTTER:
 
 >> Create new project in flutter and name it as of your wish, also check everything's working fine or not. After that, launch your project<br>
 <br>
 
 <br>
 
 ### BASIC ANIMATION CODE:
 
 
 
 
```

import 'package:flutter/material.dart';

void main() => runApp(MyApp());

class MyApp extends StatefulWidget {
  @override
  _MyAppState createState() => _MyAppState();
}

class _MyAppState extends State<MyApp> {
  double _width = 200;
  double _height = 200;

  double _updateState() {
    setState(() {
      _width = 400;
      _height = 400;
    });
  }

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Animation',
      home: Scaffold(
        body: Center(
          child: AnimatedContainer(
            duration: Duration(seconds: 10),
            curve: Curves.bounceOut,
            width: _width,
            height: _height,
            color: Colors.lightBlue[200],
            child: Text('Animation', style: Theme.of(context).textTheme.headline5),
          ),
        ),
      ),
    );
  }
}

```



<img src="https://user-images.githubusercontent.com/64470404/135409079-aa3d0b10-3c21-44ca-82b3-eab1cf8f9229.png" height=400, width=200>
<br>


### BASIC TWEEN ANIMATION

``` 
import 'package:flutter/material.dart';

void main() => runApp(MyApp());

class MyApp extends StatelessWidget {
  Tween<double> _scaleTween = Tween<double>(begin: 1, end: 5);
//ColorTween(begin: Colors.blue, end: Colors.purple)
//SizeTween(begin: Size(0,0), end: Size(10,10))
//AlignmentTween(begin: Alignment.center, end: Alignment.topRight)

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Animation',
      home: Scaffold(
        body: Center(
          child: TweenAnimationBuilder(
            tween: _scaleTween,
            duration: Duration(milliseconds: 600),
            builder: (context, scale, child) {
              return Transform.scale(scale: scale, child: child);
            },
            child: Container(
              width: 200,
              height: 200,
              color: Colors.green[200],
//child: Center(
//child: Text('Animation',
//style: Theme.of(context).textTheme.headline6,
//),
            ),
          ),
        ),
      ),
    );
  }
}


```

 <img align='left' src="https://user-images.githubusercontent.com/64470404/135418034-52f7782d-baf3-4f5a-bcbd-fe47b6688584.png" height=400, width=200>
<img align='center' src="https://user-images.githubusercontent.com/64470404/135418144-c1cc5217-9524-4e85-9f01-544e59911ea3.png" height=400, width=200>
 <img align='left' src="https://user-images.githubusercontent.com/64470404/135417961-4bcb3cb1-e803-44ce-ae62-6d4a4b207c98.png" height=400, width=200>



 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
