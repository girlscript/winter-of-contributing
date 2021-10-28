# Date picker in android

Android DatePicker is a user interface control which is used to select the date by day, month and year in our android application. DatePicker is used to ensure that the users will select a valid date.
Generally, in android DatePicker available in two modes, calendar mode and spinner mode.
We can create a DatePicker control in two ways either manually in XML file or create it in Activity file programmatically.
  
### Android DatePicker with Calendar Mode

```xml
<DatePicker
        android:id="@+id/datePicker1"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:datePickerMode="calendar"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.5"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"/>
```

<p align="center" width="50%"><img src="https://user-images.githubusercontent.com/80222700/139236930-a9533182-665f-4111-9997-7751b27dfdde.png"></p>

### Android DatePicker with Spinner Mode

```xml
<DatePicker
        android:id="@+id/datePicker1"
        android:layout_width="378dp"
        android:layout_height="268dp"
        android:datePickerMode="spinner"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.5"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"/>
```

<p align="center" width="50%"><img src="https://user-images.githubusercontent.com/80222700/139238082-c4278877-825f-49b0-9224-e677975ec7c5.png"></p>

If you observe the above result we got the DatePicker in both Spinner and Calendar modes to select the date.
To get only spinner mode date selection, then we need to set android:calendarViewShown="false" attribute in DatePicker control.

```xml
<DatePicker
        android:id="@+id/datePicker1"
        android:layout_width="378dp"
        android:layout_height="268dp"
        android:datePickerMode="spinner"
        android:calendarViewShown="false"/>
```

<p align="center" width="50%"><img src="https://user-images.githubusercontent.com/80222700/139238634-3868c300-f972-4af8-aa50-764a7ed0d8f8.png"></p>

### Methods of DatePicker
  
#### 1. setSpinnersShown(boolean shown): 
This method is used to set whether the spinner of the date picker is shown or not. We will set a Boolean value either true or false. True indicates spinner is shown, false indicates spinner is not shown. 
Default value for this function is true.

  ```java
DatePicker simpleDatePicker = (DatePicker)findViewById(R.id.simpleDatePicker); // initiate a date picker
simpleDatePicker.setSpinnersShown(false); // set false value for the spinner shown function
  ```
  
#### 2. getDayOfMonth():
This method is used to get the selected day of the month from the date picker. It returns an integer value.
    
  ```java
/*Add in Oncreate() funtion after setContentView()*/
DatePicker simpleDatePicker = (DatePicker) findViewById(R.id.simpleDatePicker); 
int day = simpleDatePicker.getDayOfMonth(); // get the selected day of the month
  ```
  
#### 3. getMonth():
This method is used to get the selected month from the date picker. It returns an integer value.

  ```java
DatePicker simpleDatePicker = (DatePicker)findViewById(R.id.simpleDatePicker); 
int month = simpleDatePicker.getMonth(); // get the selected month
  ```
  
#### 4. getYear():
This method is used to get the selected year from the date picker. It returns an integer value.

  ```java
DatePicker simpleDatePicker = (DatePicker)findViewById(R.id.simpleDatePicker); 
int year = simpleDatePicker.getYear(); // get the selected year
  ```
  
#### 5. getFirstDayOfWeek():
This method is used to get the first day of the week. It returns an integer value.

  ```java
DatePicker simpleDatePicker = (DatePicker)findViewById(R.id.simpleDatePicker); 
int firstDay=simpleDatePicker.getFirstDayOfWeek(); // get the first day of the week
  ```
  
### Attributes of DatePicker
 
1. android:datePickerMode - It is used to specify datepicker mode either spinner or calendar.

```xml
<DatePicker
        android:id="@+id/datePicker1"
        android:layout_width="378dp"
        android:layout_height="268dp"
        android:datePickerMode="spinner"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.5"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"/>
```

2. android:background - It is used to set the background color for the date picker.

```xml
<DatePicker
        android:id="@+id/datePicker1"
        android:layout_width="378dp"
        android:layout_height="268dp"
        android:datePickerMode="spinner"
        android:background="@color/teal_200"
        android:calendarViewShown="false"/>
```

<p align="center" width="50%"><img src="https://user-images.githubusercontent.com/80222700/139238964-faf9f610-7790-46a8-8d0c-6314f3ba5744.png"></p>

#### Setting background of DatePicker In Java Class:
  
 ```java
DatePicker simpleDatePicker=(DatePicker)findViewById(R.id.simpleDatePicker); // initiate a date picker
simpleDatePicker.setBackgroundColor(Color.BLUE); //  blue color for the background of a date picker
 ```
 
### Android DatePicker Example 

