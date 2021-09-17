#                             **<u>ANDROID-RESOURCES FILE(res)</u>**

<i>In Android, almost everything is a resource. Defining resources that you can then access in your app is an essential part of Android development.</i>

***Resources are used for anything from defining colors, images, layouts, menus, and string values. The value of this is that nothing is hardcoded. Everything is defined in these resource files and then can be referenced within your application's code. The simplest of these resources and the most common is using string resources to allow for flexible, localized text.***

<b>Resource files in Android  is a localized text string, layout definitions , other small piece of non-code information , bitmaps, user interface strings, animation instructions that the app implements within its own code. Resource types are held within resource files and are found in the project resource directory under res/. </b>

 The Android resource compiler processes resources according to <b><u>which subfolder they are in and the format of the file</u></b>. At build time, all resources get compiled into your application.

**<u>NOTE</u>**: 

- You should always externalize app resources such as images and strings from your code, so that you can maintain them independently. You should also provide alternative resources for specific device configurations, by grouping them in specially-named resource directories. At runtime, Android uses the appropriate resource ,based on the current configuration. For example, you might want to provide a different UI layout depending on the screen size or different strings depending on the language setting.

- Be mindful of the names you give to files that you intend to add. Android only supports resource files with uppercase and lowercase letters, numbers, and the underscore symbol.

  

  # 					                     <u>TYPES OF RESOURCES</u>

|        Name         |  Folder  |                         Description                          |
| :-----------------: | :------: | :----------------------------------------------------------: |
|  Tween Animations   |   anim   |           XML files that define tween animations.            |
| Property Animations | animator |          XML files that define property animations.          |
|      Drawables      | drawable |       Bitmap files or XML files that act as graphics.        |
|        Menu         |   menu   |       XML files that define menus or action bar items.       |
|       Layout        |  layout  |        XML files that define a user interface layout.        |
|       Values        |  values  | XML files with values such as strings, integers, and colors. |



<b>In addition, below are the key files stored within the values folder mentioned above:</b>

|    Name    |          File          |                  Description                   |
| :--------: | :--------------------: | :--------------------------------------------: |
|   Styles   | res/values/styles.xml  |   For style values such as color of the App.   |
|   Colors   | res/values/colors.xml  |    For color definitions such as text color    |
| Dimensions | res/values/dimens.xml  |      For dimension values such as padding      |
|  Strings   | res/values/strings.xml | For string values such as the text for a title |

<img src="https://media0.giphy.com/media/DuWNPF952JNyE/giphy-preview.gif" style="zoom:50%;" />

<strong>here's the file hierarchy for a simple project:</strong>

```
MyProject/
    src/
        MyActivity.java
    res/
        drawable/
            graphic.png
        layout/
            main.xml
            info.xml
        mipmap/
            icon.png
        values/
            strings.xml
```



- <i><strong>As you can see in this example, the res/ directory contains all the resources (in subdirectories): an image resource, two layout resources, mipmap/ directories for launcher icons, and a 
  string resource file.</strong></i>

  ##                             <u>Providing App Resources</u>

  ###                                   Defining a String Resource

  * For every piece of text you want to display within your application (i.e the label of a button, or the text inside a TextView), you should first define the text in the `res/values/strings.xml` file. Each entry is a key (representing the id of the text) and a value (the text itself). For example, if I want a button to display "Submit", I might add the following string resource to `res/values/strings.xml`:

  ```
  <?xml version="1.0" encoding="utf-8"?>
  <resources>
      <string name="hello">Hello!</string>
      <string name="submit_label">Submit</string>
  </resources>
  ```

  Now if I ever reference the string resource for `submit_label`, the default will be for "Submit" to be displayed.

  * You could  also create **qualified resource files** that change this value for different countries or between devices. We can also store more complex strings (with html or special characters) by using CDATA to escape the string such as:

  ```
  <?xml version="1.0" encoding="utf-8"?>
  <resources>
    <string name="feedback_label">
    <![CDATA[
      Please <a href="http://highlight.com">let us know</a> if you have feedback on this or if 
      you would like to log in with another identity service. Thanks! This is a longer string!  
    ]]>
    </string>
  </resources>
  ```

  

###                                            Referencing an App Resource

* Now that we have defined our string resource, we can access that resource in either our Java code or our XML layouts at any time. To access the resource directly in your Java code, simply use the `getResources.getString` or `getString` methods to access the value given the resource id:

```java
String submitText = getResources().getString(R.string.submit_label)
```

* And the string value will be retrieved. This similar pattern works for almost any resource from images (drawables) to colors. The `getResources()` method returns a [Resources](http://developer.android.com/reference/android/content/res/Resources.html) object with many resource fetching methods. Each resource is defined within different folders and files within the `res` directory depending on their type.

###                                                  Defining Color Resources

* Let's take a look at the colors file which is used to define all colors used within an application. Colors should be defined within `res/values/colors.xml` and the XML file looks like the following:

```XML
<?xml version="1.0" encoding="utf-8"?>
<resources>
   <color name="white">#FFFFFF</color>
   <color name="yellow">#FFFF00</color>
   <color name="fuchsia">#FF00FF</color>
</resources>
```



* The colors can be accessed in Java code with:

  ```java
  int color = ContextCompat.getColor(context, R.color.yellow);
  ```

 

# 			 Providing Alternate Resources

###                                              Responsive Design

![](https://thumbs.dreamstime.com/b/laptop-computer-tablet-mobile-phone-social-media-account-laptop-computer-tablet-mobile-phone-social-media-141849338.jpg)

In order to create an outstanding UI design, it is essential for app developers to create apps that work properly across a wide variety of devices. To do this, we first divide android mobile devices into various categories (buckets) based on screen size and display. Apps must be designed to work across any different screen densities as well as screen sizes. This can be done leveraging a variety of systems provided by the Android framework.



<img src="https://i2.wp.com/www.bestworldevents.com/wp-content/uploads/2020/05/Thank-You-gif-Free.gif?fit=2149%2C1414&ssl=1" style="zoom:50%;" />

