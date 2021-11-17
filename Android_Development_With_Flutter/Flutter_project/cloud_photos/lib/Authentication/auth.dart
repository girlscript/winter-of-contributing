import 'package:firebase_auth/firebase_auth.dart';
import 'package:google_sign_in/google_sign_in.dart';
// import 'package:many_apps/Firebase/localdb.dart';

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
    final GoogleSignInAuthentication googleSignInAuthentication =
        await googleSignInAccount!.authentication;

    // creating credential for a user same as recipt that user is been verified
    final AuthCredential credential = GoogleAuthProvider.credential(
      idToken: googleSignInAuthentication.idToken,
      accessToken: googleSignInAuthentication.accessToken,
    );
    final userCredential = await _auth.signInWithCredential(credential);
    final User? user = userCredential.user;
    assert(await user!.getIdToken() != null);

    final User? currentuser = _auth.currentUser;
    assert(currentuser!.uid == user!.uid);
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
