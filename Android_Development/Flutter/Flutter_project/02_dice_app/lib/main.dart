import 'package:flutter/material.dart';
import 'dart:math';

void main() {
  runApp(const MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({Key? key}) : super(key: key);

  // This widget is the root of your application.
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Dice App',
      theme: ThemeData(
        primarySwatch: Colors.blue,
      ),
      home: const MyHomePage(title: 'Dice App'),
    );
  }
}

class MyHomePage extends StatefulWidget {
  const MyHomePage({Key? key, required this.title}) : super(key: key);

  final String title;

  @override
  State<MyHomePage> createState() => _MyHomePageState();
}

class _MyHomePageState extends State<MyHomePage> {
  int up = 2;
  int down = 4;
  int diceSum = 6;

  rolldice() {
    setState(() {
      up = Random().nextInt(6) + 1;
      down = Random().nextInt(6) + 1;
      diceSum = up + down;
    });
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: Center(
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          crossAxisAlignment: CrossAxisAlignment.center,
          children: [
            Text(
              "Total points = $diceSum",
              style: TextStyle(fontSize: 25.0),
            ),
            SizedBox(
              height: 10,
            ),
            Image(image: AssetImage('assets/diceFace-$up.png')),
            SizedBox(
              height: 10,
            ),
            Image(image: AssetImage('assets/diceFace-$down.png')),
            SizedBox(
              height: 10,
            ),
            Container(
              width: MediaQuery.of(context).size.width / 2,
              child: ElevatedButton(
                onPressed: () {
                  rolldice();
                },
                child: Text(
                  "Roll Dice",
                  style: TextStyle(fontSize: 20.0),
                ),
              ),
            ),
          ],
        ),
      ),
    );
  }
}