In this example of DatePicker, we show simple date picker and a Button in our xml file and perform click event on button. 
On clicking the button, the selected date having day of the month, month and  year is displayed on the app acreen.
 
#### Step 1: Write the XML Code

 ```xml
<?xml version="1.0" encoding="utf-8"?>
<androidx.constraintlayout.widget.ConstraintLayout xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    xmlns:tools="http://schemas.android.com/tools"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    tools:context=".MainActivity">

    <DatePicker
        android:id="@+id/datePicker"
        android:layout_width="341dp"
        android:layout_height="245dp"
        android:calendarViewShown="false"
        android:datePickerMode="spinner"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.193"
        tools:ignore="MissingConstraints" />

    <Button
        android:id="@+id/button"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:text="Get Date"
        android:textSize="20sp"
        android:textStyle="bold"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.5"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toBottomOf="@+id/datePicker" />

    <TextView
        android:id="@+id/textView"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:hint="Date"
        android:textSize="18sp"
        android:textStyle="bold"
        app:layout_constraintBottom_toTopOf="@+id/button"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.5"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toBottomOf="@+id/datePicker" />


</androidx.constraintlayout.widget.ConstraintLayout>
 ```
 
#### Step 2: Write the Java Code

 ```java
package com.example.datepickerapp;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.DatePicker;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    TextView textView;
    Button button;
    DatePicker datePicker;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        textView = findViewById(R.id.textView);
        button = findViewById(R.id.button);
        datePicker = findViewById(R.id.datePicker);
        button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                textView.setText("Selected Date: " + datePicker.getDayOfMonth() + "/" + (datePicker.getMonth() + 1) + "/" + datePicker.getYear());
            }
        });
    }
}
 ```
 
#### Step 3: Result
 
<p align="center" width="50%"><img src="https://user-images.githubusercontent.com/80222700/139243729-04752900-a5d6-4764-8324-f957a9e89815.gif"></p>
 
### Android DatePicker on EditText Click
   
In this example we show the use of date picker dialog in android app. For that we will use a button and a EditText. When we click on EditText control, we will 
get a dialog pop up, and on clicking the button we will get the selected date.

#### Step 1: Write the XML Code


 ```xml
<?xml version="1.0" encoding="utf-8"?>
<androidx.constraintlayout.widget.ConstraintLayout xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    xmlns:tools="http://schemas.android.com/tools"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    tools:context=".MainActivity">


    <Button
        android:id="@+id/button"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:text="Get Date"
        android:textSize="20sp"
        android:textStyle="bold"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.617" />

    <TextView
        android:id="@+id/textView"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:hint="Date"
        android:textSize="18sp"
        android:textStyle="bold"
        app:layout_constraintBottom_toTopOf="@+id/button"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.5"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toBottomOf="@+id/date" />

    <EditText
        android:id="@+id/date"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:ems="10"
        android:inputType="textPersonName"
        android:text="Enter Date"
        android:textSize="20sp"
        android:textStyle="bold"
        app:layout_constraintBottom_toTopOf="@+id/button"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.5"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent" />


</androidx.constraintlayout.widget.ConstraintLayout>
 ```
 
#### Step 2: Write the Java Code

 ```java
package com.example.datepickerapp;

import androidx.appcompat.app.AppCompatActivity;

import android.app.DatePickerDialog;
import android.os.Bundle;
import android.text.InputType;
import android.view.View;
import android.widget.Button;
import android.widget.DatePicker;
import android.widget.EditText;
import android.widget.TextView;

import java.util.Calendar;

public class MainActivity extends AppCompatActivity {

    TextView textView;
    Button button;
    EditText date;
    DatePickerDialog datePickerDialog;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        textView = findViewById(R.id.textView);
        date = findViewById(R.id.date);
        date.setInputType(InputType.TYPE_NULL);
        date.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                final Calendar cldr = Calendar.getInstance();
                int day = cldr.get(Calendar.DAY_OF_MONTH);
                int month = cldr.get(Calendar.MONTH);
                int year = cldr.get(Calendar.YEAR);
                // date picker dailog
                datePickerDialog = new DatePickerDialog(MainActivity.this, new DatePickerDialog.OnDateSetListener() {
                    @Override
                    public void onDateSet(DatePicker datePicker, int year, int month, int day) {
                        date.setText(day + "/" + (month + 1) + "/" + year);
                    }
                },year,month,day);
                datePickerDialog.show();
            }
        });
        button = findViewById(R.id.button);
        button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                textView.setText("Selected Date: " + date.getText());
            }
        });
    }
}
 ```
 
#### Step 3: Result
 
<p align="center" width="50%"><img src="https://user-images.githubusercontent.com/80222700/139245208-a857f2dd-059c-4a03-8e86-ff8e7ede564f.gif"></p>
