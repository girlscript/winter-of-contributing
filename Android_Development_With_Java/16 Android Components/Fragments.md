# __Fragments__

## __Introduction__

A Fragment is a piece of an application's user interface or behavior that can be 
placed in an Activity which enable more modular activity design. It will not be wrong if we say, a fragment is a kind of sub-activity. 
<br>
Following are the 
important points about fragment:

- A fragment has its own layout and its own behavior with its own lifecycle 
callbacks.

- You can add or remove fragments in an activity while the activity is running.

- You can combine multiple fragments in a single activity to build a multipane UI.

- A fragment can be used in multiple activities.

- Fragment life cycle is closely related to the lifecycle of its host activity which means when the activity is paused, all the fragments available in the activity will also be stopped.

- A fragment can implement a behavior that has no user interface component.

## __Creating a Fragment__

You create fragments by extending __Fragment__ class and you can insert a fragment into your activity layout by declaring the fragment in the activity's 
layout file, as a __fragment tag__  element.

## __Fragment Lifecycle__

Android fragments have their own life cycle very similar to an android activity. 

<img width="309" alt="lifecycel" src="https://user-images.githubusercontent.com/68474842/143529277-1411c9df-9574-4956-b7d4-de2a6cf87623.PNG">

<br>
</br>

## Fragment Lifecycle Methods


|Sr no.| Method | Description |
|----- | ------ | ---------------- |
|1.|onAttach(Activity)|it is called only once when it is attached with activity.|
|2.|onCreate(Bundle)|It is used to initialize the fragment.|
|3.|onCreateView(LayoutInflater, ViewGroup, Bundle)|creates and returns view hierarchy.|
|4.|onActivityCreated(Bundle)|It is invoked after the completion of onCreate() method.|
|5.|onViewStateRestored(Bundle)|It provides information to the fragment that all the saved state of fragment view hierarchy has been restored.|
|6.|onStart()|makes the fragment visible.|
|7.|onResume()|makes the fragment interactive.|
|8.|onPause()|is called when fragment is no longer interactive.|
|9.|onStop()|is called when fragment is no longer visible.|
|10.|onDestroyView()|allows the fragment to clean up resources.|
|11.|onDestroy()|allows the fragment to do final clean up of fragment state.|
|12.|onDetach()|It is called immediately prior to the fragment no longer being associated with its activity.|

<br>

## __How to use Fragments__

This involves number of simple steps to create Fragments.

- First of all decide how many fragments you want to use in an activity. For example, we want to use two fragments to handle landscape and portrait 
modes of the device.
- Next, based on number of fragments, create classes which will extend the Fragment class. The Fragment class has above mentioned callback  functions. You can override any of the functions based on your requirements.
- Corresponding to each fragment, you will need to create layout files in 
XML file. These files will have layout for the defined fragments.
- Finally modify activity file to define the actual logic of replacing fragments based on your requirement.
<br>

Here is the list of important methods which you can override in your fragment class:
- __onCreate()__ The system calls this when creating the fragment. You should initialize essential components of the fragment that you want to retain when the fragment is paused or stopped, then resumed.
- __onCreateView()__ The system calls this callback when it's time for the fragment to draw its user interface for the first time. To draw a UI for your fragment, you must return a View component from this method that is the root of your fragment's layout. You can return null if the fragment 
does not provide a UI.
- __onPause()__ The system calls this method as the first indication that the user is leaving the fragment. This is usually where you should commit any changes that should be persisted beyond the current user session.

<br>

## __Example__

### __activity_main.xml__

