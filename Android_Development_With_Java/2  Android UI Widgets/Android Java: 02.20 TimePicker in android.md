# TimePicker in Android

In Android, TimePicker is a widget used for selecting the time of the day in either AM/PM mode or 24 hours mode. 
Generally, in Android TimePicker available in two modes, clock mode and spinner mode. The displayed time consist of hours, minutes and clock format. It doesn't show time in seconds.

### TimePicker Code for Spinner Mode

```xml
<TimePicker
        android:id="@+id/simpleTimePicker"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:timePickerMode="spinner"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent" />
```
<p align="center" width="50%"><img src="https://user-images.githubusercontent.com/80222700/139093671-60f1307a-cbc1-469d-b76e-f8835a0dda14.png"></p>

We can change the TimePicker in spinner mode to 24 hour format instead of AM/PM format by using the setIs24HourView(false) method.

```java
 simpleTimePicker = (TimePicker) findViewById(R.id.simpleTimePicker);
 simpleTimePicker.setIs24HourView(true);
```

<p align="center" width="50%"><img src="https://user-images.githubusercontent.com/80222700/139095263-31f65d4d-df14-4cae-851b-d880d85df22b.png"></p>

### TimePicker Code for Clock Mode

```xml
<TimePicker
        android:id="@+id/simpleTimePicker"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:timePickerMode="clock"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent" />
```

<p align="center" width="50%"><img src="https://user-images.githubusercontent.com/80222700/139095594-95b27ddd-ff35-490b-b908-b0cedb7e17b5.png"></p>

### Methods of TimePicker

#### 1. setCurrentHour(Integer currentHour): 
This method is used to set the current hour in TimePicker.
   
```java
TimePicker simpleTimePicker=(TimePicker)findViewById(R.id.simpleTimePicker); // initiate the time picker
// set the value for current hours
simpleTimePicker.setCurrentHour(5); // use it before api level 23
simpleTimePicker.setHour(5); // use it from api level 23
```

#### 2. setCurrentMinute(Integer currentMinute): 
This method is used to set the current hour in TimePicker.       
 
```java
TimePicker simpleTimePicker=(TimePicker)findViewById(R.id.simpleTimePicker); 
// set the value for current minute
simpleTimePicker.setCurrentMinute(35); // use it before api level 23
simpleTimePicker.setMinute(35); // use it from api level 23
```

#### 3. getCurrentHour(): 
This method is used to get the current hour from TimePicker.       
 
```java
TimePicker simpleTimePicker = (TimePicker)findViewById(R.id.simpleTimePicker); 
pickerint hours =simpleTimePicker.getCurrentHour(); // use it before api level 23
int hours =simpleTimePicker.getHour(); // use it after api level 23
```

#### 4. getCurrentMinute(): 
This method is used to get the current minute from TimePicker.       
 
```java
TimePicker simpleTimePicker = (TimePicker)findViewById(R.id.simpleTimePicker); 
int minutes = simpleTimePicker.getCurrentMinute(); // use it before api level 23
int minutes = simpleTimePicker.getMinute(); // use it after api level 2
```

#### 5. setIs24HourView(Boolean is24HourView): 
This method is used to set the mode of the Time picker either 24 hour mode or AM/PM mode. We set a boolean value true or false. True value indicates 24 hour mode and false value indicates AM/PM mode.      
 
```java
TimePicker simpleTimePicker = (TimePicker)findViewById(R.id.simpleTimePicker); 
simpleTimePicker.setIs24HourView(true); // set 24 hours mode for the time picker
```

#### 6. setOnTimeChangedListener(TimePicker.OnTimeChangedListener onTimeChangedListener): 
This method is used to set the callback that indicates the time has been changed by the user. The parameters we needed are TimePicker, hour of the day and minutes. 

```java
TimePicker simpleTimePicker = (TimePicker)findViewById(R.id.simpleTimePicker); 
simpleTimePicker.setOnTimeChangedListener(new TimePicker.OnTimeChangedListener() {
@Override
public void onTimeChanged(TimePicker view, int hourOfDay, int minute) {

}
});
```

### Attributes of TimePicker

1. android:timePickerMode- It is used to specify timepicker mode, either spinner or clock.

```xml
<TimePicker
        android:id="@+id/simpleTimePicker"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:timePickerMode="clock"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent" />
```

2. android:background- It is used to set the background color for the date picker.

```xml
<TimePicker
        android:id="@+id/simpleTimePicker"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:timePickerMode="clock"
        android:background="@color/purple_200"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent" />
```

<p align="center" width="50%"><img src="https://user-images.githubusercontent.com/80222700/139095890-c349c7c1-a5e3-4a22-a87d-dc32fb896686.png"></p>

### Android TimePicker Example

