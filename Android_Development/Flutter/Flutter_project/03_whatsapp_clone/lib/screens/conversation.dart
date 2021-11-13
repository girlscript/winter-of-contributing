import 'package:flutter/material.dart';
import '../components/own_message.dart';
import '../components/reply_message.dart';

class ConverstationPage extends StatefulWidget {
  final name;
  final profile;
  final message;
  final time;
  ConverstationPage(
      {Key? key, this.name, this.profile, this.message, this.time})
      : super(key: key);

  @override
  State<ConverstationPage> createState() => _ConverstationPageState();
}

class _ConverstationPageState extends State<ConverstationPage> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        titleSpacing: 0,
        leadingWidth: 70,
        leading: InkWell(
          onTap: () {
            Navigator.pop(context);
          },
          child: Row(
            mainAxisAlignment: MainAxisAlignment.center,
            children: [
              Icon(
                Icons.arrow_back,
                size: 24,
              ),
              CircleAvatar(
                backgroundImage: AssetImage(widget.profile),
                radius: 20,
              )
            ],
          ),
        ),
        title: InkWell(
          onTap: () {},
          child: Container(
            margin: EdgeInsets.all(6),
            child: Column(
              children: [
                Text(
                  widget.name,
                  style: TextStyle(
                    fontSize: 18.5,
                    fontWeight: FontWeight.bold,
                  ),
                )
              ],
            ),
          ),
        ),
        actions: [
          IconButton(onPressed: () {}, icon: Icon(Icons.videocam)),
          IconButton(onPressed: () {}, icon: Icon(Icons.call)),
          PopupMenuButton(
            itemBuilder: (BuildContext context) {
              return [
                PopupMenuItem(child: Text("View Contact")),
                PopupMenuItem(child: Text("Media,links and docs")),
                PopupMenuItem(child: Text("Search")),
                PopupMenuItem(child: Text("Mute Notifications")),
                PopupMenuItem(child: Text("Wallpaper")),
                PopupMenuItem(child: Text("More")),
              ];
            },
          )
        ],
      ),
      body: Stack(children: [
        Image.asset(
          "assets/whatsapp_Back.png",
          height: MediaQuery.of(context).size.height,
          width: MediaQuery.of(context).size.width,
          fit: BoxFit.cover,
        ),
        Container(
            height: MediaQuery.of(context).size.height,
            width: MediaQuery.of(context).size.width,
            child: Stack(
              children: [
                Padding(
                  padding: const EdgeInsets.only(bottom: 80.0),
                  child: Align(
                    alignment: Alignment.bottomRight,
                    child: Container(
                      height: MediaQuery.of(context).size.height - 140,
                      child: ListView(
                        shrinkWrap: true,
                        children: [
                          OwnMessage(
                            message: widget.message,
                            time: widget.time,
                          ),
                          ReplyMessage(),
                          OwnMessage(
                            message: widget.message,
                            time: widget.time,
                          ),
                          ReplyMessage(),
                          OwnMessage(
                            message: widget.message,
                            time: widget.time,
                          ),
                          ReplyMessage(),
                          OwnMessage(
                            message: widget.message,
                            time: widget.time,
                          ),
                          ReplyMessage(),
                          OwnMessage(
                            message: widget.message,
                            time: widget.time,
                          ),
                          ReplyMessage(),
                          OwnMessage(
                            message: widget.message,
                            time: widget.time,
                          ),
                        ],
                      ),
                    ),
                  ),
                ),
                Align(
                  alignment: Alignment.bottomCenter,
                  child: Row(
                    children: [
                      Container(
                          width: MediaQuery.of(context).size.width - 60,
                          child: Card(
                            child: TextFormField(
                              keyboardType: TextInputType.multiline,
                              maxLines: 5,
                              minLines: 1,
                              textAlignVertical: TextAlignVertical.center,
                              decoration: InputDecoration(
                                  border: InputBorder.none,
                                  suffixIcon: Row(
                                    mainAxisSize: MainAxisSize.min,
                                    children: [
                                      IconButton(
                                        icon: Icon(Icons.attach_file),
                                        onPressed: () {},
                                      ),
                                      IconButton(
                                        icon: Icon(Icons.camera_alt),
                                        onPressed: () {},
                                      ),
                                    ],
                                  ),
                                  hintText: "Type a message",
                                  prefixIcon: IconButton(
                                    onPressed: () {},
                                    icon: Icon(Icons.emoji_emotions_outlined),
                                  ),
                                  contentPadding: EdgeInsets.all(5)),
                            ),
                            margin:
                                EdgeInsets.only(left: 2, right: 2, bottom: 8),
                            shape: RoundedRectangleBorder(
                              borderRadius: BorderRadius.circular(25),
                            ),
                          )),
                      Padding(
                        padding: EdgeInsets.only(
                          bottom: 8,
                          right: 4,
                          left: 2,
                        ),
                        child: CircleAvatar(
                          radius: 22,
                          child: IconButton(
                            onPressed: () {},
                            icon: Icon(Icons.mic),
                          ),
                        ),
                      ),
                    ],
                  ),
                ),
              ],
            )),
      ]),
    );
  }
}
