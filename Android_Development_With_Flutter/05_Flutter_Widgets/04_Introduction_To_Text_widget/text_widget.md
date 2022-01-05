# <div align="center">📱 Text Widget ✨</div>
<img style = "display:block;margin-left:auto;margin-right:auto;"
 src="https://miro.medium.com/max/828/1*UyChqe1Fs8-ewyudvjk63A.png" width="1200" height="400" />
 Image credit: [Flutter Docs](https://miro.medium.com/max/828/1*UyChqe1Fs8-ewyudvjk63A.png)
 
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
 src="./assets/first.png" width="300" height="700" />
 
 ## Text widget constructor
 ```dart
 const Text(
String data,
{Key? key,
TextStyle? style,
StrutStyle? strutStyle,
TextAlign? textAlign,
TextDirection? textDirection,
Locale? locale,
bool? softWrap,
TextOverflow? overflow,
double? textScaleFactor,
int? maxLines,
String? semanticsLabel,
TextWidthBasis? textWidthBasis,
TextHeightBehavior? textHeightBehavior}
)
 ```
 ## Important properties of text widget
 <ul>
  <li>style - It is the most common property as it is used for styling the text. This property is used for changing font color, font style, font weight, backgroundcolor, etc.
  <li>textAlign - It is used to align the text horizontally.
  <li>textDirection - It is used for changing the direction of text.
  <li>maxLines - It is used for display the maximum number of lines in text widget.
 </ul>
 
 ## Implementation of style property
 ```dart
 import 'package:flutter/material.dart';
void main() {
  runApp(MyApp());
}
class MyApp extends StatelessWidget {               // This widget is the root of your application.
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: MyHomePage(),                          //It is calling homescreen using MyHomePage class
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
      body:Center(                                  //center widget is used to diplay the text in center of app
        child: Text( "Hello",                        // String provided inside text widget                                                               
          style: TextStyle(                         //TextStyle class is used to give styling to the text
            fontSize: 50,                           // this attribute decides the fontsize of text
            fontWeight: FontWeight.bold,            //this attribute decides the fontWeight of text 
            color: Colors.red,                      //It gives color to the text
            backgroundColor: Colors.blue,           //It gives color to the background of specified text
            fontStyle: FontStyle.italic,            //It is used for changing fontstyle of text
            letterSpacing: 0.5                      //It gives spaces between letters of string
          ),
        ),
      ),
    );
  }
}
```
<img style = "display:block;margin-left:auto;margin-right:auto;"
 src="./assets/second.png" width="300" height="700" />
## RichText class
We use RichText class when we want to display a paragraph which contain texts with different styles. RichText class uses TextSpan class and we can individually style each span.
## RichText constructor
```dart
RichText(
{Key? key,
required InlineSpan text,
TextAlign textAlign,
TextDirection? textDirection,
bool softWrap,
TextOverflow overflow,
double textScaleFactor,
int? maxLines,
Locale? locale,
StrutStyle? strutStyle,
TextWidthBasis textWidthBasis,
TextHeightBehavior? textHeightBehavior}
)
```
## Implementation
```dart
import 'package:flutter/material.dart';
void main() {
  runApp(MyApp());
}
class MyApp extends StatelessWidget {                       // This widget is the root of your application.
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: MyHomePage(),                                   //It is calling homescreen using MyHomePage class                                 
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
      body:Container(
        child: Center(
          child: RichText(
            text: TextSpan(                                    
            text: "Hello ",                                //Here first string is provided
            style: TextStyle(
            color: Colors.black26,        //styling of first string
            fontSize: 30
        ),  
            children: const <TextSpan>[
            TextSpan(text: 'bold',                     // here second string is provided
            style: TextStyle(                      // styling of second string
            fontSize: 50,
            fontWeight: FontWeight.bold,
            color: Colors.blue
            ),
         ),
            TextSpan(text: ' world!',                  //third string is provided 
            style: TextStyle(                          //styling of third string
            fontSize: 30,
            color: Colors.black26
            ),
           ),
          ],
         ),
        ),
       ),
      ),
    );
   }
  }


```
<img style = "display:block;margin-left:auto;margin-right:auto;"
 src="./assets/last.png" width="300" height="600" />
 
 
 So that’s all you need to know to get started with Text widget in Flutter. Hope you found it helpful. If you have any doubts you can definitely visit the official documentation of [Flutter](https://flutter.dev/docs/development/ui/widgets/text).

## HAPPY LEARNING 🙌✨

### REFERENCES

- For preparing this document official documentation of [flutter](https://flutter.dev/docs/development/ui/widgets/text). was referred for maintaining the authenticity of the code and also for making the topics more informative one external source was referred.
- The link of blog that was reffered -:
<table align=center><tr><td><a href="https://www.javatpoint.com/flutter-text" target=_blank>Link</a></td></tr></table>

