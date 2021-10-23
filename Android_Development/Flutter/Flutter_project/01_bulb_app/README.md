
# BULB APP




<img src = "https://user-images.githubusercontent.com/64470404/138047807-7ffd10b1-082c-4ade-b1a8-d785f930df7e.png" height ="70%" width ="40%">
<br>
This project is an simple app, with the bulb image, which consist of switch in it, which is used to on and off the bulb as per our wish.<br>

Whenever we touch or tap on the screen, bulb starts glowing and when tapped again, the bulb stops glowing.<br>

And that's the basic working of this app.<br>


<br>
<br>


## File Structure

* ASSETS : <br>This folder contains the image of bulb, in the form of png, which will be used in the bulb app.<br>
           It basically contains two images of bulb, one is glowing image of bulb, i.e turned in state and other is dark state of bulb, i.e turned off state.<br>
           Both of this image will be used in two different form to exhibit the app.<br>
       
* LIB : <br> This folder mainly contains 2 dart files in it, one is the main.dart file and the other is bulb_on.dart file.<br>
         Both of the files contain the main code for turning the bulb on and off.<br>
           
* PUBSPEC.YAML : <br>Here, in this file, we added the dependencies in assets and google fonts because we've used certain images in our app and also different font, for the betterment of the UI.<br><br> And here are the dependencies for the same: <br>
 <br>

 
 ```
 dependencies:
  cupertino_icons: ^1.0.2
  flutter:
    sdk: flutter
  google_fonts: ^2.1.0

dev_dependencies:
  flutter_test:
    sdk: flutter

flutter:
uses-material-design: true
  assets:
    - assets/
 
 ```

     
     
 -------------------------
 
 

### BULB_ON.DART
 
 - Here, 'MyApp' detects the stateless widget and stateless widget detects theme.<br>
 - Stateless widget is the part of the user interface whose configuration information is in the object itself.<br>
 - Then comes 'MaterialApp', which is basically used for styling or for the theme of the app, its main use is to configure the top-level Navigator to search for routes.<br>
 - We gave the name of the app as, 'Build App' in the section of 'title'
 - Under the theme data, we used 'primaryswatch' which is a material color and is assigned with the color blue.<br>
 - Then, we made a class, named as, 'OnBulb()', which will be used to define the function inside it to make the bulb glow, or in simple words, it'll be used to pick up an image which consist the glowing bulb image.<br>
 - Now the OnBulb() class extends the stateful widgets, stateful widget is used when we need to change some part of the UI dynamically during runtime.<br>
 - Under that class, we created a 'scaffold', which is used to provide many widgets or we can say APIs like Drawer, SnackBar, BottomNavigationBar, FloatingActionButton, AppBar etc., and here we used or created an AppBar, in which we defined with the title text to turn on the bulb, we gave its color as grey and positioned it in center with the google font nunito in white color.<br>
 - Under the body, 'GestureDetector', we created container to add up the path of image of bulb, which will fetch up the path and show on the screen and it is positioned in the center with defined height and width.<br>
 - Inside the body, we've used the Navigator function which will change/replace the image on tapping screen, and it'll navigate to the other class, which is defined for off bulb.<br>
 
 ```
 import 'package:bulb_app/main.dart';
import 'package:flutter/material.dart';
import 'package:google_fonts/google_fonts.dart';

class OnBulb extends StatefulWidget {
  const OnBulb({Key? key}) : super(key: key);

  @override
  _MainPage2State createState() => _MainPage2State();
}

class _MainPage2State extends State<OnBulb> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: Colors.grey[800],
      appBar: AppBar(
        centerTitle: true,
        backgroundColor: Colors.grey[800],
        elevation: 0,
        title: Text(
          "Turn on bulb",
          style: GoogleFonts.nunito(
              color: Colors.white, fontWeight: FontWeight.normal, fontSize: 20),
        ),
      ),
      body: GestureDetector(
        onTap: () {
          Navigator.pushReplacement(
            context,
            PageRouteBuilder(
              pageBuilder: (_, __, ___) => OffBulb(),
            ),
          );
        },
        child: Center(
          child: Container(
            height: MediaQuery.of(context).size.height / 3,
            child: Image.asset("assets/bulb_off.png"),
          ),
        ),
      ),
    );
  }
}
 
 ```
 
 <br>
 <br>
 <br>
 
  ### MAIN.DART
 
 Here, everything is same as above for on_bulb.dart code, just with a little difference of class and the path of the other image, here another class is defined, which has been named as 'OffBulb()' which will, while tapping the screen, will navigate to the other screen .
 ```
import 'package:flutter/material.dart';
import 'package:google_fonts/google_fonts.dart';

import 'bulb_on.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      debugShowCheckedModeBanner: false,
      title: 'Build App',
      theme: ThemeData(
        primarySwatch: Colors.blue,
      ),
      home: OnBulb(),
    );
  }
}

class OffBulb extends StatefulWidget {
  const OffBulb({Key? key}) : super(key: key);

  @override
  _OffBulbState createState() => _OffBulbState();
}

class _OffBulbState extends State<OffBulb> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: Colors.yellow.shade700,
      appBar: AppBar(
        centerTitle: true,
        backgroundColor: Colors.yellow.shade700,
        elevation: 0,
        title: Text(
          "Turn off bulb",
          style: GoogleFonts.nunito(
              color: Colors.black, fontWeight: FontWeight.normal, fontSize: 20),
        ),
      ),
      body: GestureDetector(
        onTap: () {
          Navigator.pushReplacement(
              context,
              PageRouteBuilder(
                pageBuilder: (_, __, ___) => OnBulb(),
              ));
        },
        child: Center(
          child: Container(
            height: MediaQuery.of(context).size.height / 3,
            child: Image.asset("assets/bulb_on.png"),
          ),
        ),
      ),
    );
  }
}

 ```
<br>
<br>
<br>

### To know more about this app and live working of it, here the link for the Bulb app,

[Video Link](https://watch.screencastify.com/v/GQZrx4z0jw4EuBWN2iqV)
