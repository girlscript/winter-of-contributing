# Android-Java: Drawable Resource Overview




A drawable resource is a concept for a graphic that is to be displayed on the screen and which can be retrieved by applying to another XML resource with attributes such as android:drawable and android:icon or with APIs such as `getDrawable(int)`. 
- **Drawable resource file can be refered as:**
   > _In Java:_ R.drawable.filename
   >
   > _In XML:_ @drawable/filename

There are several different types of drawables:

1. Inflate/paste an image resource (bitmap Image or file) in your project.
2. Create an XML resource file that defines the drawable properties.

    2.1. Create Custom Resource files.
 
           2.1.1 Layer List 
           2.1.2 State List (Selector)
           2.1.3 Level List
           2.1.4 Shape Drawable
           2.1.5 Scale Drawable
           2.1.6 Clip Drawable
           2.1.7 Transition Drawable
           2.1.8 Animation list Drawable       
    2.2. Create Image Assets.
    
    2.3. Create Vector Assets.




## 1. Inflate Image Resource file (Bitmap files):
- Android supports bitmap files in three formats: .png (preferred), .jpg (acceptable), .gif (discouraged).
- This is why, a bitmap file must be in .png, .jpg, or .gif extension.
- You can reference a bitmap file directly, using the filename as the resource ID, or create an alias resource ID in XML.
- Android creates a Drawable resource for any of these files when you save them in the res/drawable/ directory.
- **file location:**
   > res/drawable/filename.png (.png, .jpg, or .gif) 
- **syntax:**
   > With an image saved at res/drawable/myimage.png, this layout XML applies the image to a View as:
   ```bash
   <ImageView
       android:layout_height="wrap_content"
       android:layout_width="wrap_content"
       android:src="@drawable/myimage" />
   ```
- **Example:**
   1. Copy from system-
   
       <div align="center"><img src="https://user-images.githubusercontent.com/70523057/134815113-4d258e41-5bf1-4c4f-9f1f-89f110dcd049.png" width="400" ></div> 
   
   2. Right click and paste in drawable folder-
     <div align="center"><img src="https://user-images.githubusercontent.com/70523057/134814909-9a76c86d-8e50-4260-b14d-c1ce23a651ef.png" width="600" ></div> 
   3. Add image to drawable folder-
     <div align="center"><img src="https://user-images.githubusercontent.com/70523057/134815138-e2a5eb98-f4d1-4544-a20d-8de428b9c64d.png" width="600" ></div> 
   4. Give any name to the image-
   here it is android_image.png
     <div align="center"><img src="https://user-images.githubusercontent.com/70523057/134815201-22d49228-daf2-4663-a84d-d5a95a21fb70.png" width="500" ></div> 
   5. Inside the xml activity page add ImageView widget-
   
     ```bash
     <?xml version="1.0" encoding="utf-8"?>
        <LinearLayout xmlns:android="http://schemas.android.com/apk/res/android"
            xmlns:app="http://schemas.android.com/apk/res-auto"
            xmlns:tools="http://schemas.android.com/tools"
            android:layout_width="match_parent"
            android:layout_height="match_parent"
            tools:context=".MainActivity">
        
           <ImageView
               android:id="@+id/image"
               android:layout_width="150dp"
               android:layout_height="150dp"
               android:src="@drawable/android_image"/>
        
        </LinearLayout>
     ```
     > here, src is an attribute used to set a source file or you can say image in your imageview
   
   6. Drawable Image on Android Screen-
   
      <div align="center"><table><tr><td>
      <img src="https://user-images.githubusercontent.com/70523057/135032021-dfc62b6e-4cdd-470f-8c45-edb972a5f442.jpg" width="240" >
      </td></tr></table></div> 

## 2. Create an XML resource file that defines the drawable properties:

### 2.1. Create Custom Resource files. 
- **file location:**
   > res/drawable/filename.xml 

<br><br>

