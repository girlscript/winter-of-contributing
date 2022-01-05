<div align="center">

  # LIST VIEW IN ANDROID
</div>


Displays a vertically scrollable collection of views, where each view is positioned immediately below the previous view in the list. For a more modern, flexible, and performant approach to displaying lists, use **RecyclerView** .<br>

A list view is an **adapter view** as needed, such as to display new views as the user scrolls up or down. In order to display items in the list, call **setAdapter(android.widget.ListAdapter)** to associate an adapter with the list. For a simple example, see the discussion of Filling an adapter view with text in the Layouts guide. <br>

Below Visual will help you to understand ListView.


![Screenshot (160)](https://user-images.githubusercontent.com/58635404/134666083-2bd85dfd-415b-41d7-8d39-cac0ed7d356a.png)

## **XML attributes**
 
- **android:divider** -  Drawable or color to draw between list items.
- **android:dividerHeight** - Height of the divider.
- **android:entries** - Reference to an array resource that will      
- **android:footerDividersEnabled** - When set to false, the ListView will not draw the divider before each footer view. 
- **android:headerDividersEnabled** - When set to false, the ListView will not draw the divider after each header view.


## **Public constructors**

- public ListView (**Context** context)
- public ListView (**Context** context,  **AttributeSet** attrs)
- public ListView (**Context** context, **AttributeSet** attrs, **int** defStyleAttr)
- public ListView (**Context** context, **AttributeSet** attrs, **int** defStyleAttr, **int** defStyleRes)
  

# **Adapters use in ListView**

An adapter is a bridge between the UI component and data source that
helps us to fill data in the UI component. It holds the data and sends
the data to the adapter view then the view can take the data from the
adapter view and shows the data on different views like list view, grid
view, spinner, etc.

ListView is a subclass of AdapterView and it can be populated by binding
to an Adapter, which retrieves the data from an external source and
creates a View that represents each data entry.

**In android commonly used adapters are:**

1.  Array Adapter

2.  Base Adapter

Now we explain these two adapters in detail:

**Array adapter:**

Whenever you have a list of single items which is backed by an array,
you can use ArrayAdapter. For instance, a list of phone contacts,
countries, or names.

> >**Important Note:** By default, ArrayAdapter expects a Layout with a
>>single TextView, If you want to use more complex views means more
>>customization in list items, please avoid ArrayAdapter and use custom
>>adapters.

Below is Array Adapter code:

> ArrayAdapter adapter = new ArrayAdapter\<String>(this,R.layout.ListView,R.textView,StringArray);

Below is the simple implementation of array adapter:

- In the **main activity** create a list view withing linear layout to store
data of the list.

>\<?xml version=\"1.0\" encoding=\"utf-8\"?>\
>\<LinearLayout\
>xmlns:android=\"http://schemas.android.com/apk/res/android\" \
>xmlns:tools=\"http://schemas.android.com/tools\" \
>android:layout_width=\"match_parent\"\
>android:layout_height=\"match_parent\"\
>android:orientation=\"vertical\"\
>tools:context=\".MainActivity\" \>\
>\<ListView\
>android:id=\"@+id/mobile_list\"\
>android:layout_width=\"match_parent\"\
>android:layout_height=\"wrap_content\" \>\
></ListView>\
></LinearLayout>

- Create a **new XML file** for defining the layout of a single item in the
list.

>\<?xml version=\"1.0\" encoding=\"utf-8\"?>\
>\<TextView xmlns:android=\"http://schemas.android.com/apk/res/android\" \
>android:id=\"@+id/label\"\
>android:layout_width=\"fill_parent\"\
>android:layout_height=\"fill_parent\"\
>android:padding=\"10dip\"\
>android:textSize=\"16dip\"\
>android:textStyle=\"bold\" \>\
>\</TextView>

- In the **Main java class** use an array adapter to display the content of
array in form of a list.

>public class MainActivity extends AppCompatActivity {\
>String\[\] Array = {\"A\",\"I\",\"W\",\"B\",\"W\",\"U\",\"Y\",\"M\"};\
><br>
>\@Override\
><br>
>protected void onCreate(Bundle savedInstanceState) {\
>super.onCreate(savedInstanceState);\
>setContentView(R.layout.*activity_main*);\
>ArrayAdapter adapter = new ArrayAdapter\<String>(this,R.layout.*activity_list*, Array);\
>ListView listView = (ListView) findViewById(R.id.*mobile_list*);\
>listView.setAdapter(adapter);\
>}\
>}

Output of the above code will look like: 

![Screenshot (159)](https://user-images.githubusercontent.com/58635404/134676524-013a653d-7e89-4834-8115-a1f3942bd1cd.png)


**2. Base Adapter:**

BaseAdapter is a common base class of a general implementation of an
Adapter that can be used in ListView. Whenever you need a customized
list you create your own adapter and extend the base adapter in that.
Base Adapter can be extended to create a custom Adapter for displaying a
custom list item. ArrayAdapter is also an implementation of BaseAdapter. <br>

Below is the simple List view application using the base adapter.

- In the **activity_main.xml** create a list view withing linear layout to store
data of the list.

>\<?xml version=\"1.0\" encoding=\"utf-8\"?>\
>\<LinearLayout \
>xmlns:android=\"http://schemas.android.com/apk/res/android\" \
>android:layout_width=\"match_parent\" \
>android:layout_height=\"match_parent\" \
>android:orientation=\"vertical\"\> \
>\<ListView \
>android:id=\"@+id/simpleListView\" \
>android:layout_width=\"fill_parent\" \
>android:layout_height=\"wrap_content\" \
>android:divider=\"\@color/material_blue_grey_800\" \
>android:dividerHeight=\"1dp\" \ 
>android:footerDividersEnabled=\"false\" /> \
>\</LinearLayout> 

- Create a **new XML file** for defining the layout of a single item in the
list.

>\<?xml version=\"1.0\" encoding=\"utf-8\"?> \
>\<LinearLayout \
>xmlns:android=\"http://schemas.android.com/apk/res/android\" \
>android:layout_width=\"match_parent\" \
>android:layout_height=\"match_parent\" \
>android:orientation=\"horizontal\"\> \
>\<ImageView \
>android:id=\"@+id/icon\" \
>android:layout_width=\"50dp\" \
>android:layout_height=\"50dp\" \
>android:src=\"\@drawable/ic_launcher_foreground\" /> \
>\<TextView \
>android:id=\"@+id/textView\" \
>android:layout_width=\"fill_parent\" \
>android:layout_height=\"wrap_content\" \
>android:paddingTop=\"15dp\" \
>android:textColor=\"\@color/black\" /> \
>\</LinearLayout>

- Now create another java class Custom Adapter which will extend **BaseAdapter**. <br>
Below is the code of CustomAdapter.java

>package com.example.a3rdclass;\
>import android.content.Context;\
>import android.view.LayoutInflater;\
>import android.view.View;\
>import android.view.ViewGroup;\
>import android.widget.BaseAdapter;\
>import android.widget.ImageView;\
>import android.widget.TextView;\
>public class CustomAdapter extends BaseAdapter { \
>Context context;\
>String names\[\]; \
>int dogs\[\];\
>LayoutInflater inflter; \
>public CustomAdapter(Context context, String\[\] names, int\[\] dogs) { \
>this.context = context;\
>this.names = names;\
>this.dogs = dogs;\
>inflter = (LayoutInflater.*from*(context));; \
>}\
><br>
>\@Override \
><br>
>public int getCount() { \
>return names.length; \
>}\
><br>
>\@Override  \
><br>
>public Object getItem(int i) { \
>return null;\
>}\
><br>
>\@Override  \
><br>
>public long getItemId(int i) {\
> return 0; \
>}\
><br>
> \@Override  \
><br>
>public View getView(int i, View view, ViewGroup viewGroup) { \
>view = inflter.inflate(R.layout.*activity_list*, null); \
>TextView name = (TextView) view.findViewById(R.id.*textView*); \
>ImageView icon = (ImageView) view.findViewById(R.id.*icon*); \
>name.setText(names\[i\]); \
>icon.setImageResource(dogs\[i\]);\
>return view; \
>}\
>}

- In the third step, we will use a custom adapter to display the pet dog names in UI by coding **MainActivity.java**. Below is the code of MainActivity.java

>> **Important Note:** Make sure the images are stored in a drawable folder
>> present inside the res folder with correct naming.

>package com.example.a3rdclass;\
>import androidx.appcompat.app.AppCompatActivity;\
>import android.app.Activity;\
>import android.os.Bundle;\
>import android.webkit.WebView;\
>import android.widget.ArrayAdapter;\
>import android.widget.ListAdapter;\
>import android.widget.ListView;\
>public class MainActivity extends Activity {\
>ListView simpleList;\

>String names\[\] = {\"tommy\", \"jerry\", \"kuel\", \"ruby\",\"barry\",\"mimo\"};\

>int dogs\[\] ={R.drawable.*daniel_lincoln_ie2z11zksso_unsplash*, R.drawable.*karsten_winegeart_cre553zfmtg_unsplash*, R.drawable.*sq_lim_k4vhuuhv08o_unsplash*, >R.drawable.*\_90954*, R.drawable.*k>arsten_winegeart_qb7d1xw28co_unsplash*, R.drawable.*karsten_winegeart_tucvnmovxfq_unsplash*};\
><br>
>\@Override\
><br>
>protected void onCreate(Bundle savedInstanceState) {\
>super.onCreate(savedInstanceState);\
>setContentView(R.layout.*activity_main*);\
>simpleList = (ListView) findViewById(R.id.*simpleListView*);\
>CustomAdapter customAdapter = new CustomAdapter(getApplicationContext(),names, dogs);\
>simpleList.setAdapter((ListAdapter) customAdapter);\
>}\
>}

Output of the above code will look like this :

![Screenshot (161)](https://user-images.githubusercontent.com/58635404/134681646-17eb4c73-8089-4fb5-a146-f49c169f51d8.png)