``` java
<?xml version="1.0" encoding="utf-8"?>  
<LinearLayout xmlns:android="http://schemas.android.com/apk/res/android"  
    xmlns:app="http://schemas.android.com/apk/res-auto"  
    xmlns:tools="http://schemas.android.com/tools"  
    android:layout_width="fill_parent"  
    android:layout_height="fill_parent"  
    tools:context="example.javatpoint.com.fragmentexample.MainActivity">  
  
    <fragment  
        android:id="@+id/fragment1"  
        android:name="example.javatpoint.com.fragmentexample.Fragment1"  
        android:layout_width="0px"  
        android:layout_height="match_parent"  
        android:layout_weight="1"  
        />  
  
    <fragment  
        android:id="@+id/fragment2"  
        android:name="example.javatpoint.com.fragmentexample.Fragment2"  
        android:layout_width="0px"  
        android:layout_height="match_parent"  
        android:layout_weight="1"  
        />  
  
</LinearLayout>  
```

__fragment_fragment1.xml__

```java
<FrameLayout xmlns:android="http://schemas.android.com/apk/res/android"  
    xmlns:tools="http://schemas.android.com/tools"  
    android:layout_width="match_parent"  
    android:layout_height="match_parent"  
    android:background="#F5F5DC"  
    tools:context="example.javatpoint.com.fragmentexample.Fragment1">  
  
    <!-- TODO: Update blank fragment layout -->  
    <TextView  
        android:layout_width="match_parent"  
        android:layout_height="match_parent"  
        android:text="@string/hello_blank_fragment" /> 
  
</FrameLayout> 
```

__fragment_fragment2.xml__
``` java
<FrameLayout xmlns:android="http://schemas.android.com/apk/res/android"  
    xmlns:tools="http://schemas.android.com/tools"  
    android:layout_width="match_parent"  
    android:layout_height="match_parent"  
    android:background="#F0FFFF"  
    tools:context="example.javatpoint.com.fragmentexample.Fragment2">  
  
    <!-- TODO: Update blank fragment layout -->  
    <TextView  
        android:layout_width="match_parent"  
        android:layout_height="match_parent"  
        android:text="@string/hello_blank_fragment" />  
  
</FrameLayout>  
```

 __MainActivity.java__

``` java
package example.javatpoint.com.fragmentexample;  
  
import android.support.v7.app.AppCompatActivity;  
import android.os.Bundle;  
  
public class MainActivity extends AppCompatActivity {  
  
    @Override  
    protected void onCreate(Bundle savedInstanceState) {  
        super.onCreate(savedInstanceState);  
        setContentView(R.layout.activity_main);  
    }  
}
```

__Fragment1.java__

```java
package example.javatpoint.com.fragmentexample;  
import android.os.Bundle;  
import android.support.v4.app.Fragment;  
import android.view.LayoutInflater;  
import android.view.View;  
import android.view.ViewGroup;  
  
public class Fragment1 extends Fragment {  
  
    @Override  
    public void onCreate(Bundle savedInstanceState) {  
        super.onCreate(savedInstanceState);  
    }  
  
    @Override  
    public View onCreateView(LayoutInflater inflater, ViewGroup container,  
                             Bundle savedInstanceState) {  
        // Inflate the layout for this fragment  
        return inflater.inflate(R.layout.fragment_fragment1, container, false);  
    }  
 }  
 ```

__Fragment2.java__

```java
package example.javatpoint.com.fragmentexample;  
  
import android.os.Bundle;  
import android.support.v4.app.Fragment;  
import android.view.LayoutInflater;  
import android.view.View;  
import android.view.ViewGroup;  
  
public class Fragment2 extends Fragment {  
  
    @Override  
    public void onCreate(Bundle savedInstanceState) {  
        super.onCreate(savedInstanceState);  
    }  
  
    @Override  
    public View onCreateView(LayoutInflater inflater, ViewGroup container,  
                             Bundle savedInstanceState) {  
        // Inflate the layout for this fragment  
        return inflater.inflate(R.layout.fragment_fragment2, container, false);  
    }  
      
}  
```

## __Output__

![fragment](https://user-images.githubusercontent.com/68474842/143533727-9d2a0231-ca77-4967-9cab-10104325bfa0.png)


<br>
