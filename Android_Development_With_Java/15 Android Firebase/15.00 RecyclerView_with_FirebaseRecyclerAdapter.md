# Firebase RecyclerView

Firebase is one of the most popular online databases in use today.
Firebase offers a Realtime Database that can be used to store and retrieve data in real-time to all users.
Today, let’s connect the Realtime Database with an Android application and show the data in RecyclerView using the FirebaseUI (FirebaseRecyclerAdapter). 
FirebaseUI is an open-source library for Android that provides to quickly connect common UI elements to Firebase APIs.

We are going to Learn,
+ How to create a Firebase project and add some data manually to show in the app.
+ How to create an Android project and add Firebase and FirebaseUI support in it.
+ How to add RecyclerView in the android app and display the data in Firebase Realtime Database.

### 1) Create a Firebase Project
+ Go to https://console.firebase.google.com/
+ Log in to Firebase with your Google account.
+ Click on create the project.

### 2) Give a name to the project
+ Write the name.
+ Click on continue.


### 3) Connect app with Firebase

+ Click on the Android icon in the Project Overview section.

<br>
<p align="center">
<img src="https://user-images.githubusercontent.com/65021072/138915791-d88edf82-8259-48a1-8c2b-a3d08da2ec65.png" 
style="width:250;
       height:250
       display: block;
       " />
</p>
<br>

+ Add application package name according to your app, then add app name (optional). Click on Register the app.

<br>
<p align="center">
<img src="https://user-images.githubusercontent.com/65021072/138915850-422ca861-abe8-49de-ad67-4af2b7c9d09d.png" 
style="width:250;
       height:250
       display: block;
       " />
</p>
<br>


+ Now Download **“google-services.json”** file. Add this file at AndroidStudioProjects\gwoc\app\ (you can also see in picture). Click on Next.

+ Add all Required Dependencies to **build.gradle** file.

### 4) Create a Realtime Database

+ Go to Build Option on Sidebar.
+	Click on Realtime Database.
+	Click on Create Realtime Database on Realtime Database.
+	Select Start in Test mode.
+	Click enable.
+	Add data to the database using the ‘+’ symbol in the database in the same manner as given in the picture.

<br>
<p align="center">
<img src="https://user-images.githubusercontent.com/65021072/138917580-30bad5e4-b65f-4b38-af05-b40897f3bc15.png" 
style="width:250;
       height:250
       display: block;
       " />
</p>
<br>

+ Add the following dependency in your **app/build.gradle** file in order to get the FirebaseUI and Firebase Realtime Database support in the app. Also add Material UI for CardView.


```
dependencies {
        // Dependency FirebaseUI for Firebase Realtime Database
        implementation 'com.firebaseui:firebase-ui-database:6.2.1'

        // Dependency for Firebase Realtime Database
        implementation 'com.google.firebase:firebase-database:19.3.1'

        // This dependency includes all material components of the android app.
        implementation 'com.google.android.material:material:1.1.0'
}
```

### 5) Android Studio Code

+	First, add Recycler View in the **activity_main.xml** and name it recycler1 paste the given code in the **activity_main.xml** file in order to do so.


```XML

<?xml version="1.0" encoding="utf-8"?>
<androidx.constraintlayout.widget.ConstraintLayout
    xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    xmlns:tools="http://schemas.android.com/tools"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    tools:context=".MainActivity">

    <androidx.recyclerview.widget.RecyclerView
        android:id="@+id/recycler1"
        android:layout_width="match_parent"
        android:layout_height="match_parent"
        android:background="#FD9473"/>

</androidx.constraintlayout.widget.ConstraintLayout>
```


+ Now, let’s create another XML file in the layout directory to store the data from the database of an item. We will name the file as **items.xml**. Copy the following code in the created file.

