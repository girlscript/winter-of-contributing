# Shared Preferences
Shared Preferences allows activities and applications to keep preferences, in the form of key-value pairs similar to a Map that will persist even when the user closes the application.
Android stores Shared Preferences settings as XML file in `shared_prefs` folder under `DATA/data/application package)` directory. The DATA folder can be obtained by calling `Environment.getDataDirectory()`.

SharedPreferences is application specific, i.e. the data is lost on
performing one of the following options:
* on uninstalling the application
* on clearing the application data (through Settings)

## Usage
The primary purpose of Shared Preferences is to store user-specified configuration details, such as user specific settings, keeping the user logged into the application.
To get access to the preferences, we have three APIs to choose from:
* `getPreferences()`: used from within your Activity, to access activity-specific preferences
* `getSharedPreferences()`: used from within your Activity (or other application Context), to access application-level preferences
* `getDefaultSharedPreferences()`: used on the Preference Manager, to get the shared preferences that work in concert with Android's overall preference framework

### We will create a simple app to demonstrate the working of Shared Preferences.
> XML Layout
```xml
<?xml version="1.0" encoding="utf-8"?>
<androidx.constraintlayout.widget.ConstraintLayout xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    xmlns:tools="http://schemas.android.com/tools"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    tools:context=".MainActivity">

    <EditText
        android:id="@+id/name"
        android:layout_width="match_parent"
        android:layout_height="wrap_content"
        android:layout_marginTop="120dp"
        android:ems="10"
        android:gravity="center"
        android:hint="Name"
        android:textColor="@color/black"
        android:textSize="20sp"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="1.0"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent" />

    <Button
        android:id="@+id/button_save"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:layout_marginTop="108dp"
        android:text="Save Name"
        app:layout_constraintEnd_toStartOf="@+id/button_display"
        app:layout_constraintHorizontal_bias="0.5"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toBottomOf="@+id/name" />

    <Button
        android:id="@+id/button_display"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:layout_marginTop="108dp"
        android:text="Display Name"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.5"
        app:layout_constraintStart_toEndOf="@+id/button_save"
        app:layout_constraintTop_toBottomOf="@+id/name" />

    <TextView
        android:id="@+id/display_name"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:textColor="@color/purple_700"
        android:textSize="24dp"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.498"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toBottomOf="@+id/button_save"
        app:layout_constraintVertical_bias="0.256" />

</androidx.constraintlayout.widget.ConstraintLayout>
```

### To get the Shared Preferences we need to write the following code :
```java
getSharedPreferences (String PREFS_NAME, int mode);
```
* PREFS_NAME is the name of the file
* mode is the operating mode

## Modes
Following are the operating modes applicable:
* `MODE_PRIVATE`: the default mode, where the created file can only be accessed by the calling application
* `MODE_WORLD_READABLE`: Creating world-readable files is very dangerous, and likely to cause security holes in applications
* `MODE_WORLD_WRITEABLE`: Creating world-writable files is very dangerous, and likely to cause security holes in applications
* `MODE_MULTI_PROCESS`: This method will check for modification of preferences even if the Shared Preference instance has already been loaded
* `MODE_APPEND`: This will append the new preferences with the already existing preferences
* `MODE_ENABLE_WRITE_AHEAD_LOGGING`: Database open flag. When it is set, it would enable write ahead logging by default.

> MainActivity.java
```java

import androidx.appcompat.app.AppCompatActivity;

import android.content.Context;
import android.content.SharedPreferences;
import android.os.Bundle;
import android.os.Environment;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        EditText name=findViewById(R.id.name);
        Button button_save=findViewById(R.id.button_save);
        Button button_display=findViewById(R.id.button_display);
        TextView name_text=findViewById(R.id.display_name);


        button_save.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                SharedPreferences sharedPreferences =getSharedPreferences("User_Name", Context.MODE_PRIVATE);
                SharedPreferences.Editor editor= sharedPreferences.edit();
                editor.putString("name",name.getText().toString().trim());
                editor.apply();
                Toast.makeText(getApplicationContext(), "Name Saved!", Toast.LENGTH_SHORT).show();
            }
        });

        button_display.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                SharedPreferences sharedPreferences=getSharedPreferences("User_Name",Context.MODE_PRIVATE);
                String name_user="Hi "+sharedPreferences.getString("name","")+"!";
                name_text.setText(name_user);
            }
        });
    }

    public boolean isExternalStorageWritable()
    {
        String state= Environment.getExternalStorageState();
        return !Environment.MEDIA_MOUNTED.equals(state);
    }
}
```

### The final working of the App is as follows:

<p align="center">
    <img src="https://user-images.githubusercontent.com/79036525/144049567-54cca859-0a22-4907-bd6b-29530bed31ea.png" />
</p>
