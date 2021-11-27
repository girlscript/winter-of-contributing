import 'package:flutter/material.dart';
import 'package:whatsapp_clone/models/chatmodel.dart';
import 'package:page_transition/page_transition.dart';

import 'conversation.dart';

class ChatScreen extends StatefulWidget {
  const ChatScreen({Key? key}) : super(key: key);

  @override
  _ChatScreenState createState() => _ChatScreenState();
}

class _ChatScreenState extends State<ChatScreen> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: ListView.builder(
        itemCount: chatdata.length,
        itemBuilder: (context, index) => Column(
          children: [
            Divider(
              height: 10.0,
            ),
            ListTile(
              leading: CircleAvatar(
                backgroundColor: Colors.blueGrey,
                backgroundImage: AssetImage(chatdata[index].profile),
              ),
              title: Text(
                chatdata[index].name,
                style: TextStyle(fontWeight: FontWeight.bold),
              ),
              subtitle: Row(
                children: [
                  Icon(
                    Icons.done_all_rounded,
                    color: Colors.blue,
                    size: 18,
                  ),
                  Text(
                    chatdata[index].message,
                    style: TextStyle(color: Colors.grey, fontSize: 14),
                  ),
                ],
              ),
              trailing: Text(
                chatdata[index].time,
                style: TextStyle(color: Colors.grey, fontSize: 14.0),
              ),
              onTap: () {
                Navigator.push(
                  context,
                  PageTransition(
                    type: PageTransitionType.rightToLeft,
                    child: ConverstationPage(
                      name: chatdata[index].name,
                      profile: chatdata[index].profile,
                      message: chatdata[index].message,
                      time: chatdata[index].time,
                    ),
                  ),
                );
              },
            ),
          ],
        ),
      ),
      floatingActionButton: FloatingActionButton(
        onPressed: () {},
        backgroundColor: Theme.of(context).accentColor,
        child: Icon(
          Icons.message,
          color: Colors.white,
        ),
      ),
    );
  }
}