``` XML

<?xml version="1.0" encoding="utf-8"?>
<androidx.cardview.widget.CardView
    xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    xmlns:tools="http://schemas.android.com/tools"
    android:layout_width="match_parent"
    android:layout_height="wrap_content"
    android:layout_marginHorizontal="10dp"
    android:layout_marginTop="10dp"
    android:layout_marginBottom="10dp"
    android:scrollbars="vertical"
    app:cardCornerRadius="20dp">

    <androidx.constraintlayout.widget.ConstraintLayout
        android:layout_width="match_parent"
        android:layout_height="match_parent">

        <TextView
            android:id="@+id/textView1"
            android:layout_width="wrap_content"
            android:layout_height="wrap_content"
            android:layout_marginStart="16dp"
            android:layout_marginTop="16dp"
            android:text="Name: "
            android:textColor="@color/black"
            android:textStyle="bold"
            app:layout_constraintStart_toStartOf="parent"
            app:layout_constraintTop_toTopOf="parent" />

        <TextView
            android:id="@+id/name"
            android:layout_width="0dp"
            android:layout_height="wrap_content"
            android:layout_marginStart="16dp"
            android:layout_marginTop="16dp"
            android:layout_marginEnd="16dp"
            android:text="TextView"
            android:textColor="@color/black"
            app:layout_constraintEnd_toEndOf="parent"
            app:layout_constraintStart_toEndOf="@+id/textView1"
            app:layout_constraintTop_toTopOf="parent" />

        <TextView
            android:id="@+id/textView3"
            android:layout_width="wrap_content"
            android:layout_height="wrap_content"
            android:layout_marginStart="16dp"
            android:layout_marginTop="16dp"
            android:layout_marginBottom="16dp"
            android:text="Id: "
            android:textColor="@color/black"
            android:textStyle="bold"
            app:layout_constraintBottom_toBottomOf="parent"
            app:layout_constraintStart_toStartOf="parent"
            app:layout_constraintTop_toBottomOf="@+id/textView1" />

        <TextView
            android:id="@+id/id"
            android:layout_width="0dp"
            android:layout_height="wrap_content"
            android:layout_marginStart="16dp"
            android:layout_marginTop="16dp"
            android:layout_marginEnd="16dp"
            android:layout_marginBottom="16dp"
            android:text="TextView"
            android:textColor="@color/black"
            app:layout_constraintBottom_toBottomOf="parent"
            app:layout_constraintEnd_toEndOf="parent"
            app:layout_constraintStart_toEndOf="@+id/textView3"
            app:layout_constraintTop_toBottomOf="@+id/name" />

    </androidx.constraintlayout.widget.ConstraintLayout>
</androidx.cardview.widget.CardView>

```

+ After this, we have to create a java file to fetch and store data of a particular Student from the database and give it to Recycler View one by one. Create **Model.java** in the same folder in which **MainActivity.java** file is present. Paste the following code in the file.

``` JAVA
package com.example.gwoc;

public class Model {

    private String name, id;

    public Model(){

    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getId() {
        return id;
    }

    public void setId(String id) {
        this.id = id;
    }
}

```

+ In order to show the data from **Model.java** in **items.xml**, we have to create an Adapter class. Create another java file named **Adapter.java** in the same folder as **MainActivity.java** and paste the following code.

``` JAVA
package com.example.gwoc;

import android.util.Log;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;

import androidx.annotation.NonNull;
import androidx.recyclerview.widget.RecyclerView;

import com.firebase.ui.database.FirebaseRecyclerAdapter;
import com.firebase.ui.database.FirebaseRecyclerOptions;

public class Adapter extends FirebaseRecyclerAdapter<Model, Adapter.itemViewholder> {

    public Adapter(@NonNull FirebaseRecyclerOptions<Model> options) {
        super(options);
    }

    @Override
    protected void onBindViewHolder(@NonNull itemViewholder holder, int position, @NonNull Model model) {
        holder.name.setText(model.getName());
        holder.id.setText(model.getId());
    }

    @NonNull
    @Override
    public itemViewholder onCreateViewHolder(@NonNull ViewGroup parent, int viewType) {
        View view = LayoutInflater.from(parent.getContext()).inflate(R.layout.items, parent, false);
        return new itemViewholder(view);
    }

    public static class itemViewholder extends RecyclerView.ViewHolder {
        TextView name, id;
        public itemViewholder(@NonNull View itemView)
        {
            super(itemView);
            name = itemView.findViewById(R.id.name);
            id = itemView.findViewById(R.id.id);
        }
    }
}

```

+ Then we have called the database and ask for data from it. This will be done in **MainActivity.java** itself.

``` JAVA

package com.example.gwoc;

import androidx.appcompat.app.AppCompatActivity;
import androidx.recyclerview.widget.LinearLayoutManager;
import androidx.recyclerview.widget.RecyclerView;

import android.os.Bundle;
import android.util.Log;

import com.firebase.ui.database.FirebaseRecyclerOptions;
import com.google.firebase.database.DatabaseReference;
import com.google.firebase.database.FirebaseDatabase;

public class MainActivity extends AppCompatActivity {

    private RecyclerView recyclerView;
    Adapter adapter;
    DatabaseReference mbase;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        mbase = FirebaseDatabase.getInstance().getReference("home");
        recyclerView = findViewById(R.id.recycler1);
        recyclerView.setLayoutManager(new LinearLayoutManager(this));

        FirebaseRecyclerOptions<Model> options
                = new FirebaseRecyclerOptions.Builder<Model>()
                .setQuery(mbase, Model.class)
                .build();

        adapter = new Adapter(options);
        recyclerView.setAdapter(adapter);
    }

    @Override
    protected void onStart()
    {
        super.onStart();
        adapter.startListening();
    }

    @Override
    protected void onStop()
    {
        super.onStop();
        adapter.stopListening();
    }
}


```

+ Before running the project In **AndroidManifest.xml**, one needs to include below permission, in order to access the internet:


```
<uses-permission android:name="android.permission.INTERNET"/>

```

### 6) Output

<br>
<p align="center">
<img src="https://user-images.githubusercontent.com/65021072/138921120-5c449a13-8811-4b72-81da-8693d8fc8641.png" 
style="width:25%;
       height:25%
       display: block;
       " />
</p>
<br>
