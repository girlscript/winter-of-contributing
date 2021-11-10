# **Android Context Menu**

In android, Context Menu is like a floating menu and that appears when the user performs a long press or click on an element and it 
is useful to implement actions that affect the selected content or context frame.

 The android Context Menu is more like the menu which displayed on right-click in Windows or Linux.

 Following is the pictorial representation of using Context Menu in our android applications.

![context menu](https://static.javatpoint.com/images/androidimages/context2.png)

In android, the Context Menu offers actions that affect a specific item or context frame in the UI and we can provide a context menu 
for any view. The context menu won’t support any item shortcuts and item icons.



## **Steps to create the application:-** 

1. Open Android Studio and create a new Android application and name it as “ContextMenu” 
2. Open an Empty Activity and name it as MainActivity.
3. You will also need to create a menu directory and then create an context_menu.xml file in that directory. To achieve this first 
right click on res, goto new, goto android resource directory, in directory name write menu, select the resource type as menu and 
source set as main, click OK. Now you will have your menu directory created. Then to create the context_menu.xml file, right click 
on menu which you just created, click on new, you should get an option as menu resource file click on that, set filename as context_menu 
source set as main and your directory name as menu, click OK. Now you have successfully created your context_menu.xml file.
4. Copy the contents of res/layout/activity_main.xml and res/menu/context_menu.xml file.
5. Run the application to launch Android emulator or you can run it on your mobile also(which is way faster).
 

 ### *XML File(res/layout/activity_main.xml):*

 <?xml version="1.0" encoding="utf-8"?>
<RelativeLayout xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:tools="http://schemas.android.com/tools"
    android:id="@+id/activity_main"
    android:layout_width="match_parent"
    android:layout_height="match_parent"

    tools:context="codedost.contextmenu.MainActivity">

    <Button
        android:id="@+id/btn"
        android:layout_width="match_parent"
        android:layout_height="wrap_content"
        android:text="Long press me!"
        android:layout_centerVertical="true"
        android:layout_alignParentStart="true" />
</RelativeLayout>


### *XML File(res/menu/context_menu.xml):*

<?xml version="1.0" encoding="utf-8"?>
<menu xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto">

    <item
        android:id="@+id/comp"
        android:title="Computer"
        app:showAsAction="never"/>

    <item
        android:id="@+id/game"
        android:title="Gamepad"
        app:showAsAction="never"/>

    <item
        android:id="@+id/lap"
        android:title="Laptop"
        app:showAsAction="never"/>
</menu>


### *MainActivity.java* 

package codedost.contextmenu;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.ContextMenu;
import android.view.MenuInflater;
import android.view.MenuItem;
import android.view.View;
import android.widget.Button;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {

    private Button cntxtbtn;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        cntxtbtn =(Button) findViewById(R.id.btn);
        //register the cntxtbtn from activity_main.xml file to context menu
        registerForContextMenu(cntxtbtn);
    }

    @Override
    public void onCreateContextMenu(ContextMenu menu, View v, ContextMenu.ContextMenuInfo menuInfo) {
        super.onCreateContextMenu(menu, v, menuInfo);
        menu.setHeaderTitle("Select the Action");
        MenuInflater menuInflater = getMenuInflater();
        menuInflater.inflate(R.menu.menu, menu);

    }

    @Override
    public boolean onContextItemSelected(MenuItem item) {


        switch (item.getItemId()) {
            case R.id.comp:
                //select item computer with id comp from menu.xml file and toast
                Toast.makeText(MainActivity.this, "Computer is Selected", Toast.LENGTH_SHORT).show();

                return true;

            case R.id.game:
                //select item gamepad with id game from menu.xml file and toast
                Toast.makeText(MainActivity.this, "Gamepad is Selected", Toast.LENGTH_SHORT).show();

                return true;

            case R.id.lap:
                //select item laptop with id lap from menu.xml file and toast
                Toast.makeText(MainActivity.this, "Laptop is Selected", Toast.LENGTH_SHORT).show();

                return true;

            default: return super.onContextItemSelected(item);
        }
    }
}



## *Output* 

![context](https://codedost.com/wp-content/uploads/2018/02/pic_10.1-350x600.jpeg)

![menu](https://codedost.com/wp-content/uploads/2018/02/pic_10.2-350x600.jpeg)
