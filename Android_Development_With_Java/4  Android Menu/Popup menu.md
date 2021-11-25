 
 
 # **PopUp Menu Android**
 
 PopUp menu is a type of menu that contains a menu and displays that menu below the anchor text if space is available. If the space 
 is not available then it displays it above the Anchor text. It appears untill when you do not click on the pop-up menu text.
 
# <hr> For this you need to create an `XML` file inside `"res/menu/popup"` like this: </hr>
> XML Code:
```XML
<menu xmlns:android="http://schemas.android.com/apk/res/android" >  
    <item         
       android:id="@+id/one"  
     android:title="Android"/>  
    <item  
        android:id="@+id/two"  
        android:title="BlackBerry"/>  
  
    <item  
        android:id="@+id/three"  
        android:title="Apple"/>   
</menu>
```

## <hr> Step 1 </hr>

## **Create an `XML` file with this:**

> XML Code:
```XML
<RelativeLayout xmlns:android="http://schemas.android.com/apk/res/android"  
    xmlns:tools="http://schemas.android.com/tools"  
    android:layout_width="match_parent"  
    android:layout_height="match_parent"  
    tools:context=".MainActivity"  
    android:background="#fdacbd">  
   
    <Button  
        android:id="@+id/button"  
        android:layout_width="wrap_content"  
        android:layout_height="wrap_content"  
        android:layout_alignParentLeft="true"  
        android:layout_alignParentTop="true"  
        android:layout_marginLeft="110dp"  
        android:layout_marginTop="80dp"  
        android:text="Show Popup" />  
   
</RelativeLayout>
```



## <hr> Step 2 </hr>

## **Create another `XML` file with this:**

> XML Code:
```XML
 <menu xmlns:android="http://schemas.android.com/apk/res/android" >  
    <item  
        android:id="@+id/one"  
        android:title="Android"/>  
    <item  
        android:id="@+id/two"  
        android:title="BlackBerry"/>  
    <item  
        android:id="@+id/three"  
        android:title="Apple"/>  
</menu>
 ```


## <hr> Step 3 </hr>

## **Create a `Java` class file and with the following.**
 
In this, you create the id of the button on which you pop up the menu. Now you will crate the instance of the PopUp menu, then 
you will populate.

> JAVA Code:
```java
package com.popupmenu;  
   
import android.os.Bundle;  
import android.app.Activity;  
import android.view.Menu;  
import android.view.MenuItem;  
import android.view.View;  
import android.view.View.OnClickListener;  
import android.widget.Button;  
import android.widget.PopupMenu;  
import android.widget.Toast;  
public class MainActivity extends Activity {  
    Button button;  
   
    @Override  
    protected void onCreate(Bundle savedInstanceState) {  
        super.onCreate(savedInstanceState);  
        setContentView(R.layout.activity_main);  
        button = (Button) findViewById(R.id.button);  
        button.setOnClickListener(new OnClickListener() {  
   
            @Override  
            public void onClick(View v) {  
                //Creating the instance of PopupMenu  
                PopupMenu popupMenu = new PopupMenu(MainActivity.this, button);  
                //Inflating the Popup using xml file  
                popupMenu.getMenuInflater().inflate(R.menu.popup, popupMenu.getMenu());  
                //registering popup with OnMenuItemClickListener  
                popupMenu.setOnMenuItemClickListener(new PopupMenu.OnMenuItemClickListener() {  
                    public boolean onMenuItemClick(MenuItem item) {  
                        Toast.makeText(MainActivity.this,"Button Clicked : " + item.getTitle(),Toast.LENGTH_SHORT).show();  
                        return true;  
                    }  
                });  
                popupMenu.show();//showing popup menu  
            }  
        });//closing the setOnClickListener method  
    }  
}
```





## <hr> Step 4 </hr>

## **Android Manifest.xml file**

> XML Code:
``` xml
<?xml version="1.0" encoding="utf-8"?>  
<manifest xmlns:android="http://schemas.android.com/apk/res/android"  
    package="com.popupmenu"  
    android:versionCode="1"  
    android:versionName="1.0" >  
   
    <uses-sdk  
        android:minSdkVersion="7"  
        android:targetSdkVersion="16" />  
   
    <application  
        android:allowBackup="true"  
        android:icon="@drawable/ic_launcher"  
        android:label="@string/app_name"  
        android:theme="@style/AppTheme" >  
        <activity  
            android:name="com.popupmenu.MainActivity"  
            android:label="@string/app_name" >  
            <intent-filter>  
                <action android:name="android.intent.action.MAIN" />  
   
                <category android:name="android.intent.category.LAUNCHER" />  
            </intent-filter>  
        </activity>  
    </application>  
   
</manifest>
 ```


## <hr >Step 5 </hr>

### *Popup menu* 

![popup](https://csharpcorner-mindcrackerinc.netdna-ssl.com/UploadFile/1e5156/popup-menu-in-android-using-android-studio/Images/Clipboard06.jpg)
![menu](https://csharpcorner-mindcrackerinc.netdna-ssl.com/UploadFile/1e5156/popup-menu-in-android-using-android-studio/Images/Clipboard02.jpg)
