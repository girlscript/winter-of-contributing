import 'package:cloud_photos/Authentication/auth.dart';
import 'package:cloud_photos/Pages/login.dart';
import 'package:flutter/material.dart';

class HomePage extends StatefulWidget {
  const HomePage({Key? key}) : super(key: key);

  @override
  _HomePageState createState() => _HomePageState();
}

class _HomePageState extends State<HomePage> {
  signoutmethod(context) async {
    await signout();
    // Navigator.pushReplacement(
    //   context,
    //   MaterialPageRoute(
    //     builder: (context) => const LoginPage(),
    //   ),
    // );
    WidgetsBinding.instance!.addPostFrameCallback(
      (_) {
        Navigator.pushReplacement(
          context,
          MaterialPageRoute(
            builder: (context) => const LoginPage(),
          ),
        );
      },
    );
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: const Text("Cloud Photos"),
      ),
      drawer: const Drawer(),
      body: ElevatedButton(
        onPressed: () {
          signoutmethod(context);
        },
        child: const Text("sign Out"),
      ),
    );
  }
}
