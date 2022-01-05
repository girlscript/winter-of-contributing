# BUTTONS IN ANDROID

## What is a button in android studio?

In Android Studio, Button allows users to perform actions and make choices, when they are
clicked, tapped or pressed. Button represents a push button.
A button can consist of text or an icon or both text and an icon, which when clicked let us
know what actions are going to be performed. It is a very common widget in Android and
developers often use it.

Types of buttons in android studio are button, imagebutton, checkbox, switch, chip, radio
button etc

<p align="center" width="100%"><img src="https://user-images.githubusercontent.com/80222700/135630226-97a05bc8-f0d7-4730-8a2d-d5b67bf2a3d2.png"></p>

<p align="center" width="100%"><img src="https://user-images.githubusercontent.com/80222700/135630319-fcb75dd7-0b23-4f14-9f46-6f0dcafa72ea.png" width="500px"></p>

## <p>Xml Code of button</p>

```xml
<?xml version="1.0" encoding="utf-8"?>
<androidx.constraintlayout.widget.ConstraintLayout
    xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    xmlns:tools="http://schemas.android.com/tools"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    tools:context=".MainActivity">
<Button
    android:id="@+id/button"
    android:layout_width="wrap_content"
    android:layout_height="wrap_content"
    android:text="Hello"
    app:layout_constraintBottom_toBottomOf="parent"
    app:layout_constraintEnd_toEndOf="parent"
    app:layout_constraintHorizontal_bias="0.5"
    app:layout_constraintStart_toStartOf="parent"
    app:layout_constraintTop_toTopOf="parent" />
</androidx.constraintlayout.widget.ConstraintLayout>
```

## <p>Xml Attributes</p>

Here are some important attributes to configure a Button in xml layout.\

<p><b>1. id </b>: id is an attribute which uniquely identifies a text Button.</p>
Below is the example code in which we set the id of a Button.

```xml
<Button
    android:id="@+id/button"
    android:layout_width="wrap_content"
    android:layout_height="wrap_content"
    android:text="Hello World"
    android:textColor="#FFFFFF"
    app:backgroundTint="#673AB7"/>
```

<br>

<p><b>2. gravity </b>: The gravity attribute specifies the alignment of the text in the button like left,
right, center, top, bottom, center_vertical, center_horizontal, bottom_start etc.
Here we have used bottom_start gravity.</p>

```xml
<Button
    android:layout_width="wrap_content"
    android:layout_height="wrap_content"
    android:id="@+id/button"
    android:gravity="bottom|start"
    android:text="Hello"
    android:textColor="#FFFFFF"
    app:backgroundTint="#673AB7"/>
```

<p align="center"><img src="https://user-images.githubusercontent.com/80222700/135630672-f3e97e16-d02e-439f-8f58-79a727cc0e9d.png"></p>
<br>

<p><b>3. text </b>: text attribute displays the text of a Button.
We can display text in XML and Java class both.
</p>

```xml
<Button
    android:id="@+id/button"
    android:layout_width="wrap_content"
    android:layout_height="wrap_content"
    android:text=" Android Development"
    android:textAllCaps="false"
    android:textColor="#FFFFFF"
    app:backgroundTint="#673AB7"/>
```

<br>
<p align="center"><img src="https://user-images.githubusercontent.com/80222700/135630870-9b0e8512-2fee-41f7-893d-2baf32552065.png"></p>
<br>

#### Set Text Using Java Class:

<b>In the code below, we have set the text on Button in java class</b>

```xml
Button button = (Button) findViewById(R.id.button);
button.setText("Android Development");//set the text on button
```

<br>
<p><b>4. textColor </b>: textColor attribute displays the color of the text.
</p>

```xml
<Button
    android:id="@+id/button"
    android:layout_width="wrap_content"
    android:layout_height="wrap_content"
    android:text=" Android Development"
    android:textAllCaps="false"
    android:textColor="#00BCD4"
    app:backgroundTint="#673AB7"/>
```

<br>
<p align="center"><img src="https://user-images.githubusercontent.com/80222700/135631132-06b24492-7f9b-418d-acab-3a1dec7409f8.png"></p>
<br>

#### Set Text Color On Button In Java class:

<b>In the code below, we have set the text color on Button in java class</b>

```xml
Button button=(Button) findViewById(R.id.button);
button.setTextColor(Color.BLUE);//set the blue color for the text
```

<br>
<p><b>5. textSize </b>: textSize attribute displays the size of the text on Button. We can display text
in sp (scale independent pixel) and dp (density independent pixel) units.

</p>

```xml
<Button
    android:id="@+id/button"
    android:layout_width="wrap_content"
    android:layout_height="wrap_content"
    android:text=" Android Development"
    android:textAllCaps="false"
    android:textColor="#00BCD4"
    android:textSize="24sp"
    app:backgroundTint="#673AB7"/>
```

