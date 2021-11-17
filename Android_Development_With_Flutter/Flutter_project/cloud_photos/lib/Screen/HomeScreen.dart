import 'package:cloud_photos/AuthPages/login.dart';
import 'package:cloud_photos/Authentication/auth.dart';
import 'package:cloud_photos/widgets/colors.dart';
import 'package:cloud_photos/widgets/text.dart';
import 'package:flutter/material.dart';
import 'package:google_fonts/google_fonts.dart';

class HomeScreen extends StatefulWidget {
  const HomeScreen({Key? key}) : super(key: key);

  @override
  _HomeScreenState createState() => _HomeScreenState();
}

class _HomeScreenState extends State<HomeScreen> {
  signoutmethod(context) async {
    await signout();
    // Navigator.pushReplacement(
    //   context,
    //   MaterialPageRoute(
    //     builder: (context) => const LoginPage(),
    //   ),
    // );
    WidgetsBinding.instance!.addPostFrameCallback(
      (_) {
        Navigator.pushReplacement(
          context,
          MaterialPageRoute(
            builder: (context) => const LoginPage(),
          ),
        );
      },
    );
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      resizeToAvoidBottomInset: false,
      floatingActionButton: FloatingActionButton(
        onPressed: () {
          showModalBottomSheet(
            context: context,
            builder: (context) {
              return Container(
                decoration: BoxDecoration(
                    borderRadius: BorderRadius.only(
                        topLeft: Radius.circular(40),
                        topRight: Radius.circular(40))),
                height: 200,
                child: Column(
                  children: [
                    SizedBox(
                      height: 30,
                    ),
                    Container(
                      child: Helper.text("Choose a picture to Upload", 20, 0,
                          appColor, FontWeight.bold),
                    ),
                    SizedBox(
                      height: 40,
                    ),
                    Container(
                      child: Row(children: [
                        SizedBox(
                          width: 10,
                        ),
                        IconButton(
                            onPressed: () {},
                            icon: Icon(
                              Icons.image,
                              size: 15,
                              color: appColor,
                            )),
                        SizedBox(
                          width: 10,
                        ),
                        Helper.text(
                            "Gallery", 20, 0, appColor, FontWeight.bold),
                        SizedBox(
                          width: 100,
                        ),
                        IconButton(
                            onPressed: () {},
                            icon: Icon(
                              Icons.camera,
                              color: appColor,
                              size: 15,
                            )),
                        SizedBox(
                          width: 10,
                        ),
                        Helper.text("Camera", 20, 0, appColor, FontWeight.bold),
                      ]),
                    ),
                  ],
                ),
              );
            },
          );
        },
        backgroundColor: appColor,
        child: Icon(
          Icons.cloud_upload,
          size: 30,
          color: secondaryColor,
        ),
      ),
      backgroundColor: secondaryColor,
      body: SafeArea(
          child: Column(
        children: [
          ElevatedButton(
            onPressed: () {
              signoutmethod(context);
            },
            child: const Text("sign Out"),
          ),
          Padding(
            padding: const EdgeInsets.all(15.0),
            child: Row(
                mainAxisAlignment: MainAxisAlignment.spaceBetween,
                children: [
                  Helper.text(
                      "Welcome Reshma !", 20, 0, appColor, FontWeight.bold),
                  CircleAvatar(
                      radius: 20,
                      backgroundColor: primaryColor,
                      backgroundImage: NetworkImage(
                          "https://images.pexels.com/photos/5822225/pexels-photo-5822225.jpeg?auto=compress&cs=tinysrgb&dpr=2&w=500"))
                ]),
          ),
          Expanded(
              child: GestureDetector(
            onLongPress: () {
              showAlertDialog(context);
            },
            child: Container(
              height: MediaQuery.of(context).size.height,
              child: GridView.builder(
                itemCount: 20,
                gridDelegate: SliverGridDelegateWithMaxCrossAxisExtent(
                    maxCrossAxisExtent: 100,
                    mainAxisSpacing: 10,
                    crossAxisSpacing: 10),
                itemBuilder: (BuildContext context, int index) {
                  return Container(
                    decoration:
                        BoxDecoration(borderRadius: BorderRadius.circular(20)),
                    height: 200,
                    width: 400,
                    child: Image.network(
                      'https://images.pexels.com/photos/5822226/pexels-photo-5822226.jpeg?auto=compress&cs=tinysrgb&dpr=2&w=500',
                      fit: BoxFit.cover,
                    ),
                  );
                },
              ),
            ),
          ))
        ],
      )),
    );
  }

  showAlertDialog(BuildContext context) {
    Widget cancelButton = TextButton(
      style: ButtonStyle(backgroundColor: MaterialStateProperty.all(appColor)),
      child: Helper.text('Cancel', 20, 0, secondaryColor, FontWeight.bold),
      onPressed: () {
        Navigator.pop(context);
      },
    );
    Widget continueButton = TextButton(
      child: Helper.text('Delete', 20, 0, appColor, FontWeight.bold),
      onPressed: () {
        Navigator.pop(context);
      },
    );
    AlertDialog alert = AlertDialog(
      content: Helper.text('Would you like to delete the image?', 18, 0,
          appColor, FontWeight.bold),
      actions: [
        cancelButton,
        continueButton,
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
