# Popup Menu in Android

Android Popup Menu displays the menu below the anchor text if space is available otherwise above the anchor text. It disappears if you click outside the popup menu.

The android.widget.PopupMenu is the direct subclass of java.lang.Object class.

Android Popup Menu displays a list of items in a vertical list which presents to the view that invoked the menu and useful to provide an overflow of actions that related to specific content.

## Custom popup menu in xml code

In this, we are going to make a popup menu anchored to a Button and on click, the popup menu will appear, and on a touch of the popup menu items, 
the text "Hello World" will change. A sample GIF is given below to get an idea about what we are going to do. 

#### Steps invloved will be

1. Create popup menu using menu.xml
2. Show popup menu onClick
3. Handle popup menu item clicks

#### Step 1: Create menu.xml 

```xml
<?xml version="1.0" encoding="utf-8"?>
<menu xmlns:android="http://schemas.android.com/apk/res/android">
<!--  add menu items to show in popup-->
 <item android:id="@+id/menu_copy"
     android:title="Copy"/>

    <item android:id="@+id/menu_paste"
        android:title="Paste"/>

    <item android:id="@+id/menu_save"
        android:title="Save"/>

    <item android:id="@+id/menu_share"
        android:title="Share"/>

    <item android:id="@+id/menu_delete"
        android:title="Delete"/>

</menu>
```

#### Step 2: UI design of button and textView

```xml
<?xml version="1.0" encoding="utf-8"?>
<LinearLayout xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    xmlns:tools="http://schemas.android.com/tools"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    android:orientation="vertical"
    android:gravity="center"
    tools:context=".MainActivity">

    <TextView
        android:id="@+id/text"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:text="Hello World!"
        android:textStyle="bold"
        android:textSize="22sp"
        android:textColor="#000000"
        />
    <!--     when button is clicked menu will popup-->
    <Button
        android:id="@+id/button"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:layout_margin="22sp"
        android:paddingLeft="24dp"
        android:paddingTop="8dp"
        android:paddingRight="24dp"
        android:paddingBottom="8dp"
        android:text="Show Popup Menu"
        android:textAllCaps="false"
        android:textSize="18sp" />
</LinearLayout>
```

#### Step 3: Write Java code

```java
package com.example.popupmenu;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.MenuItem;
import android.view.View;
import android.widget.Button;
import android.widget.PopupMenu;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {
    TextView text;
    Button button;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        text = findViewById(R.id.text);
        button = findViewById(R.id.button);

        // init popup menu
        PopupMenu popupMenu = new PopupMenu(
                this, // context
                button // where to click to show popup menu
        );
        // add menu.xml to our popup menu
        popupMenu.getMenuInflater().inflate(R.menu.pop_menu, popupMenu.getMenu());

        // handle popup menu item clicks
        popupMenu.setOnMenuItemClickListener(new PopupMenu.OnMenuItemClickListener() {
            @Override
            public boolean onMenuItemClick(MenuItem menuItem) {
                // get id of the menu item clicked
                int id = menuItem.getItemId();
                // handle clicks
                if (id == R.id.menu_copy){
                    // copy clicked
                    text.setText("Copy is clicked..");
                }
                else if (id == R.id.menu_delete){
                    // delete clicked
                    text.setText("Delete is clicked..");
                } else if (id == R.id.menu_paste){
                    // paste clicked
                    text.setText("Paste is clicked..");
                } else if (id == R.id.menu_save){
                    // save clicked
                    text.setText("Save is clicked..");
                } else if (id == R.id.menu_share){
                    // share clicked
                    text.setText("Share is clicked..");
                }
                return false;
            }
        });

        // handle button click to show menu
        button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                popupMenu.show();
            }
        });
    }
}
```

#### Result: Run the AVD and get the output

<p align="center" width="50%"><img src="https://user-images.githubusercontent.com/80222700/137640785-5e4a6242-99ee-4d89-928c-35e7e26ae4e2.gif"></p>

## Custom popup menu in Java code

#### Steps invloved will be

1. Create popup menu using java code
2. Show popup menu onClick
3. Handle popup menu item clicks

#### Step 1: UI design of button and textView

```xml
<?xml version="1.0" encoding="utf-8"?>
<LinearLayout xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    xmlns:tools="http://schemas.android.com/tools"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    android:orientation="vertical"
    android:gravity="center"
    tools:context=".MainActivity">

    <TextView
        android:id="@+id/text"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:text="Hello World!"
        android:textStyle="bold"
        android:textSize="22sp"
        android:textColor="#000000"
        />
    <!--     when button is clicked menu will popup-->
    <Button
        android:id="@+id/button"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:layout_margin="22sp"
        android:paddingLeft="24dp"
        android:paddingTop="8dp"
        android:paddingRight="24dp"
        android:paddingBottom="8dp"
        android:text="Show Popup Menu"
        android:textAllCaps="false"
        android:textSize="18sp" />
</LinearLayout>
```

#### Step 2: Write Java Code of menu items list

