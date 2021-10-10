import 'package:flutter/material.dart';

void main() {
  runApp(const MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({Key? key}) : super(key: key);

  // This widget is the root of your application.
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Flutter Demo',
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
  int diceSum = 10;
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: Center(
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          crossAxisAlignment: CrossAxisAlignment.center,
          children: [
            Text("Total points = ${diceSum}",style: TextStyle(fontSize: 25.0),),
            SizedBox(height: 10,),
            Image(image: AssetImage('assets/diceFace-2.png')),
            SizedBox(height: 10,),
            Image(image: AssetImage('assets/diceFace-4.png')),
            SizedBox(height: 10,),
            Container(
              width: MediaQuery.of(context).size.width/2,
              child: ElevatedButton(
                  onPressed: (){},
                  child: Text("Roll Dice", style: TextStyle(fontSize: 20.0),),
              ),
            ),
          ],
        ),
      ),
    );
  }
}
