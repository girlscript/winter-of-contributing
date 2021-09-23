FRAME LAYOUT ANDROID

FrameLayout is designed to block out an area on the screen to display a
single item. Generally, FrameLayout should be used to hold a single
child view, because it can be difficult to organize child views in a way
that\'s scalable to different screen sizes without the children
overlapping each other. You can, however, add multiple children to a
FrameLayout and control their position within the FrameLayout by
assigning gravity to each child, using the
[[android:layout_gravity]{.ul}](https://developer.android.com/reference/android/widget/FrameLayout.LayoutParams#attr_android:layout_gravity)
attribute.

The size of the FrameLayout is the size of its largest child (plus
padding), visible or not (if the FrameLayout\'s parent permits). Views
that are
[[View.GONE]{.ul}](https://developer.android.com/reference/android/view/View#GONE)
are used for sizing only if
[[setConsiderGoneChildrenWhenMeasuring()]{.ul}](https://developer.android.com/reference/android/widget/FrameLayout#setMeasureAllChildren(boolean))
is set to true.

+-----------------------+----------------------------------------------+
| #                     |                                              |
| ## **XML attributes** |                                              |
+=======================+==============================================+
| [[andro               | Defines the gravity to apply to the          |
| id:foregroundGravity] | foreground drawable.                         |
| {.ul}](https://develo |                                              |
| per.android.com/refer |                                              |
| ence/android/widget/F |                                              |
| rameLayout#attr_andro |                                              |
| id:foregroundGravity) |                                              |
+-----------------------+----------------------------------------------+
| [[android             | Determines whether to measure all children   |
| :measureAllChildren]{ | or just those in the VISIBLE or INVISIBLE    |
| .ul}](https://develop | state when measuring.                        |
| er.android.com/refere |                                              |
| nce/android/widget/Fr |                                              |
| ameLayout#attr_androi |                                              |
| d:measureAllChildren) |                                              |
+-----------------------+----------------------------------------------+

### 

### **Public Methods**

**1) generateLayoutParams :**

public
[**[FrameLayout.LayoutParams]{.ul}**](https://developer.android.com/reference/android/widget/FrameLayout.LayoutParams)
generateLayoutParams
([**[AttributeSet]{.ul}**](https://developer.android.com/reference/android/util/AttributeSet)
attrs)

Returns a new set of layout parameters based on the supplied attributes
set**.**

**2) getAccessibilityClassName:**

public
[**[CharSequence]{.ul}**](https://developer.android.com/reference/java/lang/CharSequence)
getAccessibilityClassName ()

Return the class name of this object to be used for accessibility
purposes. Subclasses should only override this if they are implementing
something that should be seen as a completely new class of view when
used by accessibility, unrelated to the class it is deriving from. This
is used to fill in
[[AccessibilityNodeInfo.setClassName]{.ul}](https://developer.android.com/reference/android/view/accessibility/AccessibilityNodeInfo#setClassName(java.lang.CharSequence)).

**3) getConsiderGoneChildrenWhenMeasuring:**

public boolean getConsiderGoneChildrenWhenMeasuring ()

This method is deprecated in favor of
[[getMeasureAllChildren()]{.ul}](https://developer.android.com/reference/android/widget/FrameLayout#getMeasureAllChildren()),
which was renamed for consistency with
[[setMeasureAllChildren()]{.ul}](https://developer.android.com/reference/android/widget/FrameLayout#setMeasureAllChildren(boolean)).Determines
whether all children or just those in the VISIBLE or INVISIBLE state,
are considered when measuring.

**4) getMeasureAllChildren:**

public boolean getMeasureAllChildren ()

Determines whether all children or just those in the VISIBLE or
INVISIBLE state, are considered when measuring

**5) setForegroundGravity**

public void setForegroundGravity (int foregroundGravity)

Describes how the foreground is positioned. Defaults to START and TOP.

**6) setMeasureAllChildren:**

public void setMeasureAllChildren (boolean measureAll)

Sets whether to consider all children or just those in the VISIBLE or
INVISIBLE state, when measuring. Defaults to false.

**7) shouldDelayChildPressedState:**

Public boolean shouldDelatChildPressedState ()

Return true if the pressed state should be delayed for children or
descendants of this ViewGroup. Generally, this should be done for
containers that can scroll, such as a List. This prevents the pressed
state from appearing when the user is actually trying to scroll the
content. The default implementation returns true for compatibility
reasons. Subclasses that do not scroll should generally override this
method and return false.

Here we are designing ImageView and TextView inside Frame Layout.

Here we will put textview at a different position in Frame Layout using
layout gravity. Below is the code and final output.

**Important Note:** Make sure you have an image saved in the drawable
folder name img_name. If you have saved other images with a different
name then please change it in the code.

\<?xml version=\"1.0\" encoding=\"utf-8\"?>

\<FrameLayout
xmlns:android=\"http://schemas.android.com/apk/res/android\"

android:layout_height=\"match_parent\"

android:layout_width=\"match_parent\"

\>

\<!\--Change image as per your name of image saved in drawable\--\>

\<ImageView

android:layout_width=\"134dp\"

android:layout_height=\"180dp\"

android:layout_gravity=\"top\|right\"

android:src=\"\@drawable/daniel_lincoln_ie2z11zksso_unsplash\" />

\<TextView android:layout_height=\"wrap_content\"

android:layout_width=\"wrap_content\"

android:text=\"RightTop\"

android:textSize=\"30dp\"

android:textColor=\"\@color/white\"

android:layout_gravity=\"top\|right\" />

\<ImageView

android:layout_width=\"138dp\"

android:layout_height=\"180dp\"

android:layout_gravity=\"left\"

android:src=\"\@drawable/karsten_winegeart_cre553zfmtg_unsplash\" />

\<TextView android:text=\"LeftTop\"

android:textSize=\"30dp\"

android:textColor=\"\@color/black\"

android:layout_width=\"wrap_content\"

android:layout_height=\"wrap_content\" />

\<TextView android:layout_height=\"wrap_content\"

android:layout_width=\"wrap_content\"

android:text=\"CentreTop\"

android:textSize=\"30dp\"

android:layout_gravity=\"top\|center_horizontal\" />

\<ImageView

android:layout_width=\"149dp\"

android:layout_height=\"180dp\"

android:layout_gravity=\"top\|center_horizontal\"

android:src=\"\@drawable/\_90954\" />

\<ImageView

android:layout_width=\"400dp\"

android:layout_height=\"300dp\"

android:layout_gravity=\"center\"

android:src=\"\@drawable/\_81289\" />

\<TextView android:layout_height=\"wrap_content\"

android:layout_width=\"wrap_content\"

android:text=\"Centre\"

android:textSize=\"40dp\"

android:textColor=\"\@color/white\"

android:layout_gravity=\"center\" />

\<TextView android:text=\"LeftBottom\"

android:layout_gravity=\"left\|bottom\"

android:textSize=\"20dp\"

android:textColor=\"\@color/black\"

android:layout_width=\"wrap_content\"

android:layout_height=\"wrap_content\" />

\<ImageView

android:layout_width=\"150dp\"

android:layout_height=\"180dp\"

android:layout_gravity=\"left\|bottom\"

android:src=\"\@drawable/karsten_winegeart_tucvnmovxfq_unsplash\" />

\<ImageView

android:layout_width=\"137dp\"

android:layout_height=\"180dp\"

android:layout_gravity=\"right\|bottom\"

android:src=\"\@drawable/karsten_winegeart_qb7d1xw28co_unsplash\" />

\<TextView

android:layout_width=\"wrap_content\"

android:layout_height=\"wrap_content\"

android:layout_gravity=\"right\|bottom\"

android:text=\"RightBottom\"

android:textColor=\"\@color/black\"

android:textSize=\"20dp\" />

\<TextView android:layout_height=\"wrap_content\"

android:layout_width=\"wrap_content\"

android:text=\"CenterBottom\"

android:textSize=\"20dp\"

android:textColor=\"\@color/black\"

android:layout_gravity=\"center\|bottom\" />

\<ImageView

android:layout_width=\"150dp\"

android:layout_height=\"180dp\"

android:layout_gravity=\"center\|bottom\"

android:src=\"\@drawable/sq_lim_k4vhuuhv08o_unsplash\" />

\</FrameLayout>

Component tree of the layout will be:

![](./mediaFolder/media/image2.png){width="2.4739588801399823in"
height="3.0482699037620296in"}

The design of our code will look like this:

![](./mediaFolder/media/image2.png){width="5.463542213473316in"
height="4.267659667541557in"}

  ---------------------- ------------------------------------------------
                         

  ---------------------- ------------------------------------------------

  ---------------------- ------------------------------------------------
                         

  ---------------------- ------------------------------------------------

  ---------------------- ------------------------------------------------
                         

  ---------------------- ------------------------------------------------
