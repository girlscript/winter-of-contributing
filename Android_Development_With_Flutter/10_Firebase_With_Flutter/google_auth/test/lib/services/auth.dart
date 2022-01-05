import 'package:firebase_auth/firebase_auth.dart';
import 'package:google_sign_in/google_sign_in.dart';

final FirebaseAuth _auth = FirebaseAuth.instance;
final GoogleSignIn googleSignIn = GoogleSignIn();

String name = "";
String email = "";
String imgurl = "";
//Sign In function
Future<User?> signin() async {
  //signin option of different email acc
  try {
    final GoogleSignInAccount? googleSignInAccount =
        await googleSignIn.signIn();

    //authentication of the email
    final GoogleSignInAuthentication googleSignInAuthentication =
        await googleSignInAccount!.authentication;

    // creating credential for a user same as recipt that user is been verified
    final AuthCredential credential = GoogleAuthProvider.credential(
      idToken: googleSignInAuthentication.idToken,
      accessToken: googleSignInAuthentication.accessToken,
    );

    //Google Authenticate the user and provide credential to put that particular user in the firabase database
    //After the user is been aurthenticated firebase creates users account

    //creating user class to return
    final userCredential = await _auth.signInWithCredential(credential);
    final User? user = await userCredential.user;

    //final checking that user is not anonymous

    //checking currentuser is same as user we created
    final User? currentuser = await _auth.currentUser;
    assert(currentuser!.uid == user!.uid);
    print(user);

    return user;
  } catch (e) {
    print(e);
  }
}

Future<String> signout() async {
  await googleSignIn.signOut();
  await _auth.signOut();
  return "done";
}