#### 2.1.1 Layer List 
> A Layer list is a drawable object that manages an array of other drawables. These are drawn in array order, so the element of the larger index will  be drawn first i.e. the last drawable in the list is drawn on top.
- Elements `<layer-list>`  must be the root element. Contains one or more `<item>` elements.
- Each drawable is represented by an `<item>` element inside a single `<layer-list>` element.
- **syntax:**
  ```bash
   <?xml version="1.0" encoding="utf-8"?>
   <layer-list
       xmlns:android="http://schemas.android.com/apk/res/android" >
      <item
        android:drawable="@drawable/drawable_resource"
        android:id="@+id/resource_name"
        android:top="dimension"
        android:right="dimension"
        android:bottom="dimension"
        android:left="dimension" />
   </layer-list>
  ```
- **Example:**
  1. Right click on drawable folder and create resource xml file-
  
     <div align="center"><img src="https://user-images.githubusercontent.com/70523057/134816211-bb12e446-553e-48e3-832f-5d820054ff4e.png" width="600" ></div> 
  
  2. Select the root element of xml and name the file-
  
     <div align="center"><img src="https://user-images.githubusercontent.com/70523057/134816287-9fc0490e-2a8b-473b-94ef-a64b43b08b78.png" width="600" ></div> 
  3. Added 3 drawable images of flowers in png format
  
  
  4. layers.xml
     ```bash
     <?xml version="1.0" encoding="utf-8"?>
     <layer-list xmlns:android="http://schemas.android.com/apk/res/android">
         <item>
             <bitmap android:src="@drawable/flower1"
                 android:gravity="center" />
         </item>
         <item android:top="100dp" android:left="100dp">
             <bitmap android:src="@drawable/flower2"
                 android:gravity="center" />
         </item>
         <item android:top="200dp" android:left="200dp">
             <bitmap android:src="@drawable/flower3"
                 android:gravity="center" />
         </item>
     </layer-list>
     ```
  
  5. activity_maim.xml
     ```bash
     <?xml version="1.0" encoding="utf-8"?>
     <RelativeLayout xmlns:android="http://schemas.android.com/apk/res/android"
         xmlns:app="http://schemas.android.com/apk/res-auto"
         xmlns:tools="http://schemas.android.com/tools"
         android:layout_width="match_parent"
         android:layout_height="match_parent"
         tools:context=".MainActivity">
        
            <ImageView
                android:id="@+id/image"
                android:layout_width="match_parent"
                android:layout_height="match_parent"
                android:src="@drawable/layers" />
       
     </RelativeLayout>
     ```
  6. Output in android Screen or Emulator-
  
     <div align="center"><table><tr><td>
      <img src="https://user-images.githubusercontent.com/70523057/134816702-ec6a38fd-ea17-4003-9cc6-190d072454a3.png" width="350" >
      </td></tr></table></div> 


   
   
----------------------------------------------------------------------------------------------------------------------------------------
` #NOTE ` 
 - All drawable items are scaled to fit the size of the containing View, by default. Thus, placing images in a layer list at different positions might increase the size of the View and some images scale as appropriate. 
   > Example,  scales fit its container View using item element:
   ```bash
   <item android:drawable="@drawable/image" />
   ```

- To avoid scaling items in the list, use a `<bitmap>` element inside the `<item>` element to specify the drawable and define the gravity.
  > For example:
   ```bash
   <item>
      <bitmap android:src="@drawable/image"
          android:gravity="center" />
   </item>
   ```
----------------------------------------------------------------------------------------------------------------------------------------
   
   
   
#### 2.1.2 State List (Selector)
> A StateList is a drawable object defined in XML that uses several different images to represent the bitmap graphic, depending on the state of the drawable. 
   - For example, a Button widget can exist in one of several different states (pressed, focused, or neither) and, using a state list drawable, you can provide a different background for each state.
   - Another example is, to use a different image when a button is pressed.

   >  Elements `<selector>` must be the root element. Contains one or more `<item>` elements. Each graphic is represented by an `<item>` element inside a single `<selector>` element. `<item>` uses various attributes to describe the state to used as the graphic for the drawable.

   > During each state change, the state list is traversed top to bottom and the first item that matches the current state is used—the selection is not based on the "best match," but simply the first item that meets the minimum criteria of the state.

