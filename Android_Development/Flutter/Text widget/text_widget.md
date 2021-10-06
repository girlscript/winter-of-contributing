# <div align="center">📱 Text Widget ✨</div>
<img style = "display:block;margin-left:auto;margin-right:auto;"
 src="https://miro.medium.com/max/828/1*UyChqe1Fs8-ewyudvjk63A.png" width="1200" height="400" />
 Image credit to [this](https://miro.medium.com/max/828/1*UyChqe1Fs8-ewyudvjk63A.png)
 
 In Flutter, a Text is a widget that allows us to show a string of text on a single line in our app. 
 We may split the string across many lines or show it all on the single line, depending on the layout constraints. 
 If we don't provide the text widget any styling, it will choose DefaultTextStyle class style.

Let's see simple example of how to use text widget.
```dart
import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  // This widget is the root of your application.
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: MyHomePage(),             //It is calling MyHomePage class
    );
  }
}

class MyHomePage extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text("Learning"),            //We provide a string inside text widget which is displaying on topbar of app.
      ),
      body:Center(
        child: Text("Hello"),               //We provided a string inside text widget which is used in body. It will display on center of app.
      ),
    );
  }
}

```
<img style = "display:block;margin-left:auto;margin-right:auto;"
 src="./assets/first.png" width="300" height="500" />
