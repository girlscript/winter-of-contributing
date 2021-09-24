
# Constraint Layout

#### So before diving into Constraint Layout first we will see what is a View Group.

<hr/>
<p align="center">
<img src="https://developer.android.com/codelabs/basic-android-kotlin-training-birthday-card-app/img/e4c1f4e455d72c81.png?authuser=1"> 
</p>
<hr/>
When you are making an app there are multiple Views in it, there could be a TextView and an ImageView and etc. <br />
Every View has a relationship with each other, for example:-
  an image may be next to some text, and buttons may form a row. 
  

#### A ViewGroup is a container that View objects can sit in, and is responsible for arranging the Views inside it. <br /><br /> The arrangement, or layout, can change depending on the size and aspect ratio of the screen of the Android device that the app is running on, and the layout can adapt to whether the device is in portrait or landscape mode.

### One kind of ViewGroup is a ConstraintLayout, which helps you arrange the Views inside it in a flexible way.


## Constraints

A constraint is a connection or alignment between two UI elements. Each constraint connects or aligns one view to another view, or to the parent layout.
<hr/>
<p align = "center">
<img src="https://user-images.githubusercontent.com/59731205/134669516-83aeb058-7b3d-45cb-877d-005cf1fd0636.png">
</p>

In the above image:
* B is constrained to stay to the right of A.
* C is constrained to stay below A
<hr/>
<p align = "center">
<img src="https://user-images.githubusercontent.com/59731205/134717994-c0df0140-2009-49f1-b497-13c1230be99c.gif" width= "800" height= "400">
</p>
<hr/>
In the following GIF as you can see , both the views (ImageView and Button) are interconnected to each other.<br/>
Moving the image also moves the button.
<br/><br/>This is the code of the following demonstration.<br/>I would like you to go through this code after doing this tutorial

```
<?xml version="1.0" encoding="utf-8"?>
<androidx.constraintlayout.widget.ConstraintLayout xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    xmlns:tools="http://schemas.android.com/tools"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    tools:context=".MainActivity">

    <Button
        android:id="@+id/button"
        android:layout_width="142dp"
        android:layout_height="86dp"
        android:layout_marginTop="36dp"
        android:text="@string/button_01"
        android:textSize="30sp"
        app:backgroundTint="#F44336"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toBottomOf="@+id/imageView" />

    <ImageView
        android:id="@+id/imageView"
        android:layout_width="267dp"
        android:layout_height="352dp"
        android:layout_marginTop="16dp"
        android:scaleType="fitCenter"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.498"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.407"
        tools:srcCompat="@drawable/dice_1" />

</androidx.constraintlayout.widget.ConstraintLayout>
```

### Now to do so we have to use some Attributes provided in Constraint Layout-:

|   Attributes       | Description     | 
| :------------- | :----------: | 
|  android:id  | This is used to give a unique id to the layout.   | 
|  app:layout_constraintBottom_toBottomOf  | This is used to constrain the view with respect to the bottom position. |
|  app:layout_constraintRight_toRightOf    | This attribute is used to constrain the view with respect to the left position.|
|  app:layout_constraintTop_toTopOf        | This attribute is used to constrain the view with respect to the top position.|
<hr/>
<p align = "center">
<img src="https://user-images.githubusercontent.com/59731205/134665849-ab8d76e7-0c0e-4d45-ba12-a5beac960575.png">
</p>
<hr/>
These attributes are used to connect one side of a View to other side of other View.<br/>
Just like these attributes there are also attributes which we can use to connect two diiferent sides of Views.

#### Now after we have got some idea of what really Constraint Layout is, now we will talk about some of it's Advantages:-

* It helps to improve the UI performance over other layouts.
* ConstraintLayout provides you the ability to completely design your UI with the drag and drop feature provided by the Android Studio design editor.
* With the help of ConstraintLayout, we can control the group of widgets through a single line of code.
* With the help of ConstraintLayout, we can easily add animations to the UI components in our app.
<br/>

Now, according to what we have learnt so far we can design our apps through Drag and Drop feature of Editor and also by coding a XML file for our layout.

### We will learn how to implement Constraint Layout

* **Step 1: Creating Project**
  * Create a new project in Android Studio.
  * Choose **Empty Activity** as your layout and proceed further.
  * Select **Kotlin** as your language
* **Step 2: Adding Dependency**
  * Navigate to the **app > Gradle scripts > build.gradle file** and add the below dependency to it in the dependencies section.
  `implementation 'androidx.constraintlayout:constraintlayout:2.0.4'`
* **Step 3: Working with activity_main.xml file**
  * Navigate to the app > res > layout > activity_main.xml and add the below code to that file. Below is the code for the activity_main.xml file.
  ```
  <?xml version="1.0" encoding="utf-8"?>
  <androidx.constraintlayout.widget.ConstraintLayout
	xmlns:android="http://schemas.android.com/apk/res/android"
	xmlns:app="http://schemas.android.com/apk/res-auto"
	xmlns:tools="http://schemas.android.com/tools"
	android:layout_width="match_parent"
	android:layout_height="match_parent"
	tools:context=".MyActivity">

	<TextView
		android:id="@+id/textView"
		android:layout_width="wrap_content"
		android:layout_height="wrap_content"
		android:layout_marginLeft="8dp"
		android:layout_marginRight="8dp"
		android:gravity="center"
		android:padding="10dp"
		android:text="Your Name"
		android:textColor="@color/black"
		android:textSize="36sp"
    app:layout_constraintTop_toTopOf="parent" />
		app:layout_constraintBottom_toBottomOf="parent"
		app:layout_constraintLeft_toLeftOf="parent"
		app:layout_constraintRight_toRightOf="parent"
  </androidx.constraintlayout.widget.ConstraintLayout>
  ```
  
### I would highly recommend to play with all these values so that you can get an idea about what these things do.

<hr/>
Now run the code and see the result.
<hr/>
<img src="https://user-images.githubusercontent.com/59731205/134682422-f313d32d-c9ad-47cf-8344-4d649174f5a8.gif">
<hr/>
In the above code we have applied four Constraints to the TextView 
<br/>Each constraint is attached to the parent view.


## Author

* [@shubhmittal297](https://github.com/shubhmittal07)