<br>
<p align="center"><img src="https://user-images.githubusercontent.com/80222700/135631240-948f479d-40d8-4c5a-92ed-5028619f3133.png"></p>
<br>

#### Set textSize In Java class:

<p><b>In the code below, we have set the text size of buttons in java class.</b></p>

```xml
Button button=(Button)findViewById(R.id.button);
button.setTextSize(24);//set the text size of button
```

<br>
<p><b>6. textStyle </b>:  textStyle attribute displays the style of a text. Some text styles are bold, italic
and normal. To use more than one text style for a Button us "|" operator.
</p>

```xml
<Button
    android:id="@+id/button"
    android:layout_width="wrap_content"
    android:layout_height="wrap_content"
    android:text=" Android Development"
    android:textAllCaps="false"
    android:textColor="#00BCD4"
    android:textSize="24sp"
    android:textStyle="bold|italic"
    app:backgroundTint="#673AB7"/>
```

<br>
<p align="center"><img src="https://user-images.githubusercontent.com/80222700/135633570-dd757612-b993-470a-b9c9-57fe8fe228b7.png"></p>
<br>

<p><b>7. background </b>: background attribute displays the background of a Button. We can
display a color or a drawable in the background of a Button.
</p>

```xml
<Button
    android:id="@+id/button"
    android:layout_width="wrap_content"
    android:layout_height="wrap_content"
    android:text=" Android Development"
    android:textAllCaps="false"
    android:textColor="#00BCD4"
    android:textSize="24sp"
    android:textStyle="bold|italic"
    app:backgroundTint="#E91E63"/>
```

<br>
<p align="center"><img src="https://user-images.githubusercontent.com/80222700/135631337-5df0c0d4-a919-4343-896b-6210ab1025a0.png"></p>
<br>

#### Set background in Button In Java class:

<p><b>In the code below, we have set the background color of buttons in java class.</b></p>

```xml
Button button=(Button)findViewById(R.id.button);
button.setBackgroundColor(Color.PINK);//set the pink color of
button background
```

<br>
<p><b>8. padding </b>:  padding attribute is used to set the padding from left, right, top or bottom.
</p>
<p>In the below example code we have set paddings from all the sides.
</p>

```xml
<Button
    android:id="@+id/button"
    android:layout_width="wrap_content"
    android:layout_height="wrap_content"
    android:paddingLeft="24dp"
    android:paddingTop="14dp"
    android:paddingRight="24dp"
    android:paddingBottom="14dp"
    android:text=" Android Development"
    android:textAllCaps="false"
    android:textColor="#00BCD4"
    android:textSize="24sp"
    android:textStyle="bold|italic"
    app:backgroundTint="#E91E63"/>
```

<br>
<p align="center"><img src="https://user-images.githubusercontent.com/80222700/135631449-c51a1c1c-0169-4092-87c3-b0fac747b899.png"></p>
<br>

## Making buttons attractive

## Round button

<b>In XML Layout</b>

```xml
<Button
    android:id="@+id/button"
    android:layout_width="wrap_content"
    android:layout_height="wrap_content"
    android:text="Hello"
    app:cornerRadius="20dp"
    app:layout_constraintBottom_toBottomOf="parent"
    app:layout_constraintEnd_toEndOf="parent"
    app:layout_constraintHorizontal_bias="0.5"
    app:layout_constraintStart_toStartOf="parent"
    app:layout_constraintTop_toTopOf="parent"
    app:layout_constraintVertical_bias="0.499" />
```

<p align="center"><img src="https://user-images.githubusercontent.com/80222700/135631578-fd5c4f88-a835-4181-97e2-e98f9f4f2239.png"></p>
<br>

## Gradient button

Making gradient colors is fun. Because they look just like magic when one color changes to another.

First make a drawable file. Name it gradientbutton.xml.
<br>

<p align="center"><img src="https://user-images.githubusercontent.com/80222700/135633773-29c66981-b33f-4aec-acbe-ab22a98600ec.png" width="400px"></p>

<b>In drawable file:</b> \
 <br>
We need gradient, shape and corners. For gradient we have used two color values, startColor and endColor. Set the corner radius.

```xml
<?xml version="1.0" encoding="utf-8"?>
<shape xmlns:android="http://schemas.android.com/apk/res/ndroid">
    <gradient
        android:startColor="@color/design_default_color_primary"
        android:endColor="@color/teal_200"
    />
    <corners
        android:radius="80dp"
    />
</shape>
```

<b>In XML Layout</b>

