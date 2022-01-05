<h1 align = center>:yellow_circle: Deep Linking :yellow_circle: </h1>

### What is deep linking?
Deep linking is the ability to jump  into a specific  place in your application from somewhere outside of the application.For example,if your friend shares a  link of a video from youtube through a messaging service and when you click on the link it either redirects you to the app if you have it downloaded or it redirects you to appstore or playstore for you to download the app.

To enable deep linking for android :
#### AndroidManifest.xml
```xml
<activity>
<!--Add the below lines of code inside of activity tag -->
  <meta-data 
              android:name="flutter_deeplinking_enabled"
              android:value="true" 
              />
      <intent-filter>
        <action android:name="android.intent.action.VIEW" />
        <category android:name="android.intent.category.DEFAULT" />
        <category android:name="android.intent.category.BROWSABLE" />
        <!-- Accepts URIs that begin with YOUR_SCHEME://YOUR_HOST -->
        <data android:scheme="https" android:host="example.xyz" />
      </intent-filter>
</activity>
```

Before moving to coding the application we need to add [uni_links](https://pub.dev/packages/uni_links) package

#### pubspec.yaml

```yaml
dependencies:
  uni_links: ^0.5.1
```




#### main.dart
```dart
import 'package:flutter/material.dart';

import 'package:uni_links/uni_links.dart';

void main() {
  WidgetsFlutterBinding.ensureInitialized();

  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Flutter Demo',
      theme: ThemeData(
        primarySwatch: Colors.blue,
      ),
      home: HomePage(),
    );
  }
}

class HomePage extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text('Deep Links'),
      ),
      body: FutureBuilder<String?>(
          future: getInitialLink(),
          builder: (context, snapshot) {
            if (snapshot.connectionState == ConnectionState.waiting) {
              return const Center(child: CircularProgressIndicator());
            }
            final link = snapshot.data ?? '';
            final message =
                link.isEmpty ? 'Opened directly' : 'Opened with\n$link';
            return Center(
              child: Text(
                message,
                textAlign: TextAlign.center,
                style: const TextStyle(
                  fontSize: 30,
                  fontWeight: FontWeight.bold,
                ),
              ),
            );
          }),
    );
  }
}

```

![deep1](https://user-images.githubusercontent.com/76723996/139531870-6e194d80-e84c-4b1e-bf0e-0aaa5680d4a5.png)
![deep2](https://user-images.githubusercontent.com/76723996/139531929-40c93980-00b0-4a41-b38f-5ec8a2eeb6cc.png)
![deep 3](https://user-images.githubusercontent.com/76723996/139531880-ab2f4b3b-9b71-400d-a4bb-4dd3ea2103df.png)
