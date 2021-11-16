# Linking User Accounts

Account linking allows the users to sign into the same account with different authentication providers.

You can allow your users to sign into your application using multiple providers by linking authentication credentials to existing user accounts. Users can then be identified using their Firebase UID, regardless of the provider they used to sign in.

The user must first be logged in to one of the accounts you want to link the new provider to. You can then log the user into the second provider, and pass that AuthCredential to the linkWithCredential method from the first UserCredential.

### Initially,enable the providers

<img width="705" alt="firebase" src="https://user-images.githubusercontent.com/68653906/141871702-2c447b8a-f3cf-444e-a07d-3e7b88c740a1.png">

## Linking Google Account

### Add dependency:
```
dependencies:
  google_sign_in: "^4.5.1"
```

```dart
Future<void> linkWithGoogle(BuildContext context) async {
  //get currently logged in user
  User? existingUser = FirebaseAuth.instance.currentUser;
  // Trigger the authentication flow
  final GoogleSignInAccount? googleUser = await GoogleSignIn().signIn();

  // Obtain the auth details from the request
  final GoogleSignInAuthentication googleAuth =
      await googleUser!.authentication;

  // Create a new credential
  final OAuthCredential credential = GoogleAuthProvider.credential(
    accessToken: googleAuth.accessToken,
    idToken: googleAuth.idToken,
  );

  await existingUser!.linkWithCredential(credential).whenComplete(() {
    print("Linked");
  });
}
```

## Linking Phone Number
```dart
linkWithPhone(String phoneNo) async {
  late String verificationId;
  //get currently logged in user
  User? existingUser = FirebaseAuth.instance.currentUser;
  
  signIn(AuthCredential authCreds) async {
    //now link these credentials with the existing user
    await existingUser!.linkWithCredential(authCreds);
  }
  //get the credentials of the new linking account

  final PhoneVerificationCompleted verificationCompleted =
      (AuthCredential authCreds) {
    signIn(authCreds);
  };

  final PhoneVerificationFailed verificationFailed =
      (FirebaseAuthException authException) {
    print('Auth Exception is ${authException.message}');
  };
  final PhoneCodeSent codeSent =
      (String verificationId, int? forceResendingToken) {
    print('verification id is $verificationId');
    verificationId = verificationId;
  };
  final PhoneCodeAutoRetrievalTimeout codeAutoRetrievalTimeout =
      (String verificationId) {
    verificationId = verificationId;
  };
  await FirebaseAuth.instance.verifyPhoneNumber(
      phoneNumber: phoneNo,
      timeout: const Duration(seconds: 5),
      verificationCompleted: verificationCompleted,
      verificationFailed: verificationFailed,
      codeSent: codeSent,
      codeAutoRetrievalTimeout: codeAutoRetrievalTimeout);
}
```