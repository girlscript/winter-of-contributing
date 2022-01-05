# Compass Application using Onboarding Sensors
In this tutorial, you will build a simple app that can replace physical a compass.

The compass app would make use of following sensor libraries in your mobile:

* **TYPE_MAGNETIC_FIELD** -\
Type: Hardware\
Computes the geomagnetic field for all three axes in tesla (μT).

* **TYPE_ACCELEROMETER** -\
Type: Hardware\
Computes the acceleration in m/s2 applied on all three axes (x, y and z), including the force of gravity.

Typically, you can develop a compass just with a magnetometer but for more accurate data, we can combine a magnetometer with an accelerometer. This method of using data from two or more sensors to get a more accurate result is known as `Sensor Fusion`.

## Starting with Layout
Here you can use any image of a simple compass and add it into the drawable directory. After that open activity_main.xml in layout folder and add the following code for defining the image with the id name "compass".

```xml
<?xml version="1.0" encoding="utf-8"?>
<androidx.constraintlayout.widget.ConstraintLayout xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    xmlns:tools="http://schemas.android.com/tools"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    tools:context=".MainActivity"
    android:background="@color/white">

    <ImageView
        android:id="@+id/compass"
        android:layout_width="match_parent"
        android:layout_height="wrap_content"
        android:layout_centerInParent="true"
        android:src="@drawable/compass_img"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent" />


</androidx.constraintlayout.widget.ConstraintLayout>
```
The resulting layout would look like this - 
<p align="center"><img src ="https://user-images.githubusercontent.com/69648635/143719837-4ac63905-f587-4135-a313-e34138b4cfaf.png"></p>

## Setting up sensors
Open MainActivity.java and create a variable to hold the reference to SensorManager, Accelerometer and Magnetometer :

```java
    private SensorManager mSensorManager;
    private Sensor mAccelerometer;
    private Sensor mMagnetometer;
```

Android Studio now prompts you to import SensorManager, so import android.hardware.SensorManager and android.hardware.Sensor .
Next, in onCreate, add the following code:

```java
    mSensorManager = (SensorManager) getSystemService(SENSOR_SERVICE);
    mAccelerometer = mSensorManager.getDefaultSensor(Sensor.TYPE_ACCELEROMETER);
    mMagnetometer = mSensorManager.getDefaultSensor(Sensor.TYPE_MAGNETIC_FIELD);
```
Now, to listen to the event changes in the sensors, you need to implement the interface SensorEventListener and override its methods onAccuracyChanged and onSensorChanged.

Android system calls onSensorChanged every time there’s a new sensor event. Its SensorEvent parameter gives a set of array of size three, where each index represents a value of an axes in a coordinate system: event.values[0] represents x, event.values[1] represents y and event.values[2] for z.

On the other hand, Android system only calls onAccuracyChanged when there’s a change in accuracy. SensorManager contains all the accuracy change constants in SensorManager.SENSOR_STATUS_*.

## Getting Values From the Accelerometer and Magnetometer

In MainActivity, create the following variables:
```java
    private float[] mLastAccelerometer = new float[3];
    private float[] mLastMagnetometer = new float[3];
```
These variables will hold the latest accelerometer and magnetometer values.

For this tutorial, you only need to use onSensorChanged since you get all the latest sensor values there. So in onSensorChanged, add the following snippet:

```java
        if (event == null) {
            return;
        }
        if (event.sensor == mAccelerometer) {
            System.arraycopy(event.values, 0, mLastAccelerometer, 0, event.values.length);
            mLastAccelerometerSet = true;
        } else if (event.sensor == mMagnetometer) {
            System.arraycopy(event.values, 0, mLastMagnetometer, 0, event.values.length);
            mLastMagnetometerSet = true;
        }
```
Here’s what the code above does:

* If the event is null, then simply return
* Check the type of sensor
* System.arrayCopy copies values from the sensors into its respective array.

## Calculating Orientation in onSensorChanged

To find the device’s orientation, you first need to determine its rotation matrix.
```java
    private float[] mR = new float[9];
    private float[] mOrientation = new float[3];
    private float mCurrentDegree = 0f;
    private boolean mLastAccelerometerSet = false;
    private boolean mLastMagnetometerSet = false;
```
The two arrays will hold the values of the rotation matrix and orientation angles, and rest three variables define the last/current values of rotation, Accelerometer or Magnetometer.

Next, write the following snippet in onSensorChanged after the previous code.

```java
        if (mLastAccelerometerSet && mLastMagnetometerSet) {
            SensorManager.getRotationMatrix(mR, null, mLastAccelerometer, mLastMagnetometer);
            SensorManager.getOrientation(mR, mOrientation);
            float azimuthInRadians = mOrientation[0];
            float azimuthInDegress = (float) (Math.toDegrees(azimuthInRadians) + 360) % 360;
            RotateAnimation ra = new RotateAnimation(
                    mCurrentDegree,
                    -azimuthInDegress,
                    Animation.RELATIVE_TO_SELF, 0.5f,
                    Animation.RELATIVE_TO_SELF,
                    0.5f);

            ra.setDuration(250);

            ra.setFillAfter(true);

            compass.startAnimation(ra);
            mCurrentDegree = -azimuthInDegress;
        }
```

Here’s how it works:

* First, it gets the rotation matrix.
* It then uses that rotation matrix, which consists of an array of nine values, and maps it to a usable matrix with three values.
* In the variable mOrientation, you get values that represent

    mOrientation[0] = Azimuth (rotation around the -ve z-axis)

    mOrientation[1] = Pitch (rotation around the x-axis)

    mOrientation[2] = Roll (rotation around the y-axis)

    All these values are in radians.

* Next, it converts the azimuth to degrees, adding 360 because the angle is always positive.
* Then, RotateAimation Library animates how much the compass.png rotate using the values of mCurrentDegree and azimuthInDegrees for 250ms
* Finally, the animation is started and mCurrentDegree is set to the current degree that the compass gets rotated to.

One important thing to keep in mind for the sake of preserving the device's battery is the registering and unregistering of the sensors in the on resume and on pause, respectively. This can be done by the following code - 
```java
    protected void onResume() {
        super.onResume();
        mSensorManager.registerListener(this, mAccelerometer, SensorManager.SENSOR_DELAY_GAME);
        mSensorManager.registerListener(this, mMagnetometer, SensorManager.SENSOR_DELAY_GAME);
    }

    protected void onPause() {
        super.onPause();
        mSensorManager.unregisterListener(this, mAccelerometer);
        mSensorManager.unregisterListener(this, mMagnetometer);
    }

```
## Final Result
If all the steps are followed accurately, then your compass app would work like this - 
<p align="center"><img src ="https://user-images.githubusercontent.com/69648635/143720924-c109015a-23ff-478a-8c28-8a4133d03eec.gif"></p>

You can see when I am rotating the phone, the compass points to the magnetic `North` quite accurately.

## Notes about accuracy
* The compass points to magnetic north, not true north. To determine the latter, you'd need to pull in your location via GPS or Wi-Fi and then calculate the offset.
* Because we are using the magnetic field sensor there is quite a bit of noise that I am not attempting to dampen.
* You'll find this simple example works best on a level surface, preferably outdoors.

For more information about sensors, please visit [Android official Documentation.](https://developer.android.com/guide/topics/sensors/sensors_motion)

