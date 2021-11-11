import 'package:flutter/material.dart';

class Screen0 extends StatelessWidget {
  const Screen0({Key? key}) : super(key: key);
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: const Text("Screen 0"),
        backgroundColor: Colors.red,
      ),
      body: Center(
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            ElevatedButton(
              child: const Text("Go to Screen 1"),
              onPressed: () {
                Navigator.pushNamed(context, "/first");
              },
              style: ButtonStyle(
                backgroundColor: MaterialStateProperty.all(Colors.blue.shade900),
                textStyle: MaterialStateProperty.all(const TextStyle(color: Colors.white),
                ),
              ),
            ),
            ElevatedButton(
              child: const Text("Go to Screen 2"),
              onPressed: () {
                Navigator.pushNamed(context, "/second");
              },
              style: ButtonStyle(
                backgroundColor: MaterialStateProperty.all(Colors.green),
                textStyle: MaterialStateProperty.all(const TextStyle(color: Colors.white),
                ),
              ),
            ),
          ],
        ),
      ),
    );
  }
}
