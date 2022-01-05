// ignore_for_file: prefer_const_constructors

import 'package:cached_network_image/cached_network_image.dart';
import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:cloud_photos/Screen/viewImage.dart';
import 'dart:io';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:firebase_storage/firebase_storage.dart' as firebase_storage;
import 'package:flutter/material.dart';
import 'package:cloud_photos/AuthPages/login.dart';
import 'package:cloud_photos/Authentication/auth.dart';
import 'package:cloud_photos/widgets/colors.dart';
import 'package:cloud_photos/widgets/text.dart';
import 'package:flutter_advanced_drawer/flutter_advanced_drawer.dart';
import 'package:image_picker/image_picker.dart';

class HomeScreen extends StatefulWidget {
  const HomeScreen({Key? key}) : super(key: key);

  @override
  _HomeScreenState createState() => _HomeScreenState();
}

firebase_storage.FirebaseStorage storage =
    firebase_storage.FirebaseStorage.instance;
var images = [];

class _HomeScreenState extends State<HomeScreen> {
  void getImage() async {
    var val = await FirebaseFirestore.instance
        .collection('photos')
        .doc(FirebaseAuth.instance.currentUser!.uid)
        .get();
    setState(() {
      images = val.data()!['images'];
    });
    debugPrint(images.toString());
  }

  @override
  void initState() {
    getImage();
    super.initState();
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
        child: Container(
          color: appColor,
          child: Column(
            mainAxisAlignment: MainAxisAlignment.center,
            children: [
              Padding(
                padding: const EdgeInsets.all(8.0),
                child: Row(
                  children: [
                    Helper.text(
                        "Dashboard", 20, 0, secondaryColor, FontWeight.bold),
                  ],
                ),
              ),
              Padding(
                padding: const EdgeInsets.all(8.0),
                child: Row(
                  children: [
                    Builder(builder: (context) {
                      return GestureDetector(
                          onTap: () async {
                            await signoutmethod(context);
                            showsnackbar(context);
                          },
                          child: Helper.text(
                              "Logout", 20, 0, Colors.grey, FontWeight.bold));
                    }),
                  ],
                ),
              ),
            ],
          ),
        ),
      ),
      backdropColor: appColor,
      controller: _advancedDrawerController,
      animationCurve: Curves.easeInOut,
      animationDuration: const Duration(milliseconds: 300),
      animateChildDecoration: true,
      rtlOpening: false,
      disabledGestures: false,
      childDecoration: const BoxDecoration(
          borderRadius: BorderRadius.all(Radius.circular(16))),
      child: Scaffold(
        resizeToAvoidBottomInset: false,
        floatingActionButton: FloatingActionButton(
          onPressed: () {
            showModalBottomSheet(
              context: context,
              isDismissible: true,
              builder: (context) {
                return BottomSheet(fetchImages: getImage);
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
              Padding(
                padding: const EdgeInsets.all(15.0),
                child: Row(
                  mainAxisAlignment: MainAxisAlignment.spaceBetween,
                  children: [
                    Helper.text(
                        "Welcome ${FirebaseAuth.instance.currentUser!.displayName} !",
                        20,
                        0,
                        appColor,
                        FontWeight.bold),
                  ],
                ),
              ),
              Expanded(
                child: GestureDetector(
                  onLongPress: () {
                    showAlertDialog(context);
                  },
                  child: GridView.builder(
                    itemCount: images.length,
                    gridDelegate:
                        const SliverGridDelegateWithMaxCrossAxisExtent(
                      maxCrossAxisExtent: 100,
                    ),
                    itemBuilder: (BuildContext context, int index) {
                      return Hero(
                        tag: images[index],
                        child: GestureDetector(
                          onTap: () {
                            Navigator.push(
                                context,
                                MaterialPageRoute(
                                    builder: (b) => ViewImage(
                                        image: images[index]['url'])));
                          },
                          child: Container(
                            margin: EdgeInsets.all(2),
                            height: 200,
                            width: 400,
                            child: ClipRRect(
                              borderRadius: BorderRadius.circular(10),
                              child: CachedNetworkImage(
                                  fit: BoxFit.cover,
                                  imageUrl: images[index]['url']),
                            ),
                          ),
                        ),
                      );
                    },
                  ),
                ),
              )
            ],
          ),
        ),
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

  showsnackbar(BuildContext context) {
    final snackbar = SnackBar(
      content: Text("Logged Out"),
      behavior: SnackBarBehavior.floating,
      duration: Duration(seconds: 2),
    );
    ScaffoldMessenger.of(context).showSnackBar(snackbar);
  }
}

class BottomSheet extends StatefulWidget {
  final Function fetchImages;
  const BottomSheet({Key? key, required this.fetchImages}) : super(key: key);

  @override
  _BottomSheetState createState() => _BottomSheetState();
}

class _BottomSheetState extends State<BottomSheet> {
  var imageUrl = 'str';
  late File img;
  late String time;
  bool flag = true;
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
    FirebaseFirestore.instance
        .collection("photos")
        .doc(FirebaseAuth.instance.currentUser!.uid)
        .set(
      {
        "images": FieldValue.arrayUnion(
          [
            {"url": imageUrl, "time": DateTime.now()}
          ],
        ),
      },
      SetOptions(merge: true),
    );

    setState(() {
      flag = false;
    });
    widget.fetchImages();
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

  @override
  Widget build(BuildContext context) {
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
            child: Helper.text(
                "Choose a picture to Upload", 20, 0, appColor, FontWeight.bold),
          ),
          const SizedBox(
            height: 40,
          ),
          !uploaded
              ? Padding(
                  padding: const EdgeInsets.all(0.0),
                  child: Row(
                      mainAxisAlignment: MainAxisAlignment.spaceEvenly,
                      children: [
                        GestureDetector(
                          onTap: () async {
                            setState(() {
                              uploaded = true;
                            });
                            debugPrint(uploaded.toString());
                            await getImage(true);
                            Navigator.pop(context);
                            // uploading();
                          },
                          child: Row(
                            children: [
                              Icon(
                                Icons.image,
                                size: 25,
                                color: appColor,
                              ),
                              SizedBox(
                                width: 10,
                              ),
                              Helper.text(
                                  "Gallery", 20, 0, appColor, FontWeight.bold),
                            ],
                          ),
                        ),
                        const SizedBox(
                          width: 10,
                        ),
                        GestureDetector(
                          onTap: () {
                            Navigator.pop(context);
                            getImage(false);
                            uploading();
                            if (uploaded == false) {
                              const CircularProgressIndicator();
                            }
                          },
                          child: Row(
                            children: [
                              Icon(
                                Icons.camera,
                                color: appColor,
                                size: 25,
                              ),
                              const SizedBox(
                                width: 10,
                              ),
                              Helper.text(
                                  "Camera", 20, 0, appColor, FontWeight.bold),
                            ],
                          ),
                        )
                      ]),
                )
              : const Center(
                  child: CircularProgressIndicator(),
                ),
        ],
      ),
    );
  }
}
