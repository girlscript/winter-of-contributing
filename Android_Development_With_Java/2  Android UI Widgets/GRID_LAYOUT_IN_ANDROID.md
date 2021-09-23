**GRID LAYOUT IN ANDROID**

A layout that places its children in a rectangular grid.

The grid is composed of a set of infinitely thin lines that separate the
viewing area into cells. A grid with N columns has N + 1 grid indices
that run from 0 through N inclusive.

Children occupy one or more contiguous cells, as defined by their
**[r](https://developer.android.com/reference/android/widget/GridLayout.LayoutParams#rowSpec)owSpec**
and **columnSpec** layout parameters. Each spec defines the set of rows
or columns that are to be occupied; and how children should be aligned
within the resulting group of cells.

If a child does not specify the row and column indices of the cell it
wishes to occupy, GridLayout assigns cell locations automatically using
its: **orientation, rowCount,** and **columnCount** properties.

Space between children may be specified either by using instances of the
dedicated
[Space](https://developer.android.com/reference/android/widget/Space)
view or by setting the **leftMargin, topMargin, rightMargin, and
bottomMargin** layout parameters. When the **useDefaultMargins**
property is set, default margins around children are automatically
allocated based on the prevailing UI style guide for the platform.

The flexibility of a view is therefore influenced by its alignment which
is, in turn, typically defined by setting the **gravity property** of
the child\'s layout parameters.

For layout purposes, GridLayout treats views whose visibility status is
**GONE**, as having zero width and height.

Below pictorial representation will further help you to visualize these
layouts.

Below is the example code of GridLayout for designing a simple
calculator:

\<?xml version=\"1.0\" encoding=\"utf-8\"?>

\<GridLayout
xmlns:android=\"http://schemas.android.com/apk/res/android\"

xmlns:tools=\"http://schemas.android.com/tools\"

android:layout_width=\"match_parent\"

android:layout_height=\"wrap_content\"

android:layout_gravity=\"center\"

android:columnCount=\"4\"

android:orientation=\"horizontal\"

android:background=\"\@color/black\"\>

\<TextView

android:layout_width=\"180dp\"

android:layout_height=\"wrap_content\"

android:layout_row=\"0\"

android:layout_column=\"1\"

android:layout_columnSpan=\"2\"

android:text=\"CALCULATOR\"

android:textColor=\"\@color/white\"

android:textSize=\"25dp\" />

\<Button

android:layout_columnSpan=\"3\"

android:text=\"/\" />

\<Button android:text=\"1\" />

\<Button android:text=\"2\" />

\<Button android:text=\"3\" />

\<Button android:text=\"\*\" />

\<Button android:text=\"4\" />

\<Button android:text=\"5\" />

\<Button android:text=\"6\" />

\<Button android:text=\"-\" />

\<Button android:text=\"7\" />

\<Button android:text=\"8\" />

\<Button android:text=\"9\" />

\<Button

android:layout_gravity=\"fill\"

android:layout_rowSpan=\"3\"

android:text=\"+\" />

\<Button

android:layout_columnSpan=\"2\"

android:layout_gravity=\"fill\"

android:text=\"0\" />

\<Button android:text=\"00\" />

\<Button

android:layout_columnSpan=\"3\"

android:layout_rowSpan=\"1\"

android:layout_gravity=\"fill\"

android:text=\"=\" />

\</GridLayout>

Component Tree will look like this:

![](./mediaFolder/media/image1.png){width="1.515625546806649in"
height="2.816774934383202in"}

UI design will look like this:

![](./mediaFolder/media/image1.png){width="6.286458880139983in"
height="3.515916447944007in"}

+-----------------------------------+----------------------------------+
| ### **XML attributes Summary :**  |                                  |
+===================================+==================================+
| -   **android:alignmentMode**     | When set to alignMargins, causes |
|                                   | alignment to take place between  |
|                                   | the outer boundary of a view, as |
|                                   | defined by its margins.          |
+-----------------------------------+----------------------------------+
| -   **android:columnCount**       | The maximum number of columns to |
|                                   | create when automatically        |
|                                   | positioning children.            |
+-----------------------------------+----------------------------------+
| -                                 | When set to true, forces column  |
|  **android:columnOrderPreserved** | boundaries to appear in the same |
|                                   | order as column indices.         |
+-----------------------------------+----------------------------------+
| -   **android:orientation**       | The orientation property is not  |
|                                   | used during layout.              |
+-----------------------------------+----------------------------------+
| -   **android:rowCount**          | The maximum number of rows to    |
|                                   | create when automatically        |
|                                   | positioning children.            |
+-----------------------------------+----------------------------------+
| -   **android:rowOrderPreserved** | When set to true, forces row     |
|                                   | boundaries to appear in the same |
|                                   | order as row indices.            |
+-----------------------------------+----------------------------------+
| -   **android:useDefaultMargins** | When set to true, tells          |
|                                   | GridLayout to use default        |
|                                   | margins when none are specified  |
|                                   | in a view\'s layout parameters.  |
+-----------------------------------+----------------------------------+

In order to distribute the space between the child views equally
GridLayout also supports grid **android:layout_columnWeight=\"1\"** and
**android:grid:layout_rowWeight=\"1\"**
