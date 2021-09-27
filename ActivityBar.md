Activity Bar- The Activity Bar or the Title bar of an android
application is mainly responsible for displaying the Name and the logo
of the android application. The Activity bar is already a predefined and
default view added by the android studio.

The Activity Bar comes in the default color that is provided by the
android studio. In this Documentation we are going to discuss on various
ways to hide the Activity bar and also at the end we will discuss and
know how to change the color of the Activity Bar.

* * * * *

We are going to discuss 3 ways in which we will be able to hide the
Activity bar in Android, Here we are going to discuss by taking the
example of a HELLO WORLD app.

1.  Hiding the Activity bar using the themes.xml,

If we desire to hide the Activity Bar from the App we can do that by
following the simple steps and doing some changes in the themes.xml file

The steps are,

1.  We have to go to the themes.xml file from the themes folder of the
    values folder under the res directory
2.  There we have to make the following changes,
    parent="Theme.MaterialComponents.DayNight.DarkActionBar" to
    parent="Theme.MaterialComponents.DayNight.NoDarkActionBar"

The code after changes should look like,

    <resources xmlns:tools="http://schemas.android.com/tools">
        <!-- Base application theme. -->
        <style name="Theme.TestApp" parent="Theme.MaterialComponents.DayNight.DarkActionBar">
            <!-- Primary brand color. -->
            <item name="colorPrimary">@color/purple_200</item>
            <item name="colorPrimaryVariant">@color/purple_700</item>
            <item name="colorOnPrimary">@color/black</item>
            <!-- Secondary brand color. -->
            <item name="colorSecondary">@color/teal_200</item>
            <item name="colorSecondaryVariant">@color/teal_200</item>
            <item name="colorOnSecondary">@color/black</item>
            <!-- Status bar color. -->
            <item name="android:statusBarColor" tools:targetApi="l">?attr/colorPrimaryVariant</item>
            <!-- Customize your theme here. -->
        </style>
    </resources>

2.Hiding the Activity Bar using the custom styles.xml file

If we desire to hide the Activity Bar from the App by using the custom
file, we can do it by using it using the styles.xml file,

The steps to be followed are,

1.  Under the res directory of the Project tab, create a new Android
    Resource Directory named styles.
2.  In the styles directory, create a new xml file named styles.xml, and
    paste the below attached code snippet.

    <resources>
    <style name="AppTheme" parent="Theme.AppCompat.Light.NoActionBar">

            <item name="colorPrimary">@color/colorPrimary</item>
            <item name="colorPrimaryDark">@color/colorPrimaryDark</item>
            <item name="colorAccent">@color/colorAccent</item>

        </style>
    </resources>

3.  Hiding the Activity Bar by changing the Java Code

If we desire to hide the Activity Bar by using the Java code instead of
using the xml file then we have just make some changes in the
MainActivity.java class, The code changes that are required to be made
are here as follows,

    if (getSupportActionBar() != null) 
            { 
                getSupportActionBar().hide(); 
            } 

We just need to paste this above code snipped in the, onCreate Method of
the MainActivity.java

* * * * *

For Changing the color of the Activity bar

For changing the color of the activity bar we just have make some
changes in the styles.xml file

    <?xml version="1.0" encoding="utf-8"?>
    <resources>
        <style name="AppTheme" parent="Theme.AppCompat.Light.NoActionBar">

            <item name="colorPrimary">#FFFFFF</item>
            <item name="colorPrimaryDark">@color/colorPrimaryDark</item>
            <item name="colorAccent">@color/colorAccent</item>

        </style>
    </resources>

Here the colorPrimary states that which color needs to be displayed on
the Activity bar of each Activity. By changing tge hexcode we can easily
set our custom colors into the Activity Bar in every Fragment and
Activity.