- **syntax:**
  ```bash
   <?xml version="1.0" encoding="utf-8"?>
   <selector xmlns:android="http://schemas.android.com/apk/res/android"
       android:constantSize=["true" | "false"]
       android:dither=["true" | "false"]
       android:variablePadding=["true" | "false"] >
       <item
           android:drawable="@[package:]drawable/drawable_resource"
           android:state_pressed=["true" | "false"]
           android:state_focused=["true" | "false"]
           android:state_hovered=["true" | "false"]
           android:state_selected=["true" | "false"]
           android:state_checkable=["true" | "false"]
           android:state_checked=["true" | "false"]
           android:state_enabled=["true" | "false"]
           android:state_activated=["true" | "false"]
           android:state_window_focused=["true" | "false"] />
   </selector>
  ```
- **Example:**
  1. Create drawable resource xml file by selecting root element and name the file

     <div align="center"><img src="https://user-images.githubusercontent.com/70523057/134852542-6d4579ab-61a0-4a17-a72b-df3647c52311.png" width="600" ></div> 
  
  2. statelist.xml
  
     ```bash
     <?xml version="1.0" encoding="utf-8"?>
     <selector xmlns:android="http://schemas.android.com/apk/res/android">
             <item android:drawable="@color/teal_700" android:state_selected="true"></item>
             <item android:drawable="@color/purple_700" android:state_pressed="true"></item>
             <item android:drawable="@color/black"></item>
     </selector>
     ```
  
  3. activity_main.xml
  
     ```bash
     <?xml version="1.0" encoding="utf-8"?>
     <RelativeLayout xmlns:android="http://schemas.android.com/apk/res/android"
         xmlns:app="http://schemas.android.com/apk/res-auto"
         xmlns:tools="http://schemas.android.com/tools"
         android:layout_width="match_parent"
         android:layout_height="match_parent"
         tools:context=".MainActivity">
     
     <androidx.appcompat.widget.AppCompatButton
         android:layout_width="match_parent"
         android:layout_height="wrap_content"
        android:layout_margin="20dp"
        android:text="@android:string/ok"
        android:textColor="@color/white"
        android:background="@drawable/statelist"
         android:layout_centerInParent="true"/>
     
     </RelativeLayout>
     ```
  4. Output on Android Screen or Emulator-
     <div align="center" >


     https://user-images.githubusercontent.com/70523057/135059529-ad0da019-ca22-4639-a174-624e3d3c8b3d.mp4</div>
   
      
#### 2.1.3 Level List
> A Level list is a drawable that manages a number of alternate Drawables, each assigned a maximum numerical value. Setting the level value of the drawable with `setLevel()` loads the drawable resource in the level list that has a `android:maxLevel` value greater than or equal to the value passed to the method. 

> Elements `<level-list>` is always the root element. Contains one or more `<item>` elements.

- **syntax:**
  ```bash
   <?xml version="1.0" encoding="utf-8"?>
   <level-list
       xmlns:android="http://schemas.android.com/apk/res/android" >
       <item
           android:drawable="@drawable/drawable_resource"
           android:maxLevel="integer"
           android:minLevel="integer" />
   </level-list>
  ```
