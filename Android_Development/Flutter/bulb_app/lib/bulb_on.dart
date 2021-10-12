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
