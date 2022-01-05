# Progress Bar
Progress Bar is used to determine how much an event has progressed or is in progress. It can be done in two modes: Indeterminant and Determinant.

An Indeterminate Progress Bar is used when we do not know how long an event will take place. It is commonly seen in Apps when some page is being loaded or some action is to be starting soon. 

<p align="center">
    <img src="https://user-images.githubusercontent.com/79036525/136501677-220e4167-4c4b-492d-87d4-7f40b17f8da8.png">
 </p>


     <ProgressBar
          android:id="@+id/progressBar"
          android:layout_width="wrap_content"
          android:layout_height="wrap_content"
          android:indeterminateTint="#5E35B1"/>  <!-- Used to change the colour of the Progress Bar-->
            

We usually set the visibility of this widget to INVISIBLE. When an action starts we set its mode to VISIBLE and again set it to INVISIBLE when an action ends.
 
     <ProgressBar
            android:id="@+id/progressBar"
            android:layout_width="wrap_content"
            android:layout_height="wrap_content"
            android:visibility="invisible"/>
            
  Within Java:
  
     // When activity starts
     progressBar.setVisibility(View.VISIBLE);
     
     // When activity ends
     progressBar.setVisibility(View.INVISIBLE);
         
         
         
  Determinate Progress Bars show how much an event has progressed.
  
  <p align="center">
    <img src="https://user-images.githubusercontent.com/79036525/136580742-f37ecfae-1300-4f68-b256-25d23aea8d73.png">
 </p>

         <ProgressBar
                android:id="@+id/progressBar"
                style="?android:attr/progressBarStyleHorizontal"
                android:layout_width="match_parent"
                android:layout_height="wrap_content"
                android:progress="30"
                android:progressTint="@color/purple_700"
                android:progressBackgroundTint="@color/purple_500"/>
  
 
 
 Progress Bars can be of different styles:
 
 1)
 
  <p align="center">
    <img src="https://user-images.githubusercontent.com/79036525/136581090-09fd9422-099a-4dc5-a5af-b9ef1ff9cf03.png">
 </p>
 
 
     <ProgressBar
            android:id="@+id/progressBar"
            style="@android:style/Widget.ProgressBar"
            android:layout_width="wrap_content"
            android:layout_height="wrap_content" />
            
            
 2)
 
  <p align="center">
    <img src="https://user-images.githubusercontent.com/79036525/136581552-98c8edc6-972a-4ab5-9ba4-e76691371646.png">
 </p>
 
 
      <ProgressBar
        android:id="@+id/progressBar"
        style="@android:style/Widget.ProgressBar.Horizontal"
        android:layout_width="match_parent"
        android:layout_height="wrap_content"
        android:progress="30"
        android:progressBackgroundTint="@color/purple_200"
        android:progressTint="@color/purple_700" />
        
  3)
 
  <p align="center">
    <img src="https://user-images.githubusercontent.com/79036525/136581799-eb509c5b-d943-4207-a59d-143a483f7cf0.png">
 </p>
 
      <ProgressBar
        android:id="@+id/progressBar"
        style="@android:style/Widget.ProgressBar.Large.Inverse"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"/>
        
  
  