- **Example:**

  1. Right click on drawable folder and create resource xml file
     <div align="center"><img src="https://user-images.githubusercontent.com/70523057/134896654-40d3eaca-bc9d-4bca-80a9-4077f9e8da74.png" width="600" ></div> 
  2. levels.xml
     ```bash
     <?xml version="1.0" encoding="utf-8"?>
     <level-list xmlns:android="http://schemas.android.com/apk/res/android">
     
         <item
             android:drawable="@color/gray"
             android:maxLevel="1" />
         <item
             android:drawable="@color/teal_200"
             android:maxLevel="2" />
         <item
             android:drawable="@color/teal_700"
             android:maxLevel="3" />
     
     </level-list>
     ```
  
  3. activity_main.xml
     ```bash
     <?xml version="1.0" encoding="utf-8"?>
     <RelativeLayout xmlns:android="http://schemas.android.com/apk/res/android"
         xmlns:app="http://schemas.android.com/apk/res-auto"
         xmlns:tools="http://schemas.android.com/tools"
         android:layout_width="match_parent"
         android:layout_height="match_parent"
         tools:context=".MainActivity">
     
                <ImageView
                    android:id="@+id/level_list"
                    android:layout_width="200dp"
                    android:layout_height="400dp"
                    android:src="@drawable/levels"
                    android:layout_centerInParent="true"/>
     
     </RelativeLayout>
     ```
  
  4. MainActivity.java
     ```bash
     ImageView image= (ImageView)findViewById(R.id.level_list);
     image.setImageLevel(3);
     ```
     > Here, the maximum level of the level list is 3, therefore we can see the @color/teal_700 which of level 3,
  
  5. Output on Android Screen or Emulator
     <div align="center"><table><tr><td>
      <img src="https://user-images.githubusercontent.com/70523057/135048782-75459cf1-2125-422e-9d6c-4eb1600e6405.jpg" width="240" >
      </td></tr></table></div> 

<br>

#### 2.1.4 Shape Drawable
> An XML file that defines a geometric shape, including colors and gradients. Creates a GradientDrawable by customising.

> Here, elements `<shape>` drawable is always the root element.

- **syntax:**
  ```bash
   <?xml version="1.0" encoding="utf-8"?>
   <shape
       xmlns:android="http://schemas.android.com/apk/res/android"
       android:shape=["rectangle" | "oval" | "line" | "ring"] >
       <corners
           android:radius="integer"
           android:topLeftRadius="integer"
           android:topRightRadius="integer"
           android:bottomLeftRadius="integer"
           android:bottomRightRadius="integer" />
       <gradient
           android:angle="integer"
           android:centerX="float"
           android:centerY="float"
           android:centerColor="integer"
           android:endColor="color"
           android:gradientRadius="integer"
           android:startColor="color"
           android:type=["linear" | "radial" | "sweep"]
           android:useLevel=["true" | "false"] />
       <padding
           android:left="integer"
           android:top="integer"
           android:right="integer"
           android:bottom="integer" />
       <size
           android:width="integer"
           android:height="integer" />
       <solid
           android:color="color" />
       <stroke
           android:width="integer"
           android:color="color"
           android:dashWidth="integer"
           android:dashGap="integer" />
   </shape>
  ```
- **Example:**
  > Here, you can see the gradient example of shape drawable
  1. Right click on drawable folder and create resource xml file
  <div align="center"><img src="https://user-images.githubusercontent.com/70523057/134817156-170bf398-fb8e-47d2-88fa-d9c908b2173e.png" width="600" ></div> 
  
  2. shape1.xml
  
     ```bash
     <?xml version="1.0" encoding="utf-8"?>
     <shape xmlns:android="http://schemas.android.com/apk/res/android">
     
         <corners android:radius="4dp"/>
         <stroke android:color="@color/teal_700" android:width="2dp"/>
         <gradient android:startColor="@color/teal_200"
             android:endColor="@color/purple_500"/>
     </shape>
     ```
  
  3. activity_main.xml
     ```bash
     <?xml version="1.0" encoding="utf-8"?>
     <RelativeLayout xmlns:android="http://schemas.android.com/apk/res/android"
         xmlns:app="http://schemas.android.com/apk/res-auto"
         xmlns:tools="http://schemas.android.com/tools"
         android:layout_width="match_parent"
         android:layout_height="match_parent"
         tools:context=".MainActivity">
        
          <TextView
             android:layout_width="wrap_content"
             android:layout_height="wrap_content"
             android:layout_centerInParent="true"
             android:padding="10dp"
             android:textSize="30dp"
             android:text="@android:string/selectAll"
             android:background="@drawable/shape1"/>
           
     </RelativeLayout>
     ```
  
  4. Output on Android Screen or Emulator-
     <div align="center"><table><tr><td>
      <img src="https://user-images.githubusercontent.com/70523057/135036623-e87d0a56-7f36-4d80-99db-80546b858d92.png" width="240" >
      </td></tr></table></div> 
      
      
