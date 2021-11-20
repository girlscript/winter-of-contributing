import 'package:cloud_firestore/cloud_firestore.dart';
import 'dart:io';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:firebase_storage/firebase_storage.dart' as firebase_storage;
import 'package:flutter/material.dart';
import 'package:cloud_photos/AuthPages/login.dart';
import 'package:cloud_photos/Authentication/auth.dart';
import 'package:cloud_photos/widgets/colors.dart';
import 'package:cloud_photos/widgets/text.dart';
import 'package:flutter_advanced_drawer/flutter_advanced_drawer.dart';
import 'package:google_fonts/google_fonts.dart';
import 'package:image_picker/image_picker.dart';

class HomeScreen extends StatefulWidget {
  const HomeScreen({Key? key}) : super(key: key);

  @override
  _HomeScreenState createState() => _HomeScreenState();
}

firebase_storage.FirebaseStorage storage =
    firebase_storage.FirebaseStorage.instance;

class _HomeScreenState extends State<HomeScreen> {
  var imageUrl = 'str';
  late File img;
  late String time;
  bool uploaded = false;

  Future<void> uploading() async {
    firebase_storage.Reference ref = storage
        .ref()
        .child('photos')
        .child(FirebaseAuth.instance.currentUser!.uid);

    var imgPath = DateTime.now().millisecondsSinceEpoch.toString() + ".png";
    ref = ref.child(imgPath);
    firebase_storage.UploadTask uploadedImg = ref.putFile(img);
    await uploadedImg.whenComplete(() => null);

    await ref.getDownloadURL().then((value) {
      imageUrl = value;
      time = DateTime.now().millisecondsSinceEpoch.toString();
    });
    await tofirestore();
  }

  bool flag = true;
  Future<void> tofirestore() async {
    flag
        ? FirebaseFirestore.instance
            .collection("photos")
            .doc(FirebaseAuth.instance.currentUser!.uid)
            .set({
            "images": FieldValue.arrayUnion(
              [
                {"url": imageUrl, "time": DateTime.now()}
              ],
            )
          })
        : FirebaseFirestore.instance
            .collection("photos")
            .doc(FirebaseAuth.instance.currentUser!.uid)
            .update(
            {
              "images": FieldValue.arrayUnion(
                [
                  {
                    "url": imageUrl,
                    "time": DateTime.now(),
                  }
                ],
              )
            },
          );
    setState(() {
      flag = false;
      uploaded = true;
    });
  }

  getImage(bool val) async {
    ImagePicker _picker = ImagePicker();
    final XFile? image = await _picker.pickImage(
        source: val ? ImageSource.gallery : ImageSource.camera);
    if (image != null) {
      setState(() {
        img = File(image.path);
      });
      await uploading();
    }
  }

  signoutmethod(context) async {
    await signout();
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
    final _advancedDrawerController = AdvancedDrawerController();
    return AdvancedDrawer(
      drawer: Drawer(
        child: SafeArea(
          child: Column(
            mainAxisAlignment: MainAxisAlignment.center,
            children: [
              CircleAvatar(
                radius: 50,
                child: Image.network(
                    'https://upload.wikimedia.org/wikipedia/commons/thumb/b/b7/Circular_buffer.svg/1200px-Circular_buffer.svg.png'),
              ),
              IconButton(
                onPressed: () {
                  signoutmethod(context);
                },
                icon: const Icon(
                  Icons.exit_to_app,
                  size: 35,
                ),
              )
            ],
          ),
        ),
      ),
      backdropColor: Colors.grey,
      controller: _advancedDrawerController,
      animationCurve: Curves.easeInOut,
      animationDuration: const Duration(milliseconds: 300),
      animateChildDecoration: true,
      rtlOpening: false,
      disabledGestures: false,
      child: Scaffold(
        resizeToAvoidBottomInset: false,
        floatingActionButton: FloatingActionButton(
          onPressed: () {
            showModalBottomSheet(
              context: context,
              builder: (context) {
                return Container(
                  decoration: const BoxDecoration(
                    borderRadius: BorderRadius.only(
                      topLeft: Radius.circular(40),
                      topRight: Radius.circular(40),
                    ),
                  ),
                  height: 200,
                  child: Column(
                    children: [
                      const SizedBox(
                        height: 30,
                      ),
                      Container(
                        child: Helper.text("Choose a picture to Upload", 20, 0,
                            appColor, FontWeight.bold),
                      ),
                      const SizedBox(
                        height: 40,
                      ),
                      Row(children: [
                        const SizedBox(
                          width: 10,
                        ),
                        IconButton(
                            onPressed: () {
                              getImage(true);
                              if (uploaded == false) {
                                const Center(
                                    child: CircularProgressIndicator());
                              }
                              // uploading();
                            },
                            icon: Icon(
                              Icons.image,
                              size: 15,
                              color: appColor,
                            )),
                        const SizedBox(
                          width: 10,
                        ),
                        Helper.text(
                            "Gallery", 20, 0, appColor, FontWeight.bold),
                        const SizedBox(
                          width: 10,
                        ),
                        IconButton(
                            onPressed: () {
                              getImage(false);
                              uploading();
                              if (uploaded == false) {
                                const CircularProgressIndicator();
                              }
                            },
                            icon: Icon(
                              Icons.camera,
                              color: appColor,
                              size: 15,
                            )),
                        const SizedBox(
                          width: 10,
                        ),
                        Helper.text("Camera", 20, 0, appColor, FontWeight.bold),
                      ]),
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
        appBar: AppBar(
          title: Text(
            "Cloud Photos",
            style: GoogleFonts.nunito(),
          ),
        ),
        body: SafeArea(
            child: Column(
          children: [
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
                        backgroundImage: const NetworkImage(
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
                  gridDelegate: const SliverGridDelegateWithMaxCrossAxisExtent(
                      maxCrossAxisExtent: 100,
                      mainAxisSpacing: 10,
                      crossAxisSpacing: 10),
                  itemBuilder: (BuildContext context, int index) {
                    return Container(
                      decoration: BoxDecoration(
                          borderRadius: BorderRadius.circular(20)),
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
      ),
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
