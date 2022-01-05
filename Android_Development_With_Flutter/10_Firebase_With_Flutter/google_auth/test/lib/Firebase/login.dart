import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:flutter_signin_button/flutter_signin_button.dart';
// import 'constant.dart';
import '../services/auth.dart';
import 'home.dart';
//import 'localdb.dart';

class Login extends StatefulWidget {
  @override
  _LoginState createState() => _LoginState();
}

class _LoginState extends State<Login> {
  Future<void> checkuserlog() async {
    final FirebaseAuth auth = FirebaseAuth.instance;
    final user = auth.currentUser;
    if (user != null) {
      name = user.displayName.toString();
      email = user.email.toString();
      imgurl = user.photoURL.toString();
      Navigator.pushReplacement(
        context,
        MaterialPageRoute(
          builder: (context) => HomeFire(),
        ),
      );
    }
  }

  void initState() {
    super.initState();
    checkuserlog();
  }

  signInMethod() async {
    await signin();
    Navigator.pushReplacement(
        context, MaterialPageRoute(builder: (context) => HomeFire()));
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: Colors.grey,
      body: Center(
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            SignInButton(
              Buttons.Google,
              onPressed: () {
                signInMethod();
              },
            )
          ],
        ),
      ),
    );
  }
}
