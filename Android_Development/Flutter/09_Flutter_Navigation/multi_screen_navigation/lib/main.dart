import 'package:flutter/material.dart';
import 'package:multi_screen_navigation/screen_0.dart';
import 'package:multi_screen_navigation/screen_1.dart';
import 'package:multi_screen_navigation/screen_2.dart';

void main() => runApp(const MyApp());

class MyApp extends StatelessWidget {
  const MyApp({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      debugShowCheckedModeBanner: false,
      initialRoute: '/',
      routes: {
        '/': (context) => const Screen0(),
        '/first': (context) => const Screen1(),
        '/second': (context) => const Screen2(),
      },
    );
  }
}
