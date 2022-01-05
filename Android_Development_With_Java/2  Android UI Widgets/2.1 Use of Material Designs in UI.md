# MATERIAL UI DESIGNS
Material Components are one of the most powerful tools in building Apps with Professional UI. By uniting style, branding, interaction, and motion under a consistent set of principles and components, your Applications can realize their greatest design potential. It is a part of Android Jetpack.

## How Material Designs can be more powerful?
Let us compare the following two edit texts. Both the edit texts are meant here to input the name of the User.

![894d3b3d-e6cf-41cd-9c48-8089bf00529a](https://user-images.githubusercontent.com/79036525/135704275-c55a5b1d-0b82-416a-83ea-047a7679fd24.jpg)      
![210dc63f-ae3a-4233-9de9-788adf8eb1ff](https://user-images.githubusercontent.com/79036525/135704279-4b673ea2-a0b5-48fe-80f6-caa1e78dbbee.jpg)

On comparing the two, we will soon realize that the edit text in the first image is a more professional edit text than the one in the second one. It has more features as well which we will be learning soon enough.

## Getting Started with material UI

### Prerequisites:
1) Android Studio
2) XML and Java

To start with material designs you need to first include the following dependency in your app build.gradle file

    implementation 'com.google.android.material:material:1.4.0'
    
After adding this you need to sync your project.

# Components:

## Edit Text :
Edit texts are primarily used to take input from the User and perform tasks based on the input given. Material Design Edit Texts have quite a great professional look, which greatly enhances the App UI.

![image](https://user-images.githubusercontent.com/79036525/135707477-766d8d49-6247-4861-a78e-f77e2d31a9da.png)

The Code to implement material designs edit texts are :
    
        <com.google.android.material.textfield.TextInputLayout
                android:id="@+id/cName"
                style="@style/Widget.MaterialComponents.TextInputLayout.OutlinedBox.Dense"
                android:layout_width="match_parent"
                android:layout_height="wrap_content"
                android:layout_marginLeft="15dp"
                android:layout_marginRight="15dp"
                android:paddingLeft="5dp"
                android:paddingRight="5dp"
                app:boxCornerRadiusBottomEnd="10dp"
                app:boxCornerRadiusBottomStart="10dp"
                app:boxCornerRadiusTopEnd="10dp"
                app:boxCornerRadiusTopStart="10dp"
                app:boxStrokeColor="@color/theme"
                app:boxStrokeErrorColor="@color/error"
                app:boxStrokeWidth="3dp"
                app:errorEnabled="true">

            <com.google.android.material.textfield.TextInputEditText
                android:layout_width="match_parent"
                android:layout_height="wrap_content"
                android:fontFamily="@font/text"
                android:hint="Name"
                android:textAppearance="@style/TextAppearance.AppCompat.Small"
                android:textColor="@color/dark" />

        </com.google.android.material.textfield.TextInputLayout>
        
   This code gives us features to change the corner radius of the edit text box, the stroke color, stroke width and the error color. There are many other useful features which can be implemented using Material Design Edit Text Option.



## Buttons :
Buttons allows a user to perform some task on tapping it.
Material buttons can be further classified into 4 categories:
1) Toggle Button
2) Text Button
3) Outlined Button

