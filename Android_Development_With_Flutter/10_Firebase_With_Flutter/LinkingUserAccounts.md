# Linking User Accounts

This method should be used when you want your users to use multiple authentication providers to sign in to the same account.

By linking new AuthCredentials to the existing user accounts, multiple authentication providers can be used by the users to sign in to your application. Firebase user ID can be used to identify the users, regardless of the provider they used to sign in.For example, a user who signed in with an email and password can link a GitHub account and sign in with either method in the future.

It is **mandatory** for the user to be **logged in** to one of the accounts you want to link the new authentication provider to. The user can then be signed in to the second provider, and pass that AuthCredential to the linkWithCredential method from the existing user(current user instance).


### Initially, enable the providers and provide support for two or more authentication providers in the app

<img width="705" alt="firebase" src="https://user-images.githubusercontent.com/68653906/141871702-2c447b8a-f3cf-444e-a07d-3e7b88c740a1.png">

## Linking Google Account

### Add dependency:
```
dependencies:
  google_sign_in: "^4.5.1"
```

```dart
Future<void> linkWithGoogle(BuildContext context) async {
  //get the currently logged in user
  User? existingUser = FirebaseAuth.instance.currentUser;
  // Trigger the authentication flow
  final GoogleSignInAccount? googleUser = await GoogleSignIn().signIn();

  // Obtain the authentication details from the request
  final GoogleSignInAuthentication googleAuth =
      await googleUser!.authentication;

  // Create a new credential
  final OAuthCredential credential = GoogleAuthProvider.credential(
    accessToken: googleAuth.accessToken,
    idToken: googleAuth.idToken,
  );
  
  //Link these credentials with the existing user
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

  //get the credentials of the new account to be linked
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
  
  //verify the phone number
  await FirebaseAuth.instance.verifyPhoneNumber(
      phoneNumber: phoneNo,
      timeout: const Duration(seconds: 5),
      verificationCompleted: verificationCompleted,
      verificationFailed: verificationFailed,
      codeSent: codeSent,
      codeAutoRetrievalTimeout: codeAutoRetrievalTimeout);
}
```
