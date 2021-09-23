**LINEAR LAYOUT IN ANDROID**

We use this layout to place the elements in a linear manner. This layout
creates various kinds of forms on Android. In this, the arrangement of
the elements is in a top to bottom manner.

This can have two orientations:

a\. **Vertical Orientation** -- It is shown above where the widgets such
as TextViews, and all in a vertical manner.

b\. **Horizontal Orientation** -- It is shown above where the widgets
such as TextViews, and all in a horizontal manner.

This pictorial representation will further allow you to visualize
efficiently:

The complete code example of LinearLayout is listed below:

**\<?xml version=\"1.0\" encoding=\"utf-8\"?>**

**\<LinearLayout
xmlns:android=\"http://schemas.android.com/apk/res/android\"**

**android:id=\"@+id/relative_layout\"**

**android:layout_width=\"match_parent\"**

**android:layout_height=\"match_parent\"**

**android:orientation=\"vertical\"\>**

**\<TextView**

**android:id=\"@+id/text_view\"**

**android:layout_width=\"match_parent\"**

**android:layout_height=\"wrap_content\"**

**android:background=\"\@color/teal_700\"**

**android:layout_margin=\"10dp\"**

**android:layout_marginTop=\"30dp\"**

**android:padding=\"20dp\"**

**android:text=\"Linear Layouts\"**

**android:textAlignment=\"center\"**

**android:textColor=\"\@color/design_default_color_primary_dark\"**

**android:textSize=\"30sp\"**

**android:textStyle=\"bold\" />**

**\<TextView**

**android:id=\"@+id/text_view1\"**

**android:layout_width=\"match_parent\"**

**android:layout_height=\"wrap_content\"**

**android:layout_margin=\"10dp\"**

**android:background=\"\@color/pink\"**

**android:padding=\"20dp\"**

**android:text=\"Vertical Orientation\"**

**android:textAlignment=\"center\"**

**android:textColor=\"\@color/black\"**

**android:textSize=\"30sp\"**

**android:textStyle=\"italic\" />**

**\<TextView**

**android:id=\"@+id/text_view2\"**

**android:layout_width=\"match_parent\"**

**android:layout_height=\"wrap_content\"**

**android:background=\"\@color/teal_200\"**

**android:layout_margin=\"10dp\"**

**android:layout_marginTop=\"30dp\"**

**android:padding=\"20dp\"**

**android:text=\"Example\"**

**android:textAlignment=\"center\"**

**android:textColor=\"\@color/design_default_color_primary_variant\"**

**android:textSize=\"30sp\"**

**android:textStyle=\"bold\" />**

**\<LinearLayout**

**android:layout_width=\"match_parent\"**

**android:layout_height=\"98dp\"**

**android:orientation=\"horizontal\"\>**

**\<TextView**

**android:id=\"@+id/text_view0\"**

**android:layout_width=\"120dp\"**

**android:layout_height=\"wrap_content\"**

**android:layout_margin=\"10dp\"**

**android:layout_marginTop=\"30dp\"**

**android:background=\"\@color/teal_700\"**

**android:padding=\"20dp\"**

**android:text=\"Linear Layouts\"**

**android:textAlignment=\"center\"**

**android:textColor=\"\@color/design_default_color_primary_dark\"**

**android:textSize=\"15sp\"**

**android:textStyle=\"bold\" />**

**\<TextView**

**android:id=\"@+id/text_view11\"**

**android:layout_width=\"120dp\"**

**android:layout_height=\"wrap_content\"**

**android:layout_margin=\"10dp\"**

**android:background=\"\@color/pink\"**

**android:padding=\"20dp\"**

**android:text=\"Horizontal Orientation\"**

**android:textAlignment=\"center\"**

**android:textColor=\"\@color/black\"**

**android:textSize=\"15sp\"**

**android:textStyle=\"italic\" />**

**\<TextView**

**android:id=\"@+id/text_view22\"**

**android:layout_width=\"120dp\"**

**android:layout_height=\"78dp\"**

**android:background=\"\@color/teal_200\"**

**android:layout_margin=\"10dp\"**

**android:layout_marginTop=\"30dp\"**

**android:padding=\"20dp\"**

**android:text=\"Example\"**

**android:textAlignment=\"center\"**

**android:textColor=\"\@color/design_default_color_primary_variant\"**

**android:textSize=\"15sp\"**

**android:textStyle=\"bold\" />**

**\</LinearLayout>**

**\</LinearLayout>**

**Explanation**

In the above code example, we use LinearLayout as the parent layout and
as the child views, we use three TextView and arrange them vertically.
Then having first LinearLayout as root we made another LinearLayout
having horizontal orientation and used three TextView as its child
views.

Component tree will be like:

![](./mediaFolder/media/image2.png){width="2.0052088801399823in"
height="1.9609755030621172in"}

If we will run our application, the UI of the project will
be:![](./mediaFolder/media/image3.png){width="5.901042213473316in"
height="3.888118985126859in"}

Another helpful feature of Linear Layout is **android:weightSum.** It
defines the maximum weight sum and is calculated as the sum of the
**layout_weight** of all the children if not specified explicitly.

Let\'s consider an example with a LinearLayout with horizontal
orientation and **3** ImageViews inside it. Now we want these
ImageViewsalways to take equal space. To acheive this, you can set the
layout_weight of each ImageView to **1** and the weightSum will be
calculated to be equal to **3** as shown below.

\<LinearLayout

android:layout_width=\"wrap_content\"

android:layout_height=\"wrap_content\"

\<!\-- android:weightSum=\"3\" \--\>

android:orientation=\"horizontal\"

android:layout_gravity=\"center\"\>

\<ImageView

android:layout_height=\"wrap_content\"

android:layout_weight=\"1\"

android:layout_width=\"0dp\"/>

\...

WeightSum is useful for having the layout rendered correctly for any
device, which will not happen if you set width and height directly.
