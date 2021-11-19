# Linking User Accounts

This method should be used when you want your users to use multiple authentication providers to sign in to the same account.

By linking new AuthCredentials to the existing user's accounts, user can later log in to your application using multiple authentication providers. Regardless of the authentication provider they used to sign in, Firebase user ID can be used to identify the users. For example, a user who signed in with an email and password can link a GitHub account and sign in with either method in the future.

It is **mandatory** for the user to be **logged in** to one of the accounts you want to link the new authentication provider to. The user can then be signed in to the second provider, and pass that AuthCredential to the linkWithCredential method from the existing user(current user instance).


### Initially, enable the required authentication providers and provide support for two or more authentication providers in the app

<img width="705" alt="firebase" src="https://user-images.githubusercontent.com/68653906/141871702-2c447b8a-f3cf-444e-a07d-3e7b88c740a1.png">

## Linking Google Account

### Add dependency:
```
dependencies:
  //use the latest version
  google_sign_in: "^4.5.1"
```

```dart
Future<void> linkAccountWithGoogle(BuildContext context) async {
  // get the currently signed in user
  User? currentUser = FirebaseAuth.instance.currentUser;

  // For triggering the authentication flow
  final GoogleSignInAccount? googleSignInAccount = await GoogleSignIn().signIn();

  // Obtain the authentication details from the request
  final GoogleSignInAuthentication googleAuthentication =
      await googleSignInAccount!.authentication;

  // Create a new OAuthCredential
  final OAuthCredential _credential = GoogleAuthProvider.credential(
    accessToken: googleAuthentication.accessToken,
    idToken: googleAuthentication.idToken,
  );
  
  //Link current user with these credentials
  await currentUser!.linkWithCredential(_credential).whenComplete(() {
    print("Linked");
  });
}
```

## Linking Phone Number
```dart
linkAccountWithPhoneNo(String phoneNo) async {
  late String verificationId;
  final FirebaseAuth _auth = FirebaseAuth.instance;
  //get currently logged in user
  User? existingUser = _auth.currentUser;
  
  signIn(AuthCredential authCreds) async {
    //now link these credentials with the existing user
    await existingUser!.linkWithCredential(authCreds);
  }

  //get the credentials of the new account to be linked
  final PhoneVerificationCompleted verificationCompleted =
      (AuthCredential authCreds) {
    signIn(authCreds);
  };

  final PhoneVerificationFailed verificationFailed = (FirebaseAuthException authException) {
    print('Verificatin failed, Auth Exception : ${authException.message}');
  };

  final PhoneCodeSent phoneCodeSent = (String verificationId, int? forceResendingToken) {
    print('verification id : $verificationId');
    verificationId = verificationId;
  };

  final PhoneCodeAutoRetrievalTimeout codeAutoRetrievalTimeout =
      (String verificationId) {
    verificationId = verificationId;
  };
  
  //verify phone number
  await _auth.verifyPhoneNumber(
      phoneNumber: phoneNo,
      timeout: const Duration(seconds: 30),
      verificationCompleted: verificationCompleted,
      verificationFailed: verificationFailed,
      codeSent: phoneCodeSent,
      codeAutoRetrievalTimeout: codeAutoRetrievalTimeout);
}
```
