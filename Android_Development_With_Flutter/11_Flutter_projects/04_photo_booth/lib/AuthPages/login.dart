import 'package:cloud_photos/Screen/home_screen.dart';
import 'package:cloud_photos/widgets/colors.dart';
import 'package:cloud_photos/widgets/text.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:google_fonts/google_fonts.dart';
import '../Authentication/auth.dart';
import 'otp.dart';

class LoginPage extends StatefulWidget {
  const LoginPage({Key? key}) : super(key: key);

  @override
  _LoginPageState createState() => _LoginPageState();
}

class _LoginPageState extends State<LoginPage> {
  final _phonecontroller = TextEditingController();

  Future<void> checkuserlog() async {
    final FirebaseAuth auth = FirebaseAuth.instance;
    final user = auth.currentUser;
    if (user != null) {
      name = user.displayName.toString();
      email = user.email.toString();
      imgurl = user.photoURL.toString();
      WidgetsBinding.instance!.addPostFrameCallback((_) {
        Navigator.pushReplacement(
          context,
          MaterialPageRoute(
            builder: (context) => const HomeScreen(),
          ),
        );
      });
    }
  }

  signInMethod() async {
    await signin();
    Navigator.pushReplacement(
      context,
      MaterialPageRoute(
        builder: (context) => const HomeScreen(),
      ),
    );
  }

  @override
  void initState() {
    super.initState();
    checkuserlog();
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: SafeArea(
        child: Column(
          crossAxisAlignment: CrossAxisAlignment.center,
          children: [
            Padding(
              padding: const EdgeInsets.only(
                top: 20.0,
              ),
              child: Row(
                children: [
                  IconButton(
                    onPressed: () {},
                    icon: const Icon(
                      Icons.arrow_back_ios_new_outlined,
                      color: Colors.black,
                      size: 20,
                    ),
                  ),
                ],
              ),
            ),
            Padding(
              padding: const EdgeInsets.only(left: 20, top: 20.0),
              child: Row(
                children: [
                  Helper.text("Welcome to Photo Booth", 20, 0, primaryColor,
                      FontWeight.bold)
                ],
              ),
            ),
            Padding(
              padding: const EdgeInsets.only(top: 10.0, left: 20, bottom: 20),
              child: Row(
                children: [
                  Helper.text("Enjoy by saving your memories", 18, 0,
                      primaryColor, FontWeight.normal)
                ],
              ),
            ),
            Form(
                child: Column(
              children: [
                Padding(
                  padding: const EdgeInsets.only(
                    left: 20.0,
                    right: 20,
                  ),
                  child: Container(
                    height: 60,
                    decoration: BoxDecoration(
                      borderRadius: BorderRadius.circular(10),
                      color: boxColor,
                    ),
                    child: Padding(
                      padding: const EdgeInsets.all(8.0),
                      child: TextFormField(
                        keyboardType: TextInputType.phone,
                        controller: _phonecontroller,
                        decoration: InputDecoration(
                          focusedBorder: const UnderlineInputBorder(
                              borderSide:
                                  BorderSide(color: Colors.transparent)),
                          enabledBorder: const UnderlineInputBorder(
                              borderSide:
                                  BorderSide(color: Colors.transparent)),
                          hintText: "Phone Number",
                          hintStyle: GoogleFonts.ubuntu(
                              color: Colors.grey,
                              fontWeight: FontWeight.normal,
                              fontSize: 13),
                          errorStyle: const TextStyle(
                              color: Colors.redAccent, fontSize: 15),
                        ),
                        validator: (value) {
                          if (value!.length < 10) {
                            return 'Please valid Phone Number';
                          }
                          return null;
                        },
                      ),
                    ),
                  ),
                ),
                Padding(
                  padding:
                      const EdgeInsets.only(left: 20.0, right: 20, top: 20),
                  child: GestureDetector(
                    onTap: () {
                      _phonecontroller.text.isEmpty
                          ? showAlertDialog(context)
                          : Navigator.of(context).push(
                              MaterialPageRoute(
                                builder: (context) => OTPScreen(
                                  phone: _phonecontroller.text,
                                ),
                              ),
                            );
                    },
                    child: Container(
                      decoration: BoxDecoration(
                          color: appColor,
                          borderRadius: BorderRadius.circular(10)),
                      height: 60,
                      child: Center(
                          child: Helper.text("Send OTP", 20, 0, secondaryColor,
                              FontWeight.bold)),
                    ),
                  ),
                ),
              ],
            )),
            const Spacer(),
            Row(children: <Widget>[
              const Expanded(
                  child: Divider(
                height: 2,
              )),
              const SizedBox(
                width: 1,
              ),
              Helper.text(
                  "or login with", 20, 0, primaryColor, FontWeight.bold),
              const SizedBox(
                width: 1,
              ),
              const Expanded(
                  child: Divider(
                height: 2,
              )),
            ]),
            const SizedBox(
              height: 10,
            ),
            GestureDetector(
              onTap: () {
                signInMethod();
              },
              child: SizedBox(
                height: 20,
                width: 30,
                child: Image.network(
                    'https://cdn-icons-png.flaticon.com/128/2991/2991148.png'),
              ),
            ),
            const SizedBox(
              height: 20,
            ),
          ],
        ),
      ),
    );
  }

  showAlertDialog(BuildContext context) {
    Widget cancelButton = TextButton(
      child: Helper.text('Cancel', 20, 0, appColor, FontWeight.bold),
      onPressed: () {
        Navigator.pop(context);
      },
    );

    AlertDialog alert = AlertDialog(
      content: Helper.text(
          'Please enter your phone number', 18, 0, appColor, FontWeight.bold),
      actions: [
        cancelButton,
      ],
    );
    showDialog(
      context: context,
      builder: (BuildContext context) {
        return alert;
      },
    );
  }
}
