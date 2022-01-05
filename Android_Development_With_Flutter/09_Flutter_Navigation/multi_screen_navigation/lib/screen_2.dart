import 'package:flutter/material.dart';
import 'package:multi_screen_navigation/screen_1.dart';

class Screen2 extends StatelessWidget {
  const Screen2({Key? key}) : super(key: key);
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: const Text("Screen 2"),
        backgroundColor: Colors.green,
      ),
      body: Center(
        child: ElevatedButton(
          child: const Text("Go to Screen 1"),
          onPressed: () {
            Navigator.push(context,MaterialPageRoute(builder: (context) {
                  return const Screen1();
                },
              ),
            );
          },
          style: ButtonStyle(
            backgroundColor: MaterialStateProperty.all(Colors.blue.shade900),
            textStyle: MaterialStateProperty.all(const TextStyle(color: Colors.white),
            ),
          ),
        ),
      ),
    );
  }
}
