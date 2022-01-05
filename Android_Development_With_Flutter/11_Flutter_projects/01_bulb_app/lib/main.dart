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
