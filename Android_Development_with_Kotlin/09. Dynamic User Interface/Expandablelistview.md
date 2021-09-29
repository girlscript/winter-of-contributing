# Expandablelistview in Android (Kotlin)

Android ExpandableListView is a view that shows items in a vertically scrolling two-level list. It differs from a ListView by allowing two levels which are groups that can be easily expanded and collapsed by touching to view and their respective children items.

## Using the Library
### Layouts
First of all include the ExpandingList in your Activity (or Fragment) layout. This will be the list of items (ExpandItem):

```xml
<com android:id="@+id/expanding_list_main" android:layout_width="match_parent" android:layout_height="match_parent">
```

Now create a new layout (xml) file to represent the item (such as `res/layout/expanding_item.xml`). This will be the Item (header) that can be expanded to show sub items:

```xml

<RelativeLayout xmlns:android="http://schemas.android.com/apk/res/android" xmlns:app="http://schemas.android.com/apk/res-auto" android:layout_width="match_parent" android:layout_height="94dp">
    <TextView android:id="@+id/title" android:layout_width="wrap_content" android:layout_height="wrap_content" android:layout_centerVertical="true" android:gravity="center_vertical|left" android:textSize="22sp">
</RelativeLayout>
```

Create another layout file to represent the sub items (such as `/res/expanding_sub_item.xml`). This will be the sub items that will be shown when the Item is expanded:

```xml
<RelativeLayout xmlns:android="http://schemas.android.com/apk/res/android" xmlns:app="http://schemas.android.com/apk/res-auto" android:layout_width="match_parent" android:layout_height="48dp">
    <TextView android:id="@+id/sub_title" android:layout_width="match_parent" android:layout_height="match_parent" android:layout_centerVertical="true" android:layout_marginLeft="8dp" android:textSize="18sp" android:gravity="center_vertical|left">
</RelativeLayout>
```

Now create a layout file (such as `/res/expanding_layout.xml`) to represent the whole item, including both item layout and sub item layout. We will explain each custom attribute later:

```xml
<com xmlns:android="http://schemas.android.com/apk/res/android" xmlns:app="http://schemas.android.com/apk/res-auto" android:layout_width="match_parent" android:layout_height="wrap_content" app:item_layout="@layout/expanding_item" app:sub_item_layout="@layout/expanding_sub_item" app:indicator_size="42dp" app:indicator_margin_left="16dp" app:indicator_margin_right="16dp" app:show_indicator="true" app:show_animation="true" app:start_collapsed="true" app:animation_duration="250">
```

Note that we included `expanding_item` and `expanding_sub_item` layouts created before.

### ExpandingItem layout attributes

Attribute Name         | Type         | Default Value | Meaning                                                             | Mandatory
---------------------- | ------------ | ------------- | --------------------------------------------------------------------| --------
item_layout            | reference    |               | The layout for the Item (header).                                   | Yes
sub_item_layout        | reference    |               | The layout for the sub items.                                       | Yes
separator_layout       | reference    |               | A layout to separate items.                                         | No
indicator_size         | dimension    |       0dp     | The indicator size in dp.                                           | No
indicator_margin_left  | dimension    |       0dp     | The margin between the indicator and its left.                      | No
indicator_margin_right | dimension    |       0dp     | The margin between the indicator and its right.                     | No
show_indicator         | boolean      |       true    | true if you want to show the indicator. false otherwise.            | No
show_animation         | boolean      |       true    | true if you want to show animations. false otherwise.               | No
start_collapsed        | boolean      |       true    | true if you want the sub views to start collapsed. false otherwise. | No
animation_duration     | integer      |       300ms   | The animations duration in milliseconds.                            | No


### Step by Step Implementation

**Step 1: Create a New Project**

To create a new project in Android Studio please refer to [How to Create/Start a New Project in Android Studio](https://www.geeksforgeeks.org/android-how-to-create-start-a-new-project-in-android-studio/). Note that select **Kotlin** as the programming language.

**Step 2: Working with the activity_main.xml file**

Now go to the **activity_main.xml** file which represents the UI of the application. Below is the code for the **activity_main.xml** file. Comments are added inside the code to understand the code in more detail.

## XML
<?xml version="1.0"?>

<img src="https://user-images.githubusercontent.com/78701779/134665601-f76558ef-b719-453d-82e0-c767f8831a50.png" height=550px width=475px>



**Step 3: Working with the MainActivity file**

Go to the **MainActivity** file, and refer to the following code. Below is the code for the both **MainActivity.kt** and **MainActivity.java **file. Comments are added inside the code to understand the code in more detail.

## Kotlin

<pre><code>
// Kotlin code to implement the expandablelistview
package com.journaldev.expandablelistview;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.ExpandableListAdapter;
import android.widget.ExpandableListView;
import android.widget.Toast;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;

public class MainActivity extends AppCompatActivity {

    ExpandableListView expandableListView;
    ExpandableListAdapter expandableListAdapter;
    List<String> expandableListTitle;
    HashMap<String>> expandableListDetail;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        expandableListView = (ExpandableListView) findViewById(R.id.expandableListView);
        expandableListDetail = ExpandableListDataPump.getData();
        expandableListTitle = new ArrayList<String>(expandableListDetail.keySet());
        expandableListAdapter = new CustomExpandableListAdapter(this, expandableListTitle, expandableListDetail);
        expandableListView.setAdapter(expandableListAdapter);
        expandableListView.setOnGroupExpandListener(new ExpandableListView.OnGroupExpandListener() {

            @Override
            public void onGroupExpand(int groupPosition) {
                Toast.makeText(getApplicationContext(),
                        expandableListTitle.get(groupPosition) + " List Expanded.",
                        Toast.LENGTH_SHORT).show();
            }
        });

        expandableListView.setOnGroupCollapseListener(new ExpandableListView.OnGroupCollapseListener() {

            @Override
            public void onGroupCollapse(int groupPosition) {
                Toast.makeText(getApplicationContext(),
                        expandableListTitle.get(groupPosition) + " List Collapsed.",
                        Toast.LENGTH_SHORT).show();

            }
        });

        expandableListView.setOnChildClickListener(new ExpandableListView.OnChildClickListener() {
            @Override
            public boolean onChildClick(ExpandableListView parent, View v,
                                        int groupPosition, int childPosition, long id) {
                Toast.makeText(
                        getApplicationContext(),
                        expandableListTitle.get(groupPosition)
                                + " -> "
                                + expandableListDetail.get(
                                expandableListTitle.get(groupPosition)).get(
                                childPosition), Toast.LENGTH_SHORT
                ).show();
                return false;
            }
        });
    }

}

</code></pre>

After all of this you will get the output as shown above in the Above GIF. So thats how we can perform expandablelistview in Kotlin.


# Author

- [@sirilalithaadapa](https://github.com/sirilalithaadapa)
