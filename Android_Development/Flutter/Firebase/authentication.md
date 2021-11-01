## What is Authentication?
Firebase Authentication provides backend services to authenticate users to your app or web for both android an ios. 
It supports authentication using email, passwords, phone numbers, popular credentials from Google, Facebook and Twitter etc..

## Installation
Before installing the Authentication plugin, ensure that you have followed the Firebase connection and have initialise the Firebase for your project.

## Step 1. Add Dependency
- Add the firebase_auth dependency to your projects pubspec.yaml:
```
dependencies:
  flutter:
    sdk: flutter
  firebase_core: "^0.7.0"
  firebase_auth: "^0.20.1"
```
## Step 2. Download dependency
Download the dependency by using this command in your project terminal:
```
$ flutter pub get
```
## Step 3.(Web Only) Add the SDK
If you are using on the web, add the firebase-auth JavaScript SDK to your index.html:
```dart
<html>
  ...
  <body>
    <script src="https://www.gstatic.com/firebasejs/8.6.1/firebase-app.js"></script>
    <script src="https://www.gstatic.com/firebasejs/8.6.1/firebase-auth.js"></script>
  </body>
</html>
```
## Step 4. Flutter run
```
$ flutter run
```
### Let's go with an example of connecting Google Signin 
Google signin imposed in flutter app or web via getting **Credentials from google** called as
- signInWithCredential
## 1. Add dependency:
```
dependencies:
  google_sign_in: "^4.5.1"
```
### 2.Enabling the provider
Before get into coding you should make sure that you have enabled Google in Firebase of your project
<img width="705" alt="firebase" src="https://user-images.githubusercontent.com/54928117/139629923-e5ffc5a7-1462-489f-9028-42f94e98381a.png">

## 3. Next step
```dart
import 'package:google_sign_in/google_sign_in.dart';

Future<UserCredential> signInWithGoogle() async {
  final GoogleSignInAccount? googleUser = await GoogleSignIn().signIn();
  final GoogleSignInAuthentication? googleAuth = await googleUser?.authentication;
  final credential = GoogleAuthProvider.credential(
    accessToken: googleAuth?.accessToken,
    idToken: googleAuth?.idToken,
  );
  return await FirebaseAuth.instance.signInWithCredential(credential);
}
```
In case of web you should create a Google auth provider
```dart
GoogleAuthProvider googleProvider = GoogleAuthProvider();

googleProvider.addScope('https://www.googleapis.com/auth/contacts.readonly');
googleProvider.setCustomParameters({
  'login_hint': 'user@example.com'
});
```
**Yes now you have learnt how to use Authentication in Flutter for both android and web.**
