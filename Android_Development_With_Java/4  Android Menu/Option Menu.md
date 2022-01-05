# Option Menu

Menus are a common UI component in various applications. By using Options Menu, we can combine multiple options that are relevant to our current activity.
Menu Items are defined within Menu Resource Folder inside the Resource folder.

<p align="center">
    <img src="https://user-images.githubusercontent.com/79036525/136442605-bec276c2-316f-4434-96f3-76bdc023b1d1.png">
 </p>

#### menu\option_menu.xml

    <?xml version="1.0" encoding="utf-8"?>
      <menu xmlns:android="http://schemas.android.com/apk/res/android">
          <item
              android:id="@+id/one"
              android:title="History" />
          <item
              android:id="@+id/two"
              android:title="Downloads" />
          <item
             android:id="@+id/three"
             android:title="Settings" />
         <item
             android:id="@+id/four"
             android:title="Logout"/>
     </menu>
     
     
  #### MainActivity.java
  
         import androidx.annotation.NonNull;
         import androidx.appcompat.app.AppCompatActivity;
         import android.os.Bundle;
         import android.view.Menu;
         import android.view.MenuInflater;
         import android.view.MenuItem;
         import android.widget.Toast;


         public class MainActivity extends AppCompatActivity {

         @Override
         protected void onCreate(Bundle savedInstanceState) {
             super.onCreate(savedInstanceState);
             setContentView(R.layout.activity_main);

         }

         @Override
         public boolean onCreateOptionsMenu(Menu menu) {
             MenuInflater inflater = getMenuInflater();
             inflater.inflate(R.menu.option_menu, menu);
             return true;
         }

         @Override
         public boolean onOptionsItemSelected(@NonNull MenuItem item) {
             switch (item.getItemId()) {
             case R.id.one:
                Toast.makeText(this, "History", Toast.LENGTH_SHORT).show();
                return true;
            case R.id.two:
                Toast.makeText(this, "Downloads", Toast.LENGTH_SHORT).show();
                return true;
            case R.id.three:
                Toast.makeText(this, "Settings", Toast.LENGTH_SHORT).show();
                return true;
            case R.id.four:
                Toast.makeText(this, "Logout", Toast.LENGTH_SHORT).show();
                return true;
            default:
                return super.onOptionsItemSelected(item);
             }
         }
     }


<p align="center">
    <img src="https://user-images.githubusercontent.com/79036525/136445128-14722420-905e-4cde-83e6-198a6c1ea9d9.png">
 </p>
 <p align="center">    
    <img src="https://user-images.githubusercontent.com/79036525/136445404-7f544a7c-e531-4d6b-8399-786f03149591.png">
  </p> 

In order to create a menu we need to override two functions :
* @Override
    public boolean onCreateOptionsMenu(Menu menu)
*  @Override
    public boolean onOptionsItemSelected(@NonNull MenuItem item)
    
 The onCreateOptionsMenu() is used to create a Menu in the given Activity. The onOptionsItemSelected() is used to handle item clicks.
 
 To change the image on the toolbar, we can change the code in option_menu.xml as follows :
 
     <?xml version="1.0" encoding="utf-8"?>
    <menu xmlns:android="http://schemas.android.com/apk/res/android"
        xmlns:app="http://schemas.android.com/apk/res-auto">

        <item
            android:id="@+id/menu_icon"
            android:icon="@drawable/ic_baseline_settings_24"
            android:iconTint="@color/white"
            android:title="Settings"
            app:showAsAction="ifRoom">

            <menu>
                <item
                    android:id="@+id/one"
                    android:title="History" />
                <item
                    android:id="@+id/two"
                    android:title="Downloads" />

            </menu>
        </item>
    </menu>
    
    
  <p align="center">
    <img src="https://user-images.githubusercontent.com/79036525/136446869-a5275ae7-1d6b-4b45-b731-9cc79890e2a3.png">
 </p>
 
 The showAsAction attribute decides how our menus will be displayed.
 
 
 In order to add Options Menu to Fragments, the steps are almost similar to that with Activities. In both the cases the menus are displayed on the actionbar. However, if you want to display the fragment menus before Activity Menu, you can use the android:orderInCategory attribute as shown below. But when you detach the fragment, the fragment menu items will disappear from the action bar also.
 
     <item
            android:id="@+id/one"
            android:title="History"
            android:icon="@drawable/ic_baseline_history_24"
            android:orderInCategory="1"/>
            
    
  Inside the onCreate() method in Fragments, you need to write the following code :
  
       @Override
        public void onCreate(@Nullable Bundle savedInstanceState) {
            super.onCreate(savedInstanceState);
            // Confirm this fragment has menu items.
            setHasOptionsMenu(true);
        }
        
  After this, override the onCreateOptionsMenu(Menu menu) and onOptionsItemSelected(@NonNull MenuItem item) methods, similar to that as done in Activities.
  
  
 