#### 2.1.5 Scale Drawable
> An XML file that defines a drawable which can  changes the size of another Drawable based on its current level value. 

> Here, elements `<scale>` is the root element.

- **syntax:**
  ```bash
   <?xml version="1.0" encoding="utf-8"?>
   <scale
       xmlns:android="http://schemas.android.com/apk/res/android"
       android:drawable="@drawable/drawable_resource"
       android:scaleGravity=["top" | "bottom" | "left" | "right" | "center_vertical" |
                             "fill_vertical" | "center_horizontal" | "fill_horizontal" |
                             "center" | "fill" | "clip_vertical" | "clip_horizontal"]
       android:scaleHeight="percentage"
       android:scaleWidth="percentage" />
  ```
- **Example:**
  1. Create drawable resource xml file by selecting root element and name the file
     <div align="center"><img src="https://user-images.githubusercontent.com/70523057/134942442-d8fcb786-e826-4f03-b3c4-58cbf9f9261d.png" width="600" ></div> 
  
  2. scale.xml
     ```bash
     <?xml version="1.0" encoding="utf-8"?>
     <scale xmlns:android="http://schemas.android.com/apk/res/android"
         android:drawable="@drawable/flower3"
         android:scaleGravity="center"
         android:scaleHeight="50%"
         android:scaleWidth="50%"
         />
     ```
  3. activity_main.xml
     ```bash
     <?xml version="1.0" encoding="utf-8"?>
     <RelativeLayout xmlns:android="http://schemas.android.com/apk/res/android"
         xmlns:app="http://schemas.android.com/apk/res-auto"
         xmlns:tools="http://schemas.android.com/tools"
         android:layout_width="match_parent"
         android:layout_height="match_parent"
         tools:context=".MainActivity">
     
                <ImageView
                    android:id="@+id/scaling_image"
                    android:layout_width="wrap_content"
                    android:layout_height="wrap_content"
                    android:src="@drawable/scale"
                    android:layout_centerInParent="true"/>
     
     </RelativeLayout>
     ```
  4. Output on Android Screen or Emulator-
     <div align="center"><table><tr>
     <td><img src="https://user-images.githubusercontent.com/70523057/135052768-78c260c5-88d4-4dc8-9077-d0e03167b487.jpg" width="240" ></td>
     <td><img src="https://user-images.githubusercontent.com/70523057/135052761-4e32b89e-5b5c-4feb-ac93-df2ab81d5256.jpg" width="240" ></td>
     </tr></table></div> 
   

#### 2.1.6 Clip Drawable
> An XML file that defines a drawable that clips another Drawable based on this Drawable's current level value. 

> You can control how much the child drawable gets clipped in width and height based on the level, as well as a gravity. 

> Most often used to implement things like progress bars.

- **syntax:**
  ```bash
   <?xml version="1.0" encoding="utf-8"?>
   <clip
       xmlns:android="http://schemas.android.com/apk/res/android"
       android:drawable="@drawable/drawable_resource"
       android:clipOrientation=["horizontal" | "vertical"]
       android:gravity=["top" | "bottom" | "left" | "right" | "center_vertical" |
                        "fill_vertical" | "center_horizontal" | "fill_horizontal" |
                        "center" | "fill" | "clip_vertical" | "clip_horizontal"] />
  ```
