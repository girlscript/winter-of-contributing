# Easy Runtime Permissions with Dexter
Dexter is an external library which helps in implementing runtime permissions using a few lines of code.

## Dependency
To implement this library we need to add the following dependency in the app/build.gradle file
```java
dependencies {
    implementation 'com.karumi:dexter:6.2.2'
}
```
## Single Runtime Permissions
If we want to request a single permission during runtime, we use the method `withPermission()`. This method passes the required permission. The state of the permission is received using a `PermissionListener`.
The two methods overridden are :
* `onPermissionGranted()` - performs tasks after the User has granted the permission.
* `onPermissionDenied()` - performs tasks after the User has denied the permission.
* `response.isPermanentlyDenied()` - cheacks if the User has permanently denied the permission.

Let us make an App to request permission to access the location of the User.
We start with making a simple layout. 
```xml
<?xml version="1.0" encoding="utf-8"?>
<RelativeLayout xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    xmlns:tools="http://schemas.android.com/tools"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    android:gravity="center"
    tools:context=".MainActivity">

    <Button
        android:id="@+id/btn"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:padding="4dp"
        android:text="Get Location Permissions"
        android:textSize="20sp" />

</RelativeLayout>
```
Before Proceeding add the permission in the Manifest file too.
```xml
    <uses-permission android:name="android.permission.ACCESS_FINE_LOCATION"/>
```

The App will ask for permissions on clicking the button.
```java
import androidx.appcompat.app.AppCompatActivity;

import android.Manifest;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;

import com.karumi.dexter.Dexter;
import com.karumi.dexter.PermissionToken;
import com.karumi.dexter.listener.PermissionDeniedResponse;
import com.karumi.dexter.listener.PermissionGrantedResponse;
import com.karumi.dexter.listener.PermissionRequest;
import com.karumi.dexter.listener.single.PermissionListener;


public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        Button button = findViewById(R.id.btn);
        button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                // Requesting Permission to access the location
                Dexter.withContext(getApplicationContext()).withPermission(Manifest.permission.ACCESS_FINE_LOCATION).withListener(new PermissionListener() {
                    @Override
                    public void onPermissionGranted(PermissionGrantedResponse permissionGrantedResponse) {
                        // Permission Granted
                    }

                    @Override
                    public void onPermissionDenied(PermissionDeniedResponse permissionDeniedResponse) {
                        // Permission Denied
                    }

                    @Override
                    public void onPermissionRationaleShouldBeShown(PermissionRequest permissionRequest, PermissionToken permissionToken) {
                        permissionToken.continuePermissionRequest();
                    }
                }).check();

            }
        });

    }
}
```

<p align="center">
    <img src="https://user-images.githubusercontent.com/79036525/141605688-1871f8ea-2219-4232-8aca-d1e214c1200d.png">
 </p>
   
## Multiple Runtime Permissions
Let us make an App to request permissions for both Camera and external Storage simultaneously.
Before proceeding add the permissions in the Manifest file
```xml
    <uses-permission android:name="android.permission.CAMERA"/>
    <uses-permission android:name="android.permission.READ_EXTERNAL_STORAGE"/>
    <uses-permission android:name="android.permission.WRITE_EXTERNAL_STORAGE"/>
```
We will make a simple layout consisting of a single button.
```xml
<?xml version="1.0" encoding="utf-8"?>
<RelativeLayout xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    xmlns:tools="http://schemas.android.com/tools"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    android:gravity="center"
    tools:context=".MainActivity">

    <Button
        android:id="@+id/btn"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:padding="4dp"
        android:text="Get Permissions"
        android:textSize="20sp" />

</RelativeLayout>
```
We will see how we get the permissions on Button click.
```java
package com.example.gwoc;

import androidx.appcompat.app.AppCompatActivity;

import android.Manifest;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;

import com.karumi.dexter.Dexter;
import com.karumi.dexter.MultiplePermissionsReport;
import com.karumi.dexter.PermissionToken;
import com.karumi.dexter.listener.PermissionDeniedResponse;
import com.karumi.dexter.listener.PermissionGrantedResponse;
import com.karumi.dexter.listener.PermissionRequest;
import com.karumi.dexter.listener.multi.MultiplePermissionsListener;
import com.karumi.dexter.listener.single.PermissionListener;

import java.util.List;


public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        Button button = findViewById(R.id.btn);
        button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                // Requesting Permission to access the location
                Dexter.withContext(getApplicationContext()).withPermissions(
                        Manifest.permission.READ_EXTERNAL_STORAGE,
                        Manifest.permission.WRITE_EXTERNAL_STORAGE,
                        Manifest.permission.CAMERA).withListener(new MultiplePermissionsListener() {
                    @Override
                    public void onPermissionsChecked(MultiplePermissionsReport multiplePermissionsReport) {
                        // check if all permissions are granted
                        if (multiplePermissionsReport.areAllPermissionsGranted()) {
                            // do the required action
                        }

                        if (multiplePermissionsReport.isAnyPermissionPermanentlyDenied()) {
                            // permission is denied permenantly, navigate user to app settings
                        }
                    }

                    @Override
                    public void onPermissionRationaleShouldBeShown(List<PermissionRequest> list, PermissionToken permissionToken) {
                        permissionToken.continuePermissionRequest();
                    }
                }).onSameThread().check();

            }
        });

    }
}
```
<p align="center">
    <img src="https://user-images.githubusercontent.com/79036525/141606021-bccc5a4e-a074-4235-9fdb-c7e1b496fe13.png">
    <img src="https://user-images.githubusercontent.com/79036525/141606032-32760323-0b10-4c33-856a-361d90ccf77c.png">
 </p>


#### Dexter also provides features like using it with SnackBar, different types of listeners, error handling and few other. To know more about these you can refer to [this page](https://github.com/Karumi/Dexter.git).

   
