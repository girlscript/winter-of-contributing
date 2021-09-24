# Constraint Layout
So before diving into Constraint Layout first see what is a View Group. 
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
<hr/>
In the above image:-
<p align = "center">
<img src="https://user-images.githubusercontent.com/59731205/134587750-796e98c7-e363-4405-9492-86ae1e164a6e.gif">
</p>
<hr/>
In the following GIF as you can see , both the views (ImageView and Button) are interconnected to each other.<br/>
Moving the image also moves the button.

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

### We will leran how to implement Constraint Layout
* **Creating Project**
  * Create a new project in Android Studio.
  * Choose **Empty Activity** as your layout and proceed further.
  * Select **Kotlin** as your language
* **Adding Dependency**
  * Navigate to 
