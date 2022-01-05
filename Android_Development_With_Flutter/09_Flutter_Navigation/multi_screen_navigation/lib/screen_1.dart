import 'package:flutter/material.dart';
import 'package:multi_screen_navigation/screen_2.dart';

class Screen1 extends StatelessWidget {
  const Screen1({Key? key}) : super(key: key);
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: const Text("Screen 1"),
        backgroundColor: Colors.blue.shade900,
      ),
      body: Center(
        child: ElevatedButton(
          child: const Text("Go to Screen 2"),
          onPressed: () {
            Navigator.push(context,MaterialPageRoute(builder: (context) {
                  return const Screen2();
                },
              ),
            );
          },
          style: ButtonStyle(
            backgroundColor: MaterialStateProperty.all(Colors.green),
            textStyle: MaterialStateProperty.all(const TextStyle(color: Colors.white),
            ),
          ),
        ),
      ),
    );
  }
}
