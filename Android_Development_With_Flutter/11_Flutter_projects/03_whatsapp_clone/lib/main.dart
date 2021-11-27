import 'package:flutter/material.dart';
import 'package:whatsapp_clone/screens/home_page.dart';
import 'package:google_fonts/google_fonts.dart';

void main() {
  runApp(const MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      debugShowCheckedModeBanner: false,
      title: 'Flutter Demo',
      // whatsapp theme data
      theme: ThemeData(
        primarySwatch: Colors.teal,
        fontFamily: GoogleFonts.roboto().fontFamily,
      ),
      routes: {
        '/': (context) => const MyHomePage(
              title: "WhatsApp",
            ),
        // other routes here
      },
      initialRoute: '/',
    );
  }
}
