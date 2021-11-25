# **Alert Dialog Box**

## Introduction

 Sometimes in your application, if you wanted to ask the user about taking a decision between yes or no in response of any particular action taken by the user, by remaining in the same activity and without changing the screen, you can use __Alert Dialog__.
<br>

 Android AlertDialog is composed of three regions: __title, content area and action buttons__. Android AlertDialog is the subclass of Dialog class.
<br>

![android-alertdialog](https://user-images.githubusercontent.com/68474842/142722169-5f5eb06d-690b-49ec-a0b0-d962ec02ded3.png)



 In order to make an alert dialog, you need to make an object of __AlertDialogBuilder__ which an inner class of __AlertDialog__.
 Its syntax is given below:
``` java
AlertDialog.Builder alertDialogBuilder = new AlertDialog.Builder(this);

```

 Now you have to set the positive (yes) or negative (no) button using the object of the AlertDialogBuilder class. Its syntax is-
``` java
alertDialogBuilder.setPositiveButton(CharSequence text, 
DialogInterface.OnClickListener listener)

alertDialogBuilder.setNegativeButton(CharSequence text, 
DialogInterface.OnClickListener listener)
```

# __Functions provided by the builder class__

Apart from this, you can use other functions provided by the builder class to customize the alert dialog. These are listed below:

<br>

| Sr  no. |  Method type & description |
| ------ | ------------- |
| 1      | setIcon(Drawable icon)This method set the icon of the alert dialog box.|
| 2      | setCancelable(boolean cancelable)This method sets the property that the dialog can be cancelled or not.  |
| 3      | setMessage(CharSequence message)This method sets the message to be displayed in the alert dialog.|
|4       |setMultiChoiceItems(CharSequence[] items, boolean[] checkedItems,DialogInterface.OnMultiChoiceClickListenerlistener)This method sets list of items to be displayed in the dialog as the content. The selected option will be notified by the listener.|
| 5      | setOnCancelListener(DialogInterface.OnCancelListener onCancelListener)This method Sets the callback that will be called if the dialog is canceled.|
| 6      | setTitle(CharSequence title)This method sets the title that will appear in the dialog.|

<br> 

<br>

 After creating and setting the dialog builder, you will create an alert dialog by calling the create() method of the builder class. Its syntax is:
``` java
AlertDialog alertDialog = alertDialogBuilder.create();
alertDialog.show();
```
 This will create the alert dialog and will show it on the screen.
<br>

# __Example__

 Let's see a simple example of android alert dialog.
<br>

__activity_main.xml__

 You can have multiple components, here we are having only a textview.

```
<?xml version="1.0" encoding="utf-8"?>  
<android.support.constraint.ConstraintLayout xmlns:android="http://schemas.android.com/apk/res/android" 
xmlns:app="http://schemas.android.com/apk res-auto"  
xmlns:tools="http://schemas.android.com/tools" 

android:layout_width="match_parent"  
android:layout_height="match_parent"  tools:context="example.javatpoint.com. alertdialog.MainActivity">  
  
    <Button  
        android:layout_width="wrap_content"  
        android:layout_height="wrap_content"  
        android:id="@+id/button"  
        android:text="Closeapp"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintLeft_toLeftOf="parent"
        app:layout_constraintRight_toRightOf="parent"  
        app:layout_constraintTop_toTopOf="parent" />  
  
</android.support.constraint.ConstraintLayout>  

```

### __strings.xml__

 Optionally, you can store the dialog message and title in the strings.xml file.

``` java
<resources>  
    <string name="app_name">AlertDialog</string>  
    <string name="dialog_message">Welcome to Alert Dialog</string>  
    <string name="dialog_title">Javatpoint Alert Dialog</string>  
</resources>  
```

### __Activity class__

### Let's write the code to create and show the AlertDialog.

File: MainActivity.java

``` java 
package example.javatpoint.com.alertdialog;  
  
import android.content.DialogInterface;  
import android.support.v7.app.AppCompatActivity;  
import android.os.Bundle;  
import android.view.View;  
import android.widget.Button;  
import android.app.AlertDialog;  
import android.widget.Toast;  
  
public class MainActivity extends AppCompatActivity {  
    Button closeButton;  
    AlertDialog.Builder builder;  
    @Override  
    protected void onCreate(Bundle savedInstanceState) {  
        super.onCreate(savedInstanceState);  
        setContentView(R.layout.activity_main);  
  
        closeButton = (Button) findViewById(R.id.button);  
        builder = new AlertDialog.Builder(this);  
        closeButton.setOnClickListener(new View.OnClickListener() {  
            @Override  
            public void onClick(View v) {  
  
                //Uncomment the below code to Set the message and title from the strings.xml file  
                builder.setMessage(R.string.dialog_message) .setTitle(R.string.dialog_title);  
  
                //Setting message manually and performing action on button click  
                builder.setMessage("Do you want to close this application ?")  
                        .setCancelable(false)  
                        .setPositiveButton("Yes", new DialogInterface.OnClickListener() {  
                            public void onClick(DialogInterface dialog, int id) {  
                                finish();  
                                Toast.makeText(getApplicationContext(),"you choose yes action for alertbox",  
                                Toast.LENGTH_SHORT).show();  
                            }  
                        })  
                        .setNegativeButton("No", new DialogInterface.OnClickListener() {  
                            public void onClick(DialogInterface dialog, int id) {  
                                //  Action for 'NO' Button  
                                dialog.cancel();  
                                Toast.makeText(getApplicationContext(),"you choose no action for alertbox",  
                                Toast.LENGTH_SHORT).show();  
                            }  
                        });  
                //Creating dialog box  
                AlertDialog alert = builder.create();  
                //Setting the title manually  
                alert.setTitle("AlertDialogExample");  
                alert.show();  
            }  
        });  
    }  
}  
```

# __Output__

![alertdialog1](https://user-images.githubusercontent.com/68474842/142722036-46aa24ad-3d6a-48ac-b137-f724259dae3e.png)


![alertdialog2](https://user-images.githubusercontent.com/68474842/142722119-bc9abe31-dfbe-45f7-9358-7e9e8edf3733.png)


