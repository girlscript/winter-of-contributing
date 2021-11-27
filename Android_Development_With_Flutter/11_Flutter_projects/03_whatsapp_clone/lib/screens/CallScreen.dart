import 'package:flutter/material.dart';
import 'package:whatsapp_clone/models/callmodel.dart';

class CallScreen extends StatefulWidget {
  const CallScreen({Key? key}) : super(key: key);

  @override
  _CallScreenState createState() => _CallScreenState();
}

class _CallScreenState extends State<CallScreen> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: ListView.builder(
        itemCount: calldata.length,
        itemBuilder: (context, i) => Column(
          children: <Widget>[
            ListTile(
              leading: CircleAvatar(
                foregroundColor: Theme.of(context).primaryColor,
                backgroundColor: Colors.grey,
                backgroundImage: AssetImage(calldata[i].profile),
              ),
              title: Text(
                calldata[i].name,
                style: const TextStyle(fontWeight: FontWeight.bold),
              ),
              subtitle: Container(
                  padding: const EdgeInsets.only(top: 5.0),
                  child: Row(
                    children: [
                      Icon(
                          calldata[i].direction == Direction.incoming
                              ? Icons.call_received
                              : Icons.call_made,
                          color:
                              calldata[i].callMissed ? Colors.red : Colors.green),
                      const SizedBox(
                        width: 10.0,
                      ),
                      Text(
                        calldata[i].day + ", " + calldata[i].time,
                        style:
                            const TextStyle(color: Colors.grey, fontSize: 15.0),
                      ),
                    ],
                  )),
              trailing: Icon(
                calldata[i].type == TypeOfCall.voice?Icons.call:Icons.videocam_rounded,
                color: Theme.of(context).primaryColor,
              ),
            ),
            const Divider(
              height: 10.0,
            ),
          ],
        ),
      ),
      floatingActionButton: FloatingActionButton(
        onPressed: () {},
        backgroundColor: Theme.of(context).colorScheme.secondary,
        child: const Icon(
          Icons.add_call,
          color: Colors.white,
        ),
      ),
    );
  }
}