```xml
<Button
    android:id="@+id/button"
    android:layout_width="wrap_content"
    android:layout_height="wrap_content"
    android:onClick="openButton"
    android:paddingLeft="24dp"
    android:paddingTop="14dp"
    android:paddingRight="24dp"
    android:paddingBottom="14dp"
    android:text=" Android Development"
    android:textAllCaps="false"
    android:textColor="#ffffff"
    android:textSize="24sp"
    android:textStyle="bold|italic"
    app:backgroundTint="@drawable/gradientbutton"
    android:background="@drawable/gradientbutton"/>
```

<br>
<p align="center"><img src="https://user-images.githubusercontent.com/80222700/135634022-9ad86ff0-dd26-4ea4-8d50-4004be87f2b2.png" width="400px"></p>
<br>

## Outlined buttons: 
 
 Make a drawable file. Name it borderbutton.xml. <br>
 We need a selector, item, shape for this. <br>
 Set shape to rectangle, solid with color, stroke with width and color.
<br>
<br>
<p><b>In drawable file:</b></p>

```xml
<?xml version="1.0" encoding="utf-8"?>
    <selector xmlns:android="http://schemas.android.com/apk/res/android">
        <item>
            <shape xmlns:android="http://schemas.android.com/apk/res/android" android:shape="rectangle">
                <solid android:color="@color/purple_200"/>
                    <stroke android:width="5px" android:color="@color/black"/>
            </shape>
        </item>
    </selector>
```

<b>In XML Layout</b>

```xml
<Button
    android:id="@+id/button"
    android:layout_width="wrap_content"
    android:layout_height="wrap_content"
    android:onClick="openButton"
    android:paddingLeft="24dp"
    android:paddingTop="14dp"
    android:paddingRight="24dp"
    android:paddingBottom="14dp"
    android:text=" Android Development"
    android:textAllCaps="false"
    android:textColor="#ffffff"
    android:textSize="24dp"
    android:textStyle="bold|italic"
    app:backgroundTint="@drawable/gradientbutton"
    android:background="@drawable/borderbutton"
    app:cornerRadius="80dp"/>
```

<br>
<p align="center"><img src="https://user-images.githubusercontent.com/80222700/135631690-d16fefe9-f1dd-4dd6-8f6b-a39893ddc809.png" width="400px"></p>
<br>

## Contained button

Note The contained button is the default style in android studio

<p align="center"><img src="https://user-images.githubusercontent.com/80222700/135634145-f70b6c0c-4657-464d-8d62-ca89bf8f5f12.png" width="400px"></p>
<br>

In xml Layout

```xml
<Button
    android:id="@+id/button"
    android:layout_width="wrap_content"
    android:layout_height="wrap_content"
    android:text="Contained Button"
    android:textColor="#FFFFFF"
    app:backgroundTint="#673AB7"
    app:layout_constraintBottom_toBottomOf="parent"
    app:layout_constraintEnd_toEndOf="parent"
    app:layout_constraintHorizontal_bias="0.5"
    app:layout_constraintStart_toStartOf="parent"
    app:layout_constraintTop_toTopOf="parent" />
```

## Buttons with icon and text:

Lots of designs for buttons in Android use icons and text for buttons.<br>
To create these types of buttons we use some attributes. The attribute drawableBottom is the drawable to be drawn below the text. <br>
Similarly drawableRight for right of the text. <br>
Letâ€™s see how to add an icon to a button at the start of the text, at bottom, at end and at top
of the text. <br>
We have taken the default Android icon from the drawable resource manager
<br>

<p align="center"><img src="https://user-images.githubusercontent.com/80222700/135631767-c71fed31-7001-4c3a-8156-47c6e0e5f93f.png"> </p>

<p><b>XML Code for icon below the text.</b></p>

```xml
<Button
    android:id="@+id/button"
    android:layout_width="wrap_content"
    android:layout_height="wrap_content"
    android:onClick="openButton"
    android:paddingLeft="24dp"
    android:paddingTop="14dp"
    android:paddingRight="24dp"
    android:paddingBottom="14dp"
    android:text=" Android Development"
    android:textAllCaps="false"
    android:textColor="#ffffff"
    android:textSize="24dp"
    android:textStyle="bold|italic"
    app:backgroundTint="@drawable/gradientbutton"
    android:background="@drawable/gradientbutton"
    android:drawableBottom="@drawable/ic_launcher_foreground"/>
```

<p align="center"><img src="https://user-images.githubusercontent.com/80222700/135631946-49fbf4fc-21f3-45ed-872a-9e748c06ad1f.png"> </p>
<br>

#### For icon at top of the text

```xml
android:drawableTop="@drawable/ic_launcher_foreground"
```
<p align="center"><img src="https://user-images.githubusercontent.com/80222700/135632055-fd7c5105-879f-4f73-a783-7899386a69bd.png"> </p>
<br>

