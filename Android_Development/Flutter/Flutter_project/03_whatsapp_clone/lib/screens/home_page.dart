import 'package:flutter/material.dart';
import 'package:flutter/rendering.dart';
import 'package:whatsapp_clone/screens/ChatScreen.dart';
import 'package:whatsapp_clone/screens/StatusScreen.dart';
import 'package:whatsapp_clone/screens/CallScreen.dart';

class MyHomePage extends StatefulWidget {
  const MyHomePage({Key? key, required this.title}) : super(key: key);

  final String title;

  @override
  State<MyHomePage> createState() => _MyHomePageState();
}

class _MyHomePageState extends State<MyHomePage> {
  int _counter = 0;
  void _incrementCounter() {
    setState(() {
      // This call to setState tells the Flutter framework that something has
      // changed in this State, which causes it to rerun the build method below
      // so that the display can reflect the updated values. If we changed
      // _counter without calling setState(), then the build method would not be
      // called again, and so nothing would appear to happen.
      _counter++;
    });
  }
  @override
  Widget build(BuildContext context) {
    double width = MediaQuery.of(context).size.width;
    double tabWidth = width  / 5;
    Widget customSearchBar = Text("WhatsApp");//Text(widget.title);
    // This method is rerun every time setState is called, for instance as done
    // by the _incrementCounter method above.
    //
    // The Flutter framework has been optimized to make rerunning build methods
    // fast, so that you can just rebuild anything that needs updating rather
    // than having to individually change instances of widgets.
    return Scaffold(
      body: DefaultTabController(
        length: 4,
        child: Scaffold(
          appBar: AppBar(
            // Here we take the value from the MyHomePage object that was created by
            // the App.build method, and use it to set our appbar title.
            title: customSearchBar,
            actions: [
              IconButton(
                  onPressed: (){},
                  icon: Icon(Icons.search)
              ),
              PopupMenuButton(
                itemBuilder: (BuildContext context) {
                  return [
                    PopupMenuItem(child: Text("New Group")),
                    PopupMenuItem(child: Text("New Broadcast")),
                    PopupMenuItem(child: Text("Linked Devices")),
                    PopupMenuItem(child: Text("Starred messages")),
                    PopupMenuItem(child: Text("Payments")),
                    PopupMenuItem(child: Text("Settings")),
                  ];
                },
              )
            ],
            bottom: TabBar(
              indicatorSize: TabBarIndicatorSize.label,
              isScrollable: true,
              tabs: [
                Container(
                  width: 30,
                  height: 50,
                  alignment: Alignment.center,
                  child: Icon(
                    Icons.camera_alt,
                  ),
                ),
                Container(
                    width: tabWidth,
                    height: 50,
                    alignment: Alignment.center,
                    child: Text("CHATS")),
                Container(
                    width: tabWidth,
                    height: 50,
                    alignment: Alignment.center,
                    child: Text("STATUS")),
                Container(
                    width: tabWidth,
                    height: 50,
                    alignment: Alignment.center,
                    child: Text("CALL"))
              ],
            )
          ),
          body: TabBarView(
            children: [
              Text("Camera Screen",textAlign: TextAlign.center,),
              ChatScreen(),
              StatusScreen(),
              CallScreen(),
            ],
          )
        ),
      ),
    );
  }
}
