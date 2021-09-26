Android ChronoMeter is user interface control which shows timer in the view. We can easily start up or down counter with base time using the chronometer widget. By default, start() method can assume base time and starts the counter.
Generally, we can create use ChronoMeter widget in XML layout but we can do it programmatically also.

First we create a new project by following the below steps: 

Click on File, then New => New Project.
After that include the Kotlin support and click on next.
Select the minimum SDK as per convenience and click next button.
Then select the Empty activity => next => finish.

XML attributes	                                                     Description
android:id	                                           Used to specify the id of the view.
android:textAlignment	             Used to the text alignment in the dropdown list.
android:background	                    Used to set the background of the view.
android:padding                                     	Used to set the padding of the view.
android:visibility	                          Used to set the visibility of the view.
android:gravity	                       Used to specify the gravity of the view like center, top, bottom, etc
android:format	                        Used to define the format of the string to be displayed.
android:countDown	         Used to define whether the chronometer will count up or count down.

Layout
Below layout contains Chronometer with text appearance and background style settings.

<?xml version="1.0" encoding="utf-8"?>
<android.support.constraint.ConstraintLayout
    xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    android:layout_width="match_parent"
    android:layout_height="match_parent">
    <Chronometer
        android:id="@+id/chronometer"
        android:layout_width="match_parent"
        android:layout_height="wrap_content"
        android:layout_margin="16dp"
        android:textAlignment="center"
        android:textAppearance="@style/TextAppearance.AppCompat.Large"
        android:textColor="#ad1457"
        android:background="#b2dfdb"
        app:layout_constraintLeft_toLeftOf="parent"
        app:layout_constraintRight_toRightOf="parent"
        app:layout_constraintTop_toTopOf="parent"></Chronometer>
    <Button
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:layout_margin="16dp"
        style="@style/Widget.AppCompat.Button.Colored"
        android:text="Start"
        android:onClick="startStopChronometer"
        app:layout_constraintLeft_toLeftOf="parent"
        app:layout_constraintRight_toRightOf="parent"
        app:layout_constraintTop_toBottomOf="@+id/chronometer"
        />
</android.support.constraint.ConstraintLayout>

Activity
import android.os.Bundle;
import android.os.SystemClock;
import android.support.v7.app.AppCompatActivity;
import android.view.View;
import android.widget.Button;
import android.widget.Chronometer;
import android.widget.Toast;

public class ChronometerActivity  extends AppCompatActivity {

    private Chronometer chronometer;
    private boolean isStart;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.chronometer_activity);

        chronometer = findViewById(R.id.chronometer);
      
        chronometer.setOnChronometerTickListener(new Chronometer.OnChronometerTickListener() {
            @Override
            public void onChronometerTick(Chronometer chronometerChanged) {
                chronometer = chronometerChanged;
            }
        });
    }
    public void startStopChronometer(View view){
        if(isStart){
            chronometer.stop();
            isStart = false;
            ((Button)view).setText("Start");
        }else{
            chronometer.setBase(SystemClock.elapsedRealtime());
            chronometer.start();
            isStart = true;
            ((Button)view).setText("Stop");
        }
    }
}

AndroidManifest.xml file

<?xml version="1.0" encoding="utf-8"?>
<manifest xmlns:android="http://schemas.android.com/apk/res/android"
package="com.geeksforgeeks.myfirstkotlinapp">
 
<application
    android:allowBackup="true"
    android:icon="@mipmap/ic_launcher"
    android:label="@string/app_name"
    android:roundIcon="@mipmap/ic_launcher_round"
    android:supportsRtl="true"
    android:theme="@style/AppTheme">
    <activity android:name=".MainActivity">
        <intent-filter>
            <action android:name="android.intent.action.MAIN" />
 
            <category android:name="android.intent.category.LAUNCHER" />
        </intent-filter>
    </activity>
</application>
 
</manifest>
