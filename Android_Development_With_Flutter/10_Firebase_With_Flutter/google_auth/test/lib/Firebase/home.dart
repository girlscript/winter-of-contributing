import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';

import '../services/auth.dart';
import 'login.dart';

class HomeFire extends StatefulWidget {
  @override
  State<HomeFire> createState() => _HomeFireState();
}

class _HomeFireState extends State<HomeFire> {
  signoutmethod(context) async {
    await signout();
    Navigator.pushReplacement(
      context,
      MaterialPageRoute(
        builder: (context) => Login(),
      ),
    );
  }

  @override
  void initState() {
    super.initState();
    final FirebaseAuth auth = FirebaseAuth.instance;
    final user = auth.currentUser;
    name = user!.displayName.toString();
    email = user.email.toString();
    imgurl = user.photoURL.toString();
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text("Firebase Authentication"),
      ),
      body: SafeArea(
        child: Center(
          child: Column(
            mainAxisAlignment: MainAxisAlignment.center,
            children: [
              CircleAvatar(
                radius: 50,
                backgroundImage: NetworkImage(imgurl),
              ),
              Text(
                name,
                style: TextStyle(fontSize: 20),
              ),
              Text(
                email,
                style: TextStyle(fontSize: 18),
              ),
              ElevatedButton(
                onPressed: () {
                  signoutmethod(context);
                },
                child: Text("Sign out"),
              )
            ],
          ),
        ),
      ),
    );
  }
}