#### For icon at top of the text

```xml
android:drawableTop="@drawable/ic_launcher_foreground"
```
<p align="center"><img src="https://user-images.githubusercontent.com/80222700/135632407-826a2593-0451-4d79-a730-40259dc5bd4c.png"> </p>
<br>

#### For icon at the start of text

```xml
android:drawableLeft="@drawable/ic_launcher_foreground"
```
<br>

<p align="center"><img src="https://user-images.githubusercontent.com/80222700/135632515-89daba48-a8b7-4e43-a8cb-ecc940f4142e.png"> </p>
<br>

### ANATOMY FOR OUTLINED BUTTON WITH TEXT AND ICON

It has a text label, a stroked container and an optional icon.

<p align="center"><img src="https://user-images.githubusercontent.com/80222700/135632698-5c71f908-41d1-46e6-9472-108347f3f830.png"> </p>

<br>
   1. Text label<br>
   2. Container<br>
   3. icon <br>

### ANATOMY FOR CONTAINED BUTTON WITH TEXT AND ICON

<br>
<p align="center"><img src="https://user-images.githubusercontent.com/80222700/135632837-e62ff36e-5b7e-459a-b274-cb1ef0901a86.png"> </p>
<br>

<br>
   1. Text label<br>
   2. Container<br>
   3. icon <br>

## Circle button

To make a circle button, we need a new drawable. Name it circle.xml.<br>
We need a selector, item and shape. Use an oval for shape. Take the width and height size
the same to make the button circular. Set the size with the size tag. Also set color with solid
to any color code. Now you can use your drawable for the background attribute of your
button.<br>
<br>

<b>In xml Layout</b>

```xml
<Button
    android:id ="@+id/button"
    android:layout_width="150dp"
    android:layout_height="150dp"
    android:text="Round Button"
    android:background="@drawable/circle"
    android:padding="15dp"/>
```

<b>In drawable file</b>

```xml
<?xml version="1.0" encoding="utf-8"?>
<selector xmlns:android="http://schemas.android.com/apk/res/android">
    <item>
        <shape android:shape="oval">
            <stroke android:color="#1E90FF" android:width="5dp" />
                <solid android:color="#87CEEB"/>
                    <size android:width="150dp" android:height="150dp"/>
        </shape>
    </item>
</selector>
```

<p align="center"><img src="https://user-images.githubusercontent.com/80222700/135632951-0ed22ea7-4a07-4ac7-af92-67210a2e613b.png"> </p>
<br>

## Responding to Click Events

When a user clicks a button, the button receives an on click event.<br>
We add the android:onClick attribute to the button element in XML layout. The value of the
attribute is the name of the method we call in response to a click event. Then the Activity
hosting the layout, implements the method.<br>
Here is an example for this:

### In xml layout setting onclick
<br>

```xml
<Button
    android:id="@+id/button"
    android:layout_width="wrap_content"
    android:layout_height="wrap_content"
    android:onClick="openButton"
    android:paddingLeft="24dp"
    android:paddingTop="14dp"
    android:paddingRight="24dp"
    android:paddingBottom="14dp"
    android:text=" Android Development"
    android:textAllCaps="false"
    android:textColor="#00BCD4"
    android:textSize="24sp"
    android:textStyle="bold|italic"
    app:backgroundTint="#E91E63"
    app:layout_constraintBottom_toBottomOf="parent"
    app:layout_constraintEnd_toEndOf="parent"
    app:layout_constraintHorizontal_bias="0.5"
    app:layout_constraintStart_toStartOf="parent"
    app:layout_constraintTop_toTopOf="parent" />
```

### In java code making a toast 

Here using the openButton() method on the button and using Toast we will display which button is clicked by the user.

```xml
public class MainActivity extends AppCompatActivity {
Button button;
@Override
protected void onCreate(Bundle savedInstanceState) {
super.onCreate(savedInstanceState);
setContentView(R.layout.activity_main);
button = findViewById(R.id.button); //get id of button
}
public void openButton(View v){
Toast.makeText(this, "Learn Android Development",
Toast.LENGTH_SHORT).show();
}
}
```

 ### Result:

 Now start the AVD in Emulator and run the app. There is a button. Click on it and you will see a message on screen when the button is clicked.

<br>
<p align="center"><img src="https://user-images.githubusercontent.com/80222700/135629744-686969b9-6dd3-4d3c-a5bb-7fee58eaa140.png"> </p>
<br>

## References:

<a>https://developer.android.com/reference/android/widget/Button</a><br>

<a>https://developer.android.com/guide/topics/ui/controls/button</a><br>

<a>https://material.io/components/buttons/android</a>
