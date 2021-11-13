# Connect App To Firebase
In this article we will see how to connect your flutter android app to firebase.
### STEP 1: Create Firebase Project
Before adding firebase to flutter app you should create new Firebase Project on your firebase account.
### STEP 2: Register your Flutter app to Firebase
1. In the console of Firebase project click Android app icon.
2. Enter your app's package name -

        •A package name is sometimes referred to as an application ID.

        •Find this package name in your module (app-level) Gradle file, usually app/build.gradle (example package name: com.yourcompany.yourproject).

3. Enter the app information 

        •App nickname: An internal, convenience identifier that is only visible to you in the Firebase console
        •Debug signing certificate SHA-1:
        Use this command to generate SHA-1 key-
         keytool -list -v \-alias androiddebugkey -keystore %USERPROFILE%\.android\debug.keystore

4. Register Your App.

### STEP 3: Add a Firebase configuration file
1. Click Download google-services.json to obtain your Firebase Android config file (google-services.json).
2. Paste this file into android/app folder.
3. To enable firebase services add following commands to Gradle files.
    
    In your project level gradle file i.e. android/build.gradle add the following commands that are not present.
```gradle
buildscript {

    repositories {
      // Check that you have the following line (if not, add it):
      google()  // Google's Maven repository
    }

    // ...

    dependencies {
      // ...

      // Add the following line:
      classpath 'com.google.gms:google-services:4.3.10'  // Google Services plugin
    }
}

allprojects {
    // ...

    repositories {
      // Check that you have following line (if not, add it):
      google()  // Google's Maven repository
      // ...
    }
}
```
Now in your app level gradle file i.e. android/app/build.gradle apply following gradle plugin.
```gradle
// Add the following line:
apply plugin: 'com.google.gms.google-services'  // Google Services plugin

android {
  // ...
}

// ...
```
4. Run Flutter Pub Get to get packages.
5. In Firebase console click Next to skip remaining steps.
### STEP 4: Add FlutterFire plugins
In your pubspec.yaml file add following dependencies 
```dart
dependencies:
  flutter:
    sdk: flutter
  firebase_core: ^0.4.0+9
  firebase_analytics: ^5.0.2
  firebase_auth: ^0.14.0+5
  cloud_firestore: ^0.12.9+5
 ``` 
 Now Run Flutter pub get to get all packages.

### You have successfully connect Firebase to your Flutter App.