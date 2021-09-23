**ABSOLUTE LAYOUT IN ANDROID**

A layout that lets you specify the exact locations (x/y coordinates) of
its children. Absolute layouts are less flexible and harder to maintain
than other types of layouts without absolute positioning.

the absolute layout is harder to maintain for different mobile screen
sizes than other types of layouts because we set the exact location of a
child view or called component. The positioning is based on x(top) and
y(left) coordinates and that positioning is not as useful in the world
of various screen resolutions(sizes) and aspect ratios.

The absolute layout is depreciated in Android because of the same reason
as discussed in the above note.

Some of the important Absolute Layout attributes are the following:

1.  **android:id**: It uniquely specifies the absolute layout

2.  **android:layout_x:** It specifies X-Coordinate of the Views
    > (Possible values of this is in [[density-pixel or
    > pixel]{.ul}](https://www.geeksforgeeks.org/how-to-scale-different-views-to-all-screen-sizes-in-android-studio/))

3.  **android:layout_y:** It specifies Y-Coordinate of the Views
    > (Possible values of this is in dp or px)

## **Public Constructors:**

-   AbsoluteLayout(Context context)

-   AbsoluteLayout(Context context, AttributeSet attrs)

-   AbsoluteLayout(Context context, AttributeSet attrs, int
    > defStyleAttr)

-   AbsoluteLayout(Context context, AttributeSet attrs, int
    > defStyleAttr, int defStyleRes)

Below is the example code where we design a Registration screen with two
fields First name and Last name and one
[button](https://abhiandroid.com/ui/button/) for navigating to the next
page. We set all views using x and y coordinates of the screen and set
the values in px(pixels).

\<?xml version=\"1.0\" encoding=\"utf-8\"?>

\<AbsoluteLayout

xmlns:android=\"http://schemas.android.com/apk/res/android\"

xmlns:tools=\"http://schemas.android.com/tools\"

android:layout_width=\"fill_parent\"

android:layout_height=\"fill_parent\"

tools:ignore=\"Deprecated\"\>

\<TextView

android:layout_x=\"19dp\"

android:layout_y=\"74dp\"

android:text=\"First Name\"

android:textSize=\"18sp\"

android:layout_width=\"wrap_content\"

android:layout_height=\"wrap_content\" />

\<EditText

android:layout_x=\"140dp\"

android:layout_y=\"54dp\"

android:width=\"300px\"

android:layout_width=\"wrap_content\"

android:layout_height=\"wrap_content\" />

\<TextView

android:layout_x=\"22dp\"

android:layout_y=\"137dp\"

android:text=\"Last Name\"

android:textSize=\"18sp\"

android:layout_width=\"wrap_content\"

android:layout_height=\"wrap_content\" />

\<EditText

android:layout_x=\"143dp\"

android:layout_y=\"117dp\"

android:width=\"300px\"

android:layout_width=\"wrap_content\"

android:layout_height=\"wrap_content\" />

\<Button

android:id=\"@+id/next\"

android:layout_width=\"wrap_content\"

android:layout_height=\"wrap_content\"

android:layout_x=\"281dp\"

android:layout_y=\"211dp\"

android:text=\"Next\" />

\</AbsoluteLayout>

The component tree of the layout will be like this:

![](./mediaFolder/media/image2.png){width="2.057292213473316in"
height="2.5050546806649168in"}

The design of our UI will be:

![](./mediaFolder/media/image2.png){width="5.244792213473316in"
height="4.14191491688539in"}

**Note**: Try opening the same layout in different size Emulators and
you will see it doesn't fit in different size devices. That's why
Android has depreciated the use of Absolute Layout.