```java
package com.example.popupmenu;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.widget.Button;
import android.widget.PopupMenu;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {
    TextView text;
    Button button;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        text = findViewById(R.id.text);
        button = findViewById(R.id.button);

        // init popup menu
        PopupMenu popupMenu = new PopupMenu(
                this, // context
                button // where to click to show popup menu
        );
        // add menu items in popup menu
        popupMenu.getMenu().add(Menu.NONE, 0, 0, "Copy"); // parameter 2 is menu id, parameter 3 is position of this menu item in  menu items list, parameter 4 is title of the menu item
        popupMenu.getMenu().add(Menu.NONE, 1, 1, "Paste");
        popupMenu.getMenu().add(Menu.NONE, 2, 2, "Save");
        popupMenu.getMenu().add(Menu.NONE, 3, 3, "Share");
        popupMenu.getMenu().add(Menu.NONE, 4, 4, "Delete");

        // handle menu item clicks
        popupMenu.setOnMenuItemClickListener(new PopupMenu.OnMenuItemClickListener() {
            @Override
            public boolean onMenuItemClick(MenuItem menuItem) {
                // get id of the menu item clicked
                int id = menuItem.getItemId();
                // handle clicks
                if (id == 0){
                    // copy clicked
                    text.setText("Copy is clicked..");
                }
                else if (id == 4){
                    // delete clicked
                    text.setText("Delete is clicked..");
                } else if (id == 1){
                    // paste clicked
                    text.setText("Paste is clicked..");
                } else if (id == 2){
                    // save clicked
                    text.setText("Save is clicked..");
                } else if (id == 3){
                    // share clicked
                    text.setText("Share is clicked..");
                }
                return false;
            }
        });

        // handle button click, show popup menu
        button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                popupMenu.show();
            }
        });
    }
}
```

#### Result: Run AVD and get Output

Result will be same as popup menu in xml code

<p align="center" width="50%"><img src="https://user-images.githubusercontent.com/80222700/137640785-5e4a6242-99ee-4d89-928c-35e7e26ae4e2.gif"></p>

## Custom popup menu with Icon 

#### Step 1: Write menu.xml code

```xml
<?xml version="1.0" encoding="utf-8"?>
<menu xmlns:android="http://schemas.android.com/apk/res/android">
<!--  add menu items to show in popup-->
 <item android:id="@+id/menu_web"
     android:title="Open Website"
     android:icon="@drawable/ic_baseline_web_24"/>

    <item android:id="@+id/menu_toast"
        android:title="Show Message"
        android:icon="@drawable/ic_baseline_message_24"/>

</menu>
```

#### Step 2: UI Design of menu icon vector and book image

```xml
<?xml version="1.0" encoding="utf-8"?>
<androidx.constraintlayout.widget.ConstraintLayout xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    xmlns:tools="http://schemas.android.com/tools"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    tools:context=".MainActivity">


    <ImageView
        android:id="@+id/menuIcon"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:layout_marginStart="95dp"
        android:layout_marginLeft="95dp"
        android:layout_marginTop="300dp"
        app:layout_constraintStart_toStartOf="@+id/book"
        app:layout_constraintTop_toTopOf="parent"
        app:srcCompat="@drawable/menu_icon"
        tools:ignore="VectorDrawableCompat" />

    <ImageView
        android:id="@+id/book"
        android:layout_width="100dp"
        android:layout_height="100dp"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="@+id/menuIcon"
        app:srcCompat="@drawable/book1" />

</androidx.constraintlayout.widget.ConstraintLayout>
```

#### Step 3: Write Java code to show menu icon and access menu items list

```java
package com.example.popupmenu;

import androidx.annotation.RequiresApi;
import androidx.appcompat.app.AppCompatActivity;
import androidx.appcompat.view.menu.MenuBuilder;
import androidx.appcompat.view.menu.MenuPopupHelper;

import android.annotation.SuppressLint;
import android.content.Intent;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.view.Menu;
import android.view.MenuInflater;
import android.view.MenuItem;
import android.view.View;
import android.widget.Button;
import android.widget.ImageView;
import android.widget.PopupMenu;
import android.widget.TextView;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {
    ImageView menuIcon;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        menuIcon = findViewById(R.id.menuIcon);

        // init popup menu
        PopupMenu popupMenu = new PopupMenu(
                this, // context
                menuIcon // where to click to show popup menu
        );

        // add menu.xml to our popup menu
        popupMenu.getMenuInflater().inflate(R.menu.pop_menu, popupMenu.getMenu());

        // handle menu item clicks
        popupMenu.setOnMenuItemClickListener(new PopupMenu.OnMenuItemClickListener() {
            @Override
            public boolean onMenuItemClick(MenuItem menuItem) {
                // get id of the menu item clicked
                int id = menuItem.getItemId();
                // handle clicks
                if (id == R.id.menu_web){
                    Intent intent = new Intent(Intent.ACTION_VIEW, Uri.parse("https://gwoc.girlscript.tech/"));
                    startActivity(intent);
                }
                else if (id == R.id.menu_toast){
                    Toast.makeText(MainActivity.this, "Show Toast Message", Toast.LENGTH_SHORT).show();
                }
                return false;
            }
        });

        // handle button click to show menu
        menuIcon.setOnClickListener(new View.OnClickListener() {
            @RequiresApi(api = Build.VERSION_CODES.Q)
            @Override
            public void onClick(View view) {
                popupMenu.show();
                popupMenu.setForceShowIcon(true);
            }
        });
    }
}
```

#### Result: Run on AVD and see the output

<p align="center" width="50%"><img src="https://user-images.githubusercontent.com/80222700/137643714-1b1195ad-c02f-4df2-9f84-21cf0e27eda0.gif"></p>
