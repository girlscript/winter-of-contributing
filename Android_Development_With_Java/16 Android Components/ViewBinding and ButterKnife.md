# View Binding in Android Studio
To declare the various views in the xml, we usually use the `findViewById()` method.
```java
Button button=findViewById(R.id.button);
```
But this is not a good practice as it often returns a `NullPointerException`. 

To replace this findViewById(), we use `ViewBinding`.

As per the Android Developers Documentation,

*View binding is a feature that allows you to more easily write code that interacts with views. Once view binding is enabled in a module, it `generates a binding class for each XML layout file` present in that module. An instance of a binding class contains direct references to all views that have an ID in the corresponding layout.
In most cases, view binding replaces findViewById.*

### To enable View Binding
Add the Following code in the App build.gradle file
```java
android {
    ...
    buildFeatures {
        viewBinding true
    }
}
```
If you want a layout file to be ignored while generating binding classes, add the tools:viewBindingIgnore="true" attribute to the root view of that layout file.

## Binding Class.
Suppose we have the following xml file in our App:

`gwoc.xml`
```xml
<?xml version="1.0" encoding="utf-8"?>
<LinearLayout xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    xmlns:tools="http://schemas.android.com/tools"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    android:gravity="center"
    android:orientation="vertical">

    <ImageView
        android:id="@+id/image_view"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content" />

    <TextView
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:text="TextView" />

    <Button
        android:id="@+id/_button"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:text="Button" />
</LinearLayout>
```

For this xml layout, the Binding Class `GwocBinding` will be generated automatically. This class will have two fields: an ImageView called image_view and a Button called button. The TextView in the layout has no ID, so there is no reference to it in the binding class.

## Using ViewBinding in Activities
Let's create an Activity named `BindingActivity`.

Let us design a demo design for the `activity_binding.xml`
```xml
<?xml version="1.0" encoding="utf-8"?>
<LinearLayout xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    xmlns:tools="http://schemas.android.com/tools"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    android:gravity="center"
    android:orientation="vertical"
    tools:context=".BindingActivity">

    <TextView
        android:id="@+id/heading"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:layout_marginTop="36dp"
        android:text="Android Development With Java"
        android:textColor="@android:color/holo_blue_dark"
        android:textSize="28dp"/>


    <ImageView
        android:id="@+id/img"
        android:layout_width="120dp"
        android:layout_height="106dp"
        app:srcCompat="@drawable/gwoc" />

    <Button
        android:id="@+id/click_me"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:text="Click Me"
        android:textAllCaps="false"
        android:textColor="@android:color/white"
        android:textSize="20dp"
        android:textStyle="normal" />

</LinearLayout>
```

The generated Binding Class is ActivityBindingBinding. 

### Step 1: Make an Instance of the binding class
```java
ActivityBindingBinding binding;
```

### Step 2: Call the static inflate() method included in the generated binding class. This creates an instance of the binding class for the activity to use.
```java
binding = ActivityBindingBinding.inflate(getLayoutInflater());
```

### Step 3: Set the Content View
```java
setContentView(binding.getRoot());
```

`BindingActivity`
```java
import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;

import com.example.gwoc.databinding.ActivityBindingBinding;

public class BindingActivity extends AppCompatActivity {
    ActivityBindingBinding binding;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        binding = ActivityBindingBinding.inflate(getLayoutInflater());
        setContentView(binding.getRoot());
    }
}
```











# Working with ButterKnife ViewBinding Library
Android ButterKnife library is a view injection library which is uses `annotations` to inject views into android activity / fragments. 

For example, `@BindView` annotation is used to type cast the view element.

## ButterKnife Dependency
To implement ButterKnife Library in our app, we need to add the following dependencies in the `app/build.gradle` file.
```java
dependencies {
    ...
    compile 'com.jakewharton:butterknife:8.8.1'
    annotationProcessor 'com.jakewharton:butterknife-compiler:8.8.1'
}
```
After that sync the project.

## Use of `@BindView` and `@OnClick` annotations.
To understand the use of these two we will first create a simple layout containing one textview and one button.
```xml
<?xml version="1.0" encoding="utf-8"?>
<LinearLayout xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    xmlns:tools="http://schemas.android.com/tools"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    android:gravity="center_horizontal"
    android:orientation="vertical">

    <TextView
        android:id="@+id/lbl_title"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:text="Enter your email"
        android:textAllCaps="true" 
        android:textColor="@color/black"
        android:textSize="24dp"/>

    <EditText
        android:id="@+id/input_name"
        android:layout_width="match_parent"
        android:layout_height="wrap_content" 
        android:hint="Email"
        android:gravity="center"/>

    <Button
        android:id="@+id/btn_enter"
        android:layout_width="match_parent"
        android:layout_height="wrap_content"
        android:layout_marginTop="20dp"
        android:backgroundTint="@android:color/holo_blue_light"
        android:text="Enter"
        android:textColor="@color/black" />
</LinearLayout>
```

<p align="center">
    <img src="https://user-images.githubusercontent.com/79036525/142139843-7885e1fc-cb22-4482-aace-0b518617e772.png">
</p>


To make the views available in the activity, we need to follow the below steps.

1. Use @BindView along with the id (R.id.lbl_title) of the view while declaring the view variable.
2. Call ButterKnife.bind(this) in onCreate() method after setContentView() is called.

```java
public class MainActivity extends AppCompatActivity {
 
    @BindView(R.id.lbl_title)
    TextView lblTitle;
 
    @BindView(R.id.input_name)
    EditText inputName;
 
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
 
        // bind the view using butterknife
        ButterKnife.bind(this);
    }
 
    @OnClick(R.id.btn_enter)
    public void onButtonClick(View view) {
        Toast.makeText(getApplicationContext(), "You have entered: " + inputName.getText().toString(),
                Toast.LENGTH_SHORT).show();
    }
}
```

## Use of Butterknife in Fragments
Using view injection in Fragment is same as Activity except the ButterKnife.bind() method changes. In addition to target parameter, we need to pass inflated view as param.
You will also have to use Unbinder to unbind the view in onDestroyView() because of the Life cycle methods of Fragment.
```java
public class MyFragment extends Fragment {
 
    Unbinder unbinder;
 
    @BindView(R.id.lbl_name)
    TextView lblName;
 
    @BindView(R.id.btn_enter)
    Button btnEnter;
 
    @BindView(R.id.input_name)
    EditText inputName;
 
    public MyFragment() {
        // Required empty public constructor
    }
 
    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
 
    }
 
    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container,
                             Bundle savedInstanceState) {
        // Inflate the layout for this fragment
        View view = inflater.inflate(R.layout.fragment_my, container, false);
 
        // bind view using butter knife
        unbinder = ButterKnife.bind(this, view);
 
        return view;
    }
 
    @Override
    public void onDestroyView() {
        super.onDestroyView();
 
        // unbind the view to free some memory
        unbinder.unbind();
    }
}
```

Apart from view binding, butterknife also provides other useful features like binding strings, dimens, drawables and click events.