- **Example:**
  1. Create drawable resource xml file by selecting root element and name the file
     <div align="center"><img src="https://user-images.githubusercontent.com/70523057/134941927-60cd1b0e-10bf-46b6-9c64-0061346ea6a3.png" width="600" ></div> 
  
  2. clip.xml
     ```bash
     <?xml version="1.0" encoding="utf-8"?>
     <clip xmlns:android="http://schemas.android.com/apk/res/android"
         android:drawable="@drawable/flower2"
         android:clipOrientation="vertical"
         android:gravity="bottom"
         />
     ```
  3. activity_main.xml
  
     ```bash
     <?xml version="1.0" encoding="utf-8"?>
     <RelativeLayout xmlns:android="http://schemas.android.com/apk/res/android"
         xmlns:app="http://schemas.android.com/apk/res-auto"
         xmlns:tools="http://schemas.android.com/tools"
         android:layout_width="match_parent"
         android:layout_height="match_parent"
         tools:context=".MainActivity"
         android:background="@color/black">
     
                <ImageView
                    android:id="@+id/clipping_image"
                    android:layout_width="200dp"
                    android:layout_height="200dp"
                    android:src="@drawable/clip"
                    android:layout_centerInParent="true"/>
     
     </RelativeLayout>
     ```
   4. MainActivity.java
      ```bash
      ImageView imageview = (ImageView) findViewById(R.id.clipping_image);
      Drawable drawable = imageview.getBackground();
      if (drawable instanceof ClipDrawable) {
           ((ClipDrawable)drawable).setLevel(drawable.getLevel() + 5000);
      }
     ```
     
     
v.  Output on Android Screen or Emulator- 
       <div align="center"><table><tr><td>
      <img src="https://user-images.githubusercontent.com/70523057/135051034-3ee32c40-041f-48fe-8923-8ddbd03d4801.jpg" width="240" >
      </td></tr></table></div> 

     
#### 2.1.7 Transition Drawable
> A TransitionDrawable is a drawable object that can cross-fade between the two drawable resources.

> Each drawable is represented by an `<item>` element inside a single `<transition>` element. 
Only  two items are supported. 

> To transition forward, call `startTransition()`. 
> To transition backward, call `reverseTransition()`.

- **syntax:**
  ```bash
   <?xml version="1.0" encoding="utf-8"?>
   <transition
   xmlns:android="http://schemas.android.com/apk/res/android" >
       <item
           android:drawable="@[package:]drawable/drawable_resource"
           android:id="@[+][package:]id/resource_name"
           android:top="dimension"
           android:right="dimension"
           android:bottom="dimension"
           android:left="dimension" />
   </transition>
  ```
- **Example:**
  1. Create drawable resource xml file by selecting root element and name the file
     <div align="center"><img src="https://user-images.githubusercontent.com/70523057/134930432-c9f24a72-c5d2-4ddb-b614-6f54c7bf8b41.png" width="600" ></div> 
  2. transitions.xml
     ```bash
     <?xml version="1.0" encoding="utf-8"?>
     <transition xmlns:android="http://schemas.android.com/apk/res/android">
         <item android:drawable="@drawable/flower1"
             android:top="20dp"
             android:right="300dp"
             android:bottom="300dp"
             android:left="20dp" />
         <item android:drawable="@drawable/flower2"
             android:top="200dp"
             android:right="50dp"
             android:bottom="50dp"
             android:left="200dp" />
     </transition>
     ```

  3. activity_main.xml
     ```bash
     <?xml version="1.0" encoding="utf-8"?>
     <RelativeLayout xmlns:android="http://schemas.android.com/apk/res/android"
         xmlns:app="http://schemas.android.com/apk/res-auto"
         xmlns:tools="http://schemas.android.com/tools"
         android:layout_width="match_parent"
         android:layout_height="match_parent"
         tools:context=".MainActivity">
     
                <ImageView
                    android:id="@+id/transition"
                    android:layout_width="wrap_content"
                    android:layout_height="wrap_content"
                    android:src="@drawable/transitions"
                    android:layout_centerInParent="true"/>
     
     </RelativeLayout>
     ```
  4. MainActivity.java
     ```bash
     ImageView transit = (ImageView) findViewById(R.id.transition);
             Drawable drawable = transit.getDrawable();
             if (drawable instanceof TransitionDrawable) {
                 ((TransitionDrawable) drawable).startTransition(1000);
              } 
     ```

  5. Output on Android Screen or Emulator-
     <div align="center">

     
     https://user-images.githubusercontent.com/70523057/135058728-8b4f09f2-4730-49d6-a33f-f5179ac574dd.mp4
  </div>

