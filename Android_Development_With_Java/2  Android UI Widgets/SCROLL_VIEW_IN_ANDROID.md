**SCROLL VIEW IN ANDROID**

It is a view group that allows the view hierarchy placed within it to be
scrolled. Scroll view may have only one direct child placed within it.
To add multiple views within the scroll view, make the direct child you
add a view group, for example,
[LinearLayout](https://developer.android.com/reference/android/widget/LinearLayout),
and place additional views within that LinearLayout.

When an app has layout content that might be longer than the height or
wider than the width of the device and that content should be vertically
or horizontally scrollable, then we need to use a
[ScrollView](http://developer.android.com/reference/android/widget/ScrollView.html).

### **Vertically Scrolling:**

To make any content vertically scrollable, simply wrap that content in a
ScrollView:

\<?xml version=\"1.0\" encoding=\"utf-8\"?>

\<ScrollView

android:layout_width=\"match_parent\"

android:layout_height=\"match_parent\"

xmlns:android=\"http://schemas.android.com/apk/res/android\"\>

\<LinearLayout

android:layout_width=\"match_parent\"

android:layout_height=\"wrap_content\"

android:orientation=\"vertical\" \>

\<TextView

android:id=\"@+id/tv_long\"

android:layout_width=\"wrap_content\"

android:layout_height=\"match_parent\"

android:text=\"\@string/really_long_string\" \>

\</TextView>

\<Button

android:id=\"@+id/btn_act\"

android:layout_width=\"wrap_content\"

android:layout_height=\"wrap_content\"

android:text=\"View\" \>

\</Button>

\</LinearLayout>

\</ScrollView>

In certain situations, you want to position content beneath the end of
the scrollable content area. For example for a \"terms of service\"
where you can only accept once you\'ve scrolled through all the content.
In this case, you might need to apply the
[android:fillViewport](http://developer.android.com/reference/android/widget/ScrollView.html#attr_android:fillViewport)
property to \"true\". Read this post by [[Romain
Guy]{.ul}](http://www.curious-creature.org/2010/08/15/scrollviews-handy-trick/)
for a detailed look at this use case.

![](./mediaFolder/media/image1.png){width="1.9479166666666667in"
height="3.65625in"}![](./mediaFolder/media/image3.png){width="2.09375in"
height="3.65625in"}![](./mediaFolder/media/image4.png){width="2.2395833333333335in"
height="3.65625in"}

### 

### **Scrollable TextView**

Note that a TextView doesn\'t require a ScrollView and if you just need
a scrolling TextView simply set the scrollbars property and apply the
correct MovementMethod:

**\<TextView**

**android:id=\"@+id/tv_long\"**

**android:layout_width=\"wrap_content\"**

**android:layout_height=\"match_parent\"**

**android:scrollbars = \"vertical\"**

**android:text=\"\@string/really_long_string\" \>**

**\</TextView>**

and then in the activity:

**TextView tv = (TextView) findViewById(R.id.tv_long);**

**tv.setMovementMethod(new ScrollingMovementMethod());**

Now the TextView will automatically scroll vertically.

### 

### **Horizontally Scrolling**

In other cases, we want content to horizontally scroll in which case we
need to use the
[HorizontalScrollView](http://developer.android.com/reference/android/widget/HorizontalScrollView.html)
instead like this:

**\<HorizontalScrollView**

**android:layout_width=\"match_parent\"**

**android:layout_height=\"match_parent\"\>**

**\<LinearLayout**

**android:layout_width=\"match_parent\"**

**android:layout_height=\"wrap_content\"**

**android:orientation=\"horizontal\" \>**

***\<!\-- child views in here \--\>***

**\</LinearLayout>**

**\</HorizontalScrollView>**

and now you have a horizontally scrolling view.
