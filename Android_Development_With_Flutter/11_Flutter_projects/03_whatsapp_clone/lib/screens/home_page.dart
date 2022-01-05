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
  @override
  Widget build(BuildContext context) {
    double width = MediaQuery.of(context).size.width;
    double tabWidth = width / 5;
    Widget customSearchBar = Text("WhatsApp"); //Text(widget.title);

    return Scaffold(
      body: DefaultTabController(
        length: 4,
        child: Scaffold(
            appBar: AppBar(
                title: customSearchBar,
                actions: [
                  IconButton(onPressed: () {}, icon: Icon(Icons.search)),
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
                        child: Text("CALLS"))
                  ],
                )),
            body: TabBarView(
              children: [
                Text(
                  "Camera Screen",
                  textAlign: TextAlign.center,
                ),
                ChatScreen(),
                StatusScreen(),
                CallScreen(),
              ],
            )),
      ),
    );
  }
}