#### 2.1.8 Animation List Drawable
> An object used to create **frame-by-frame** animations, defined by a series of Drawable objects, which can be used as a View object's background.
To run the animation we call `start()`.

> An AnimationDrawable defined in XML consists of a single `<animation-list>` element and a series of nested `<item>` tags. Each item defines a _frame_ of the animation. 

- **syntax:**
  ```bash
   <?xml version="1.0" encoding="utf-8"?>
   <animation-list android:id="@+id/selected" android:oneshot="false">
       <item android:drawable="@drawable/filename0" android:duration="milliseconds time" />
       <item android:drawable="@drawable/filename1" android:duration="milliseconds time" />
       <item android:drawable="@drawable/filename2" android:duration="milliseconds time" />
    </animation-list>
  ```
- **Example:**
  1. Create drawable resource xml file by selecting root element and name the file
     <div align="center"><img src="https://user-images.githubusercontent.com/70523057/134929947-9cd81aa0-42dd-46ba-874c-34dfc7accdf5.png" width="600" ></div> 
  2. Now create different vector assets to show the animation inside the res/drawable/ folder
  
  3. animations.xml
     ```bash
     <?xml version="1.0" encoding="utf-8"?>
     <animation-list xmlns:android="http://schemas.android.com/apk/res/android">
         <item android:drawable="@drawable/ic_baseline_looks_4_24" android:duration="100" />
         <item android:drawable="@drawable/ic_baseline_looks_3_24" android:duration="100" />
         <item android:drawable="@drawable/ic_baseline_looks_two_24" android:duration="100" />
         <item android:drawable="@drawable/ic_baseline_looks_one_24" android:duration="100" />
     </animation-list>
     ```
  
  4. activity_main.xml
     ```bash
     <?xml version="1.0" encoding="utf-8"?>
     <RelativeLayout xmlns:android="http://schemas.android.com/apk/res/android"
         xmlns:app="http://schemas.android.com/apk/res-auto"
         xmlns:tools="http://schemas.android.com/tools"
         android:layout_width="match_parent"
         android:layout_height="match_parent"
         tools:context=".MainActivity">
     
                <ImageView
                    android:id="@+id/changing_numbers"
                    android:layout_width="200dp"
                    android:layout_height="200dp"
                    android:src="@drawable/animations"
                    android:layout_centerInParent="true"/>
     
     </RelativeLayout>
     ```
  5. MainActivity.java
          
     ```bash
             ImageView img = (ImageView)findViewById(R.id.changing_numbers);
             img.setBackgroundResource(R.drawable.animations);
             // Get the background, which has been compiled to an AnimationDrawable object.
             AnimationDrawable frameAnimation = (AnimationDrawable) img.getBackground();
             // Start the animation.
             frameAnimation.start();
     ```
     > Here, we have load the ImageView which host the animation and set its background to our AnimationDrawable XML resource.

  6. Output on Android Screen or Emulator-
     <div align="center">

     
     https://user-images.githubusercontent.com/70523057/135058744-c9efcc42-fcbd-480d-884a-53090c2a89bf.mp4
  </div>


<br><br>
### 2.2. Create Image Assets.
> The drawable folder contains the different types of images used for the development of the application. So we need images in android applications to provide more user-friendly behavior & functionality. 

> Here, we are going to discuss how to add an image to the drawable folder with Image Asset method.

