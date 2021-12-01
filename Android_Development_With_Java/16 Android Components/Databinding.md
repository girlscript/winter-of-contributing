# DataBinding in Android
Databinding is one of the Android Architectural Components that is used to bind the UI with the logic allowing the UI values to update automatically without manual intervention.

## Enable DataBinding 
To enable DataBinding, we add the following code in the app `build.gradle` file.
```java
android {
    ...
    buildFeatures {
        dataBinding true
    }
}
```
## Starting with DataBinding
Suppose we have a POJO Class containing the Student's details. In general we usually set the text of textview using `setText()` method. But instead of manually calling setText for each property, DataBinding allows us to bind the values automatically.

> POJO Class
```java
public class Students {
    String name;
    String admissionNo;

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getAdmissionNo() {
        return admissionNo;
    }

    public void setAdmissionNo(String admissionNo) {
        this.admissionNo = admissionNo;
    }
}
```

#### To enable DataBinding in a layout, the root element should start with `<layout>` tag. Along with it, `<data>` and `<variable>` tags are used.

Below is the structure of data-binding layout.
  
 ```xml
  <layout ...>
 
    <data>
         
        <variable
            name="..."
            type="..." />
    </data>
 
    <LinearLayout ...>
       <!-- YOUR LAYOUT HERE -->
    </LinearLayout>
</layout>
```

* The layout should have `<layout>` as root element. Inside `<layout>` the usual code of layout will be placed.
* A `<data>` tag follows the `<layout>`. All the binding variables and methods should go inside `<data>` tag.
* Inside `<data>` tags, a variable will be declared using `<variable>` tag. The `<variable>` tag takes two attributes `name` and `type`
(name attribute will be alias name and type should be of object model class,i.e., the POJO Class.)
* To bind a value, `@` annotation should be used. In the below layout, student name and admissionNo are bound to TextView using `@{user.name}` and `@{user.admissionNo}`

### We will now create a layout and display the name and Admission No. of the Student.
```xml
<?xml version="1.0" encoding="utf-8"?>
<layout xmlns:android="http://schemas.android.com/apk/res/android">

    <data>

        <variable
            name="student"
            type="com.example.gwoc.Students" /> <!-- Model Class Package Location-->
    </data>

    <!-- layout-->
    <RelativeLayout xmlns:app="http://schemas.android.com/apk/res-auto"
        xmlns:tools="http://schemas.android.com/tools"
        android:layout_width="match_parent"
        android:layout_height="match_parent"
        tools:context=".MainActivity">

        <TextView
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:layout_alignParentTop="true"
            android:layout_margin="8dp"
            android:gravity="center"
            android:padding="4dp"
            android:text="Student Details"
            android:textAllCaps="true"
            android:textColor="#4B3180"
            android:textSize="30sp"
            android:textStyle="bold" />

        <TextView
            android:id="@+id/name"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:layout_above="@id/admNo"
            android:layout_centerInParent="true"
            android:layout_margin="8dp"
            android:gravity="center"
            android:padding="4dp"

            android:text="@{student.name}"

            android:textColor="#0D28CA"
            android:textSize="24sp" />

        <TextView
            android:id="@+id/admNo"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:layout_centerInParent="true"
            android:layout_margin="8dp"
            android:gravity="center"
            android:padding="4dp"

            android:text="@{student.admissionNo}"

            android:textColor="#0D28CA"
            android:textSize="24sp" />


    </RelativeLayout>
</layout>
```

The below code shows how layouts are binded using the Binding Classes.
> MainActivity.java
```java
import androidx.appcompat.app.AppCompatActivity;
import androidx.databinding.DataBindingUtil;

import android.os.Bundle;

import com.example.gwoc.databinding.ActivityMainBinding;

public class MainActivity extends AppCompatActivity {
    private Students students;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        //Binding Classes are automatically generated for each activity.
        ActivityMainBinding binding= DataBindingUtil.setContentView(this,R.layout.activity_main); //binding the layout

        //binding the Students object to the layout
        students=new Students();
        students.setName("Girlscript");
        students.setAdmissionNo("ABC123");

        binding.setStudent(students);

    }
}
```

Below is the output of the Code
<p align="center">
    <img src="https://user-images.githubusercontent.com/79036525/143532825-32b58888-a3cc-4dbd-bc53-c51f49879cdc.png">
</p>