We have a TextView and a button. On clicking the button we got to know the selected time on TextView.

#### Step 1: Write the XML Code

```xml
<?xml version="1.0" encoding="utf-8"?>
<androidx.constraintlayout.widget.ConstraintLayout xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    xmlns:tools="http://schemas.android.com/tools"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    tools:context=".MainActivity">

    <TimePicker
        android:id="@+id/simpleTimePicker"
        android:layout_width="358dp"
        android:layout_height="350dp"
        android:timePickerMode="clock"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.5"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.178" />

    <Button
        android:id="@+id/button"
        android:layout_width="123dp"
        android:layout_height="49dp"
        android:text="Get Time"
        android:textSize="16sp"
        android:textStyle="bold"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.5"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toBottomOf="@+id/textView"
        app:layout_constraintVertical_bias="0.304" />

    <TextView
        android:id="@+id/textView"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:layout_marginTop="108dp"
        android:hint="Time"
        android:textSize="22sp"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.498"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toBottomOf="@+id/simpleTimePicker" />

</androidx.constraintlayout.widget.ConstraintLayout>
```

#### Step 2: Write the Java Code

```java
package com.example.timepickerapp;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Build;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;
import android.widget.TimePicker;

public class MainActivity extends AppCompatActivity {

    TimePicker simpleTimePicker;
    Button button;
    TextView textView;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        simpleTimePicker = (TimePicker) findViewById(R.id.simpleTimePicker);
        simpleTimePicker.setIs24HourView(true);
        button = findViewById(R.id.button);
        textView = findViewById(R.id.textView);
        button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                int hour, minute;
                String am_pm;
                if (Build.VERSION.SDK_INT >= 23 ){
                    hour =  simpleTimePicker.getHour();
                    minute =  simpleTimePicker.getMinute();
                }
                else{
                    hour =  simpleTimePicker.getCurrentHour();
                    minute = simpleTimePicker.getCurrentMinute();
                }
                if(hour > 12) {
                    am_pm = "PM";
                    hour = hour - 12;
                }
                else
                {
                    am_pm="AM";
                }
                textView.setText(hour+":"+ minute + " " + am_pm);
            }
        });
    }
}
```

#### Result:

<p align="center" width="50%"><img src="https://user-images.githubusercontent.com/80222700/139103933-58a57a52-9650-492d-8d53-0ba924c46179.gif"></p>

### Android TimePicker on EditText Click

 On clicking the EditText control, a timepicker dialog popup and we get the selected time value on Button click in android App.

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
        android:text="Get Time"
        android:textSize="18sp"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.5"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toBottomOf="@+id/editText" />

    <EditText
        android:id="@+id/editText"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:ems="10"
        android:inputType="textPersonName"
        android:minHeight="48dp"
        android:text="Get TimePicker Popup"
        android:textSize="18sp"
        app:layout_constraintBottom_toTopOf="@+id/button"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.5"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent" />

    <TextView
        android:id="@+id/textView"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:textAllCaps="false"
        android:textSize="18sp"
        android:textStyle="bold"
        app:layout_constraintBottom_toTopOf="@+id/button"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toBottomOf="@+id/editText" />


</androidx.constraintlayout.widget.ConstraintLayout>
```

#### Step 2: Write the Java Code

```java
package com.example.timepickerapp;

import androidx.appcompat.app.AppCompatActivity;

import android.app.TimePickerDialog;
import android.os.Build;
import android.os.Bundle;
import android.text.InputType;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;
import android.widget.TimePicker;

import java.util.Calendar;

public class MainActivity extends AppCompatActivity {

    EditText time;
    Button button;
    TextView textView;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        time = findViewById(R.id.editText);
        textView = findViewById(R.id.textView);
        time.setInputType(InputType.TYPE_NULL);
        time.setOnClickListener(new View.OnClickListener() {
           @Override
           public void onClick(View view) {
               final Calendar cldr = Calendar.getInstance();
               int hour = cldr.get(Calendar.HOUR_OF_DAY);
               int minutes = cldr.get(Calendar.MINUTE);
               TimePickerDialog picker;
               picker = new TimePickerDialog(MainActivity.this, new TimePickerDialog.OnTimeSetListener() {
                   @Override
                   public void onTimeSet(TimePicker timePicker, int hour, int minute) {
                       time.setText(hour + ":" + minute);

                   }
               }, hour, minutes, true);
               picker.show();
           }
        });
        button = findViewById(R.id.button);
        button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                textView.setText("Selected Time :"+ time.getText());
            }
        });
    }
}
```

#### Result:

<p align="center" width="50%"><img src="https://user-images.githubusercontent.com/80222700/139111299-a51ea8b8-1ed5-4239-a97f-492f25d00ee6.gif"></p>