> _Steps_
  1. Right click on drawable folder and create **Image Assets**
     <div align="center"><img src="https://user-images.githubusercontent.com/70523057/134815730-35d9d6b3-f358-4e36-8f01-fb61e8c3d37b.png" width="600" ></div> 
  
  2. There are all over 3 types of assets inside, 
     we will be focusing at **image type**:
  
      <div align="center"><img src="https://user-images.githubusercontent.com/70523057/134947261-f82f1ed6-a0e9-4238-b80e-1ae59cd8d223.png" width="600" ></div> 
  
  3. These are the images file
  
     <div align="center"><img src="https://user-images.githubusercontent.com/70523057/134947737-058f2100-e170-40f0-a224-b7999a23d994.png" width="600" ></div> 
  
  4. Created a new folder for all the image assets according to their density-
  
     <div align="center"><img src="https://user-images.githubusercontent.com/70523057/134947837-10452854-2b05-4463-bc93-9d4f70bc9964.png" width="350" ></div> 
  
  5. Type 2: **Clip Art**
  
     <div align="center"><img src="https://user-images.githubusercontent.com/70523057/134946807-e33d1b9f-9d7a-4101-a3fb-66fda3676154.png" width="600" ></div> 
     
  6. Type 3: **Text**
   
     <div align="center"><img src="https://user-images.githubusercontent.com/70523057/134947100-ff560f13-4d6b-4f1f-a752-d52016734938.png" width="600" ></div> 

     `#NOTE:` 
     :-
     For more you can refer [Drawable pixel density](https://developer.android.com/training/multiscreen/screendensities)


### 2.3. Create Vector Assets.
> Vector Assets in Android Studio helps to add material icons and import Scalable Vector Graphics files into your project as vector drawable resources.

> **Image scalability is the major advantage of using the vector drawable.** 
> The same file can be resized for different screen sizes without loss of image quality which results in smaller APK files and less developer maintenance. We can also use vector images for animation. 

> _Steps_  
  1. Right click on drawable folder and create **Vector Assets**
    <div align="center"><img src="https://user-images.githubusercontent.com/70523057/134816111-9930b272-c115-4c73-90df-cddfbfe1e74c.png" width="600" ></div> 
  2. Select any one type and click on Clip Art to choose the assets
    <div align="center"><img src="https://user-images.githubusercontent.com/70523057/134815817-8ce3359d-de63-4e86-b1ab-2e74b19620d3.png" width="600" ></div> 
  3. Now select your vector
    <div align="center"><img src="https://user-images.githubusercontent.com/70523057/134815928-a2e3c9ef-e5ef-49f7-9ac9-a5f584b1ad28.png" width="600" ></div> 
  4. Choose any color you want
    <div align="center"><img src="https://user-images.githubusercontent.com/70523057/134816006-a841a4df-3e3f-490b-92b0-60ec2b5967ab.png" width="600" ></div> 
  5. Give name and can Adjust the size
    <div align="center"><img src="https://user-images.githubusercontent.com/70523057/134816082-bccd6ebf-70ca-4225-b0cc-81f46c76aa0c.png" width="600" ></div> 
  6. You can see, the file will be saved as the name of ic_add_photo.xml
    <div align="center"><img src="https://user-images.githubusercontent.com/70523057/134816098-07dcdd5a-9988-4a11-83ce-c92f8c43ed38.png" width="600" ></div> 
  
  7. This is how vector xml file looks like:
  
     ic_add_photo.xml
     ```bash
     <vector xmlns:android="http://schemas.android.com/apk/res/android"
         android:width="30dp"
         android:height="30dp"
         android:tint="#23AE7F"
         android:viewportWidth="24"
         android:viewportHeight="24">
         <path
             android:fillColor="@android:color/white"
             android:pathData="M3,4V1h2v3h3v2H5v3H3V6H0V4H3zM6,10V7h3V4h7l1.83,2H21c1.1,0 2,0.9 2,2v12c0,1.1 -0.9,2 -2,2H5c-1.1,0 -2,-0.9 -2,-2V10H6zM13,19c2.76,0 5,-2.24 5,-5s-2.24,-5 -5,-5s-5,2.24 -5,5S10.24,19 13,19zM9.8,14c0,1.77 1.43,3.2 3.2,3.2s3.2,-1.43 3.2,-3.2s-1.43,-3.2 -3.2,-3.2S9.8,12.23 9.8,14z" />
     </vector>
     ```

  
<br><br>
<br><br>
## References: 
- [Android Studio Developer](https://developer.android.com/guide/topics/resources/drawable-resource)
- [Geeks for Geeks](https://www.geeksforgeeks.org/how-to-create-drawable-resource-xml-file-in-android-studio/)
- [YouTube](https://www.youtube.com/results?search_query=drawable+in+android+studio/)