#### Text Button:
![image](https://user-images.githubusercontent.com/79036525/135705635-c1933172-d1e2-4bf8-940d-ddb411501500.png)

Text Buttons are used to perform specific actions. For example, in the given picture, the this button is used to Save an information. To implement this typwe of button, the code is as follows:

    <androidx.appcompat.widget.AppCompatButton
              android:id="@+id/buttonsave"
              android:layout_width="match_parent"
              android:layout_height="wrap_content"
              android:background="@drawable/button"
              android:fontFamily="@font/button"
              android:text="  SAVE  "
              android:textColor="@color/white"
              android:padding="8dp"
              android:textSize="18dp"
              android:elevation="100dp"
              android:layout_margin="20dp"/>
              
#### Outlined Button:
Outlined buttons are medium-emphasis buttons. They contain actions that are important, but aren’t the primary action in an app.
Example of such a button is as follows:

![image](https://user-images.githubusercontent.com/79036525/135706016-5b869bf9-70a0-47d3-a342-1b498dc294a5.png)


    <Button
            android:id="@+id/outlinedButton"
            style="?attr/materialButtonOutlinedStyle"
            android:layout_width="wrap_content"
            android:layout_height="wrap_content"
            android:layout_centerInParent="true"
            android:text="Outlined button"
            app:icon="@drawable/ic_baseline_add_24" />

#### Toggle Button:
The word "toggle" means to switch between options.

![image](https://user-images.githubusercontent.com/79036525/135705056-d85fd8ed-b271-45ca-946c-c371aef4d87d.png)

  In the following image, a User can switch between the various options just by clicking them. The code to implement this is as follows:
  
     <com.google.android.material.button.MaterialButtonToggleGroup
          android:id="@+id/toggleButton"
          android:layout_width="wrap_content"
          android:layout_height="wrap_content"
          android:layout_centerInParent="true">

        <Button
            android:id="@+id/btn1"
            style="?attr/materialButtonOutlinedStyle"
            android:layout_width="wrap_content"
            android:layout_height="wrap_content"
            android:text="START" />

        <Button
            android:id="@+id/btn2"
            style="?attr/materialButtonOutlinedStyle"
            android:layout_width="wrap_content"
            android:layout_height="wrap_content"
            android:text="RESUME" />

        <Button
            android:id="@+id/btn3"
            style="?attr/materialButtonOutlinedStyle"
            android:layout_width="wrap_content"
            android:layout_height="wrap_content"
            android:text="PAUSE" />

        <Button
            android:id="@+id/btn4"
            style="?attr/materialButtonOutlinedStyle"
            android:layout_width="wrap_content"
            android:layout_height="wrap_content"
            android:text="STOP" />
    </com.google.android.material.button.MaterialButtonToggleGroup>
    
 using the code below one can get the buton that has been selected by the User and can perform the necessary actions:

    toggleButton.addOnButtonCheckedListener { toggleButton, checkedId, isChecked ->
        // Respond to button selection
    }

Sometimes we often prefer to use toggle with icons rather than using text. For such cases we need to include the following code in the res/values/styles.xml:

    <style name="Widget.App.Button.OutlinedButton.IconOnly" parent="Widget.MaterialComponents.Button.OutlinedButton">
        <item name="iconPadding">0dp</item>
        <item name="android:insetTop">0dp</item>
        <item name="android:insetBottom">0dp</item>
        <item name="android:paddingLeft">12dp</item>
        <item name="android:paddingRight">12dp</item>
        <item name="android:minWidth">48dp</item>
        <item name="android:minHeight">48dp</item>
    </style>
    
 ![image](https://user-images.githubusercontent.com/79036525/135705493-f612c6e3-6bd3-437e-8f32-0e3aa1bcec7f.png)

    
  In the layout, we need to include the following code to get the above image:
  
     <com.google.android.material.button.MaterialButtonToggleGroup
        android:id="@+id/toggleButton"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:layout_centerInParent="true">

        <Button
            android:id="@+id/btn1"
            style="@style/Widget.App.Button.OutlinedButton.IconOnly"
            android:layout_width="wrap_content"
            android:layout_height="wrap_content"
            app:icon="@drawable/start" />

        <Button
            android:id="@+id/btn2"
            style="@style/Widget.App.Button.OutlinedButton.IconOnly"
            android:layout_width="wrap_content"
            android:layout_height="wrap_content"
            app:icon="@drawable/resume" />

        <Button
            android:id="@+id/btn3"
            style="@style/Widget.App.Button.OutlinedButton.IconOnly"
            android:layout_width="wrap_content"
            android:layout_height="wrap_content"
            app:icon="@drawable/pause" />

        <Button
            android:id="@+id/btn4"
            style="@style/Widget.App.Button.OutlinedButton.IconOnly"
            android:layout_width="wrap_content"
            android:layout_height="wrap_content"
            app:icon="@drawable/stop" />
    </com.google.android.material.button.MaterialButtonToggleGroup>
    
    
    
  ### A Sample UI using Material Design Edit Text and Buttons:
  
  ![image](https://user-images.githubusercontent.com/79036525/135707427-7f3ab263-8696-4178-8897-bb9c865fd6d3.png)
  
  
  ## Floating Action Button:
  A floating action button is usually used to perform a screen's primary action. It is one such feature which can be found in almost every app. And of course, if you have an App installed in your Mobile Phone, you too must have seen this button.
   The image below shows a floating action button as seen in Google Maps :
   
   ![image](https://user-images.githubusercontent.com/79036525/135707814-bff440d7-bd51-414b-b071-0d067eacc915.png)

It usually contains an icon, which has its own predefined meaning, easily understandable to the User.
![image](https://user-images.githubusercontent.com/79036525/135707962-d2f3ed27-39e8-4982-beab-714ddc8510a8.png)
   
     <com.google.android.material.floatingactionbutton.FloatingActionButton
              android:id="@+id/floating_action_button"
              android:layout_width="wrap_content"
              android:layout_height="wrap_content"
              android:layout_gravity="bottom|right"
              android:layout_margin="16dp"
              app:srcCompat="@drawable/ic_baseline_add_24"
              app:backgroundTint="@color/purple_700"
              app:tint="@color/white"
              android:layout_alignParentBottom="true"
              android:layout_alignParentEnd="true"/>
              
 The various functions of Floating Action Button include :
 1) Performing a common action, such as starting a new email in a mail app.
 2) Displaying additional related actions.
 3) Update or transforming into other UI elements on the screen.
              
  Sometimes we need to add more than one floating Action Button in our App. But using many such buttons in a single screen is not a good practice. In such cases we can use an Extended Floating Action Button. In this the Screen contains a single button, clicking which we get an option to navigate between multiple buttons, each having its own purpose.
For that, we need to create all the floating action buttons in the same position and create animation in them. This can be done using the following styles:
Default:

    Widget.MaterialComponents.ExtendedFloatingActionButton.Icon

Text-only when extended style:

    Widget.MaterialComponents.ExtendedFloatingActionButton


## Snackbar
Snackbars are used to create a temporary message which indicates the action the app will perform or has performed. It may contain an action text which performs some kind of action. Snackbars appear without warning, and don't require user interaction. They automatically disappear from the screen after a minimum of four seconds, and a maximum of ten seconds. This duration depends on the available presets. Available duration presets are:
  *  LENGTH_INDEFINITE (Show the snackbar until it's either dismissed or another snackbar is shown)
  *  LENGTH_LONG (Show the snackbar for a long period of time)
  *  LENGTH_SHORT (Show the snackbar for a short period of time)

Snackbars work best if they are displayed inside a CoordinatorLayout. This Layout allows the snackbar to enable behavior like swipe-to-dismiss, as well as automatically moving widgets like FloatingActionButton.

![image](https://user-images.githubusercontent.com/79036525/135716874-08832d17-8f68-4c09-959e-1f7f4af036f6.png)

To implement a this widget the following Java code needs to be added:
    
    final Snackbar snackbar=Snackbar.make(coordinatorLayout,"Text Label",Snackbar.LENGTH_INDEFINITE).setAction("ACTION", new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                // perform the necessary action here
            }
        });
        View view=snackbar.getView();
        TextView textView=view.findViewById(R.id.snackbar_text);
        snackbar.show();
        
 ## Bottom Sheets
 This widget is used to contain supplementary information. They are anchored at the bottom of the page. They may contain texts, edit texts, buttons, radio groups, etc. They have properties such as expand and collapse through which they can be expanded or collapsed respectively. The following is a sample code which shows an Activity containing two buttons and a Bottom Sheet.
 
 XML Code:
 
         <?xml version="1.0" encoding="utf-8"?>
         <androidx.coordinatorlayout.widget.CoordinatorLayout 
          xmlns:android="http://schemas.android.com/apk/res/android"
          xmlns:app="http://schemas.android.com/apk/res-auto"
          xmlns:tools="http://schemas.android.com/tools"
          android:layout_width="match_parent"
          android:layout_height="match_parent"
          tools:context=".MainActivity">

         <LinearLayout
             android:layout_width="match_parent"
             android:layout_height="match_parent"
             android:gravity="center_horizontal"
             android:orientation="vertical">

             <Button
                 android:id="@+id/button_expand"
                 android:layout_width="wrap_content"
                 android:layout_height="wrap_content"
                 android:text="expand" />

             <Button
                 android:id="@+id/button_collapse"
                 android:layout_width="wrap_content"
                 android:layout_height="wrap_content"
                 android:text="collapse" />

             <TextView
                 android:id="@+id/textView_state"
                 android:layout_width="wrap_content"
                 android:layout_height="wrap_content"
                 android:layout_marginTop="16dp"
                 android:text="state"
                 android:textColor="@android:color/black"
                 android:textSize="30sp" />
         </LinearLayout>

         <androidx.core.widget.NestedScrollView
             android:id="@+id/bottom_sheet"
             android:layout_width="match_parent"
             android:layout_height="350dp"
             android:background="@android:color/holo_blue_dark"
             app:behavior_hideable="true"
             app:behavior_peekHeight="55dp"
             app:layout_behavior="com.google.android.material.bottomsheet.BottomSheetBehavior">

             <TextView
                 android:id="@+id/textView2"
                 android:layout_width="match_parent"
                 android:layout_height="match_parent"
                 android:padding="16dp"
                 android:text="This is a bottom sheet\n\nBottom sheet is a sheet that slides up from the bottom edge of the screen."
                 android:textColor="@android:color/white"
                 android:textSize="16sp" />
         </androidx.core.widget.NestedScrollView>


         </androidx.coordinatorlayout.widget.CoordinatorLayout>
     
     
 Java Code :
 
        public class MainActivity extends AppCompatActivity {
             BottomSheetBehavior bottomSheetBehavior;
             TextView textView;
             Button buttonexpand, buttoncollapse;

         @Override
         protected void onCreate(Bundle savedInstanceState) {
             super.onCreate(savedInstanceState);
             setContentView(R.layout.activity_main);
             View bottomSheet = findViewById(R.id.bottom_sheet);
             bottomSheetBehavior = BottomSheetBehavior.from(bottomSheet);
             textView = findViewById(R.id.textView_state);
             buttonexpand = findViewById(R.id.button_expand);
             buttoncollapse = findViewById(R.id.button_collapse);

             buttonexpand.setOnClickListener(new View.OnClickListener() {
                 @Override
                 public void onClick(View v) {
                     bottomSheetBehavior.setState(BottomSheetBehavior.STATE_EXPANDED);
                 }
             });
             buttoncollapse.setOnClickListener(new View.OnClickListener() {
                 @Override
                 public void onClick(View v) {
                     bottomSheetBehavior.setState(BottomSheetBehavior.STATE_COLLAPSED);
                 }
             });
             bottomSheetBehavior.setBottomSheetCallback(new BottomSheetBehavior.BottomSheetCallback() {
                 @Override
                 public void onStateChanged(@NonNull View view, int i) {
                     switch (i) {
                         case BottomSheetBehavior.STATE_COLLAPSED:
                             textView.setText("Collapsed");
                             break;
                         case BottomSheetBehavior.STATE_EXPANDED:
                             textView.setText("Expanded...");
                             break;
                         case BottomSheetBehavior.STATE_HIDDEN:
                             textView.setText("Hidden...");
                             break;
                     }
                 }

                 @Override
                 public void onSlide(@NonNull View view, float v) {
                     textView.setText("Sliding...");
                 }
             });

         }
         }

The final screen after writing the above code will look like this: 

![image](https://user-images.githubusercontent.com/79036525/135718436-a9731022-5281-477d-a28a-4a34b17af6c1.png)

## Navigation Drawer
Navigation Drawer is usually used in Apps where one has to provide access to more than five destinations.

The following code is usually used to implement the Navigation Drawer in our App:

#### activity_main.xml

    <?xml version="1.0" encoding="utf-8"?>
     <androidx.drawerlayout.widget.DrawerLayout xmlns:android="http://schemas.android.com/apk/res/android"
         xmlns:app="http://schemas.android.com/apk/res-auto"
         xmlns:tools="http://schemas.android.com/tools"
         android:id="@+id/drawer_layout"
         android:layout_width="match_parent"
         android:layout_height="match_parent"
         android:fitsSystemWindows="true"
         tools:openDrawer="start">

         <LinearLayout
             android:layout_width="match_parent"
             android:layout_height="match_parent"
             android:orientation="vertical">

             <androidx.appcompat.widget.Toolbar
                 android:id="@+id/tool_bar"
                 android:layout_width="match_parent"
                 android:layout_height="?attr/actionBarSize"
                 android:background="@color/colorPrimary"
                 android:theme="@style/ThemeOverlay.AppCompat.Dark.ActionBar"
                 app:popupTheme="@style/ThemeOverlay.AppCompat.Light">

             </androidx.appcompat.widget.Toolbar>

             <FrameLayout
                 android:layout_width="match_parent"
                 android:layout_height="match_parent">

                // Dashboard Screen here
             </FrameLayout>
         </LinearLayout>


         <com.google.android.material.navigation.NavigationView
             android:id="@+id/nav_view"
             android:layout_width="wrap_content"
             android:layout_height="match_parent"
             android:layout_gravity="start"
             app:headerLayout="@layout/nav_header_main"
             app:menu="@menu/activity_main_drawer" />

     </androidx.drawerlayout.widget.DrawerLayout>

#### nav_header_main.xml

    <?xml version="1.0" encoding="utf-8"?>
     <LinearLayout xmlns:android="http://schemas.android.com/apk/res/android"
         xmlns:app="http://schemas.android.com/apk/res-auto"
         android:layout_width="match_parent"
         android:layout_height="160dp"
         android:background="@color/colorPrimaryDark"
         android:gravity="bottom"
         android:orientation="vertical"
         android:padding="16dp">

         <ImageView
             android:layout_width="wrap_content"
             android:layout_height="wrap_content"
             app:srcCompat="@mipmap/ic_launcher" /> <!-- Use any Image as per your App   --> 

         <TextView
             android:layout_width="wrap_content"
             android:layout_height="wrap_content"
             android:paddingTop="5dp"
             android:text="Girlscript Winter of Contribution" <!-- Use text as per your App  -->
             android:textAppearance="@style/TextAppearance.AppCompat.Body1"
             android:textColor="@android:color/white" />

      </LinearLayout>
      
   #### menu\activity_main_drawer.xml
  
 <!-- Add the items in your navigation bar  -->
       
       <?xml version="1.0" encoding="utf-8"?>
       <menu xmlns:android="http://schemas.android.com/apk/res/android"
          xmlns:tools="http://schemas.android.com/tools"
          tools:showIn="navigation_view">
      
          <group android:checkableBehavior="single">
              <item
                  android:id="@+id/nav_home"
                  android:icon="@drawable/ic_menu_home"
                 android:title="Home" />
             <item
                 android:id="@+id/nav_gallery"
                 android:icon="@drawable/ic_menu_gallery"
                 android:title="Gallery" />
             <item
                 android:id="@+id/nav_tools"
                 android:icon="@drawable/ic_menu_settings"
                 android:title="Settings" />
         </group>
     
         <item android:title="Communicate">
             <menu>
                 <item
                     android:id="@+id/nav_share"
                     android:icon="@drawable/ic_menu_share"
                     android:title="Share" />
                 <item
                     android:id="@+id/nav_send"
                     android:icon="@drawable/ic_menu_send"
                     android:title="Send" />
             </menu>
         </item>
     
     </menu>

#### strings.xml

    <resources>
         <string name="app_name">GWOC</string>
         <string name="open">Open navigation</string>
         <string name="close">Close navigation</string>
     </resources>
     
####  styles.xml

    <resources>
         <style name="AppTheme" parent="Theme.AppCompat.Light.DarkActionBar">
              <item name="colorPrimary">@color/colorPrimary</item>
              <item name="colorPrimaryDark">@color/colorPrimaryDark</item>
              <item name="colorAccent">@color/colorAccent</item>
          </style>

          <style name="AppTheme.NoActionBar">
             <item name="windowActionBar">false</item>
             <item name="windowNoTitle">true</item>
         </style>

         <style name="AppTheme.AppBarOverlay" parent="ThemeOverlay.AppCompat.Dark.ActionBar" />
         <style name="AppTheme.PopupOverlay" parent="ThemeOverlay.AppCompat.Light" />
     </resources>
     
  #### AndroidManifest.xml
  
      <activity
              android:name=".MainActivity"
              android:label="@string/app_name"
              android:theme="@style/AppTheme.NoActionBar">
              <intent-filter>
                  <action android:name="android.intent.action.MAIN" />

                  <category android:name="android.intent.category.LAUNCHER" />
              </intent-filter>
         </activity>
         
  #### MainActivity.java
  
        public class MainActivity extends AppCompatActivity implements NavigationView.OnNavigationItemSelectedListener {

           Toolbar toolbar;
           DrawerLayout drawerLayout;
           NavigationView navigationView;

           @Override
           protected void onCreate(Bundle savedInstanceState) {
               super.onCreate(savedInstanceState);
               setContentView(R.layout.activity_main);

               toolbar = findViewById(R.id.tool_bar);
               setSupportActionBar(toolbar);

               drawerLayout = findViewById(R.id.drawer_layout);
               ActionBarDrawerToggle toggle = new ActionBarDrawerToggle(this, drawerLayout, toolbar, R.string.open, R.string.close);
               drawerLayout.addDrawerListener(toggle);
               toggle.syncState();
               navigationView = findViewById(R.id.nav_view);
               navigationView.setNavigationItemSelectedListener(this);
           }

           @Override
           public boolean onNavigationItemSelected(MenuItem item) {
               // Handle navigation view item clicks here.
               switch (item.getItemId()) {
                   case R.id.nav_home:
                       Toast.makeText(this, "Home", Toast.LENGTH_SHORT).show();
                       break;
                   case R.id.nav_gallery:
                       Toast.makeText(this, "Gallery", Toast.LENGTH_SHORT).show();
                       break;
                   case R.id.nav_tools:
                      Toast.makeText(this, "Settings", Toast.LENGTH_SHORT).show();
                       break;
                   case R.id.nav_share:
                       Toast.makeText(this, "Share", Toast.LENGTH_SHORT).show();
                       break;
                   case R.id.nav_send:
                       Toast.makeText(this, "Send", Toast.LENGTH_SHORT).show();
                       break;
               }
               drawerLayout.closeDrawer(GravityCompat.START);
               return true;
           }
       }
       
       
       
 These are the basic types of Material Designs that we usually use in our Apps. Other Material Design Components include:
 
 * App Bars
 * Bottom Navigation
 * Dialogs
 * Date Pickers
 * Time Pickers
 * Cards
 * Checkbox
 * Chips
 * Dividers
 * Switches
 * Sliders
 * Tabs
 * Backdrop
 * Banner
 
 
#               ____________________________________________________________________________________________________________________________
 
