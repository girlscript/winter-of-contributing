import 'package:flutter/material.dart';
import 'package:google_fonts/google_fonts.dart';

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
      home: MainPage(),
    );
  }
}

class MainPage extends StatefulWidget {
  const MainPage({Key? key}) : super(key: key);

  @override
  _MainPageState createState() => _MainPageState();
}

class _MainPageState extends State<MainPage> {
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
          //logic
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

// class MainPage extends StatefulWidget {
//   const MainPage({Key? key}) : super(key: key);

//   @override
//   _MainPageState createState() => _MainPageState();
// }

// class _MainPageState extends State<MainPage> {
//   @override
//   Widget build(BuildContext context) {
//     return Scaffold(
//       backgroundColor: Colors.grey[800],
//       appBar: AppBar(
//         centerTitle: true,
//         backgroundColor: Colors.grey[800],
//         elevation: 0,
//         title: Text(
//           "Turn on bulb",
//           style: GoogleFonts.nunito(
//               color: Colors.white, fontWeight: FontWeight.normal, fontSize: 20),
//         ),
//       ),
//       body: GestureDetector(
//         onTap: () {
//           //logic
//         },
//         child: Center(
//           child: Container(
//             height: MediaQuery.of(context).size.height / 3,
//             child: Image.asset("assets/bulb_off.png"),
//           ),
//         ),
//       ),
//     );
//   }
// }
