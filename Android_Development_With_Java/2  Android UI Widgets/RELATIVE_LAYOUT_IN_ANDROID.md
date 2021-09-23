**RELATIVE LAYOUT IN ANDROID**

Relative Layout arranges the views relative to other views. The views
can be relative to its parent or other child views. Child views specify
layout attributes to get aligned

To get the element aligned on the top left of the parent container we
can write the following:

-   android:layout_alignParentTop= "true"

-   android:layout_alignParentLeft= "true"

If we want to align it with some other element in the same container, it
can be defined is as follows:

-   android:layout_alignLeft= "@+id/element_name"

-   android:layout_below= "@+id/element_name"

This will align the element below the other element to its left.

Below pictorial representation will further help you to visualize this
layout:

The complete code example of the RelativeLayout is listed below:

\<?xml version=\"1.0\" encoding=\"utf-8\"?>

\<RelativeLayout
xmlns:android=\"http://schemas.android.com/apk/res/android\"
android:id=\"@+id/relative_layout\"

android:layout_width=\"match_parent\"

android:layout_height=\"match_parent\"

android:layout_marginLeft=\"10dp\"

android:layout_marginTop=\"10dp\"

android:layout_marginRight=\"10dp\"

android:layout_marginBottom=\"10dp\"

android:layout_weight=\"1\"\>

\<TextView

android:id=\"@+id/text_view\"

android:layout_width=\"match_parent\"

android:layout_height=\"wrap_content\"

android:layout_centerHorizontal=\"true\"

android:layout_marginLeft=\"10dp\"

android:layout_marginTop=\"50dp\"

android:layout_marginRight=\"10dp\"

android:padding=\"20dp\"

android:background=\"\@color/teal_700\"

android:text=\"Android Relative Layouts\"

android:textAlignment=\"center\"

android:textColor=\"\@color/design_default_color_primary_dark\"

android:textSize=\"35sp\"

android:textStyle=\"bold\" />

\<TextView

android:id=\"@+id/text_view1\"

android:layout_width=\"180dp\"

android:layout_height=\"wrap_content\"

android:layout_below=\"\@id/text_view\"

android:layout_alignParentStart=\"true\"

android:layout_marginStart=\"15dp\"

android:layout_marginLeft=\"30dp\"

android:layout_marginTop=\"50dp\"

android:layout_marginRight=\"10dp\"

android:background=\"\@color/purple_200\"

android:padding=\"20dp\"

android:text=\"Relative\"

android:textAlignment=\"center\"

android:textColor=\"\@color/design_default_color_primary_variant\"

android:textSize=\"30sp\"

android:textStyle=\"italic\" />

\<TextView

android:id=\"@+id/text_view2\"

android:layout_width=\"180dp\"

android:layout_height=\"wrap_content\"

android:layout_below=\"\@id/text_view\"

android:layout_marginLeft=\"5dp\"

android:layout_marginTop=\"50dp\"

android:layout_toRightOf=\"\@id/text_view1\"

android:padding=\"20dp\"

android:background=\"\@color/purple_200\"

android:text=\"Layout\"

android:textAlignment=\"center\"

android:textColor=\"\@color/design_default_color_primary_variant\"

android:textSize=\"30sp\"

android:textStyle=\"italic\" />

\<TextView

android:id=\"@+id/text_view3\"

android:layout_width=\"match_parent\"

android:layout_height=\"wrap_content\"

android:layout_below=\"\@id/text_view1\"

android:layout_centerInParent=\"true\"

android:layout_marginLeft=\"10dp\"

android:layout_marginTop=\"50dp\"

android:background=\"\@color/cardview_dark_background\"

android:layout_marginRight=\"10dp\"

android:padding=\"20dp\"

android:text=\"Relative Layout Example\"

android:textAlignment=\"center\"

android:textColor=\"\@color/white\"

android:textSize=\"35sp\"

android:textStyle=\"bold\" />

\</RelativeLayout>

**Explanation:** In this layout example, We use RelativeLayout as the
parent layout. In this layout example, we create four TextView and
arrange them according to the required design. We use different
attributes of the text views for arranging the text views.

Component tree will be like:

![](./mediaFolder/media/image2.png){width="2.807292213473316in"
height="2.4126924759405073in"}

If we will run our application, the UI of the project will be:
![](./mediaFolder/media/image2.png){width="5.736925853018373in"
height="4.621412948381452in"}
