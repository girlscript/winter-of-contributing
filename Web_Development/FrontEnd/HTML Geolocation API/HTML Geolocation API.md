# HTML Geolocation

## Introduction

- The HTML Geolocation API is used to locate a user’s Current position.
- The **Geolocation API** allows the user to provide their location to web applications if they so desire.For privacy reasons, the user is asked for permission to report location information.
- Geolocation is most accurate for devices with GPS, like smartphones.

## Usage

- The Geolocation API is accessed via a call to `navigator.geolocation`, this will cause the user’s browser to ask them for permission to access their location data. If they accept, then the browser will use the best available functionality on the device to access this information (for example, GPS).
- The `getCurrentPosition()` method is used to Retrieves the device’s current location.
- This method returns the he latitude and longitude of the user’s position.

## Syntax

```javascript 
navigator.geolocation.getCurrentPosition(success, error, [options])
```

## Parameters

> **Success:**

A callback function that takes a GeolocationPosition object as its sole input
parameter.

> **Error: (Optional parameter)**

An optional callback function that takes a `GeolocationPositionError` object as its sole input parameter.

> **Option: (Optional parameter)**

Option includes extra parameters which is:

1. `maximumAge`: integer (milliseconds) | infinity - maximum cached position age.
1. `timeout`: integer (milliseconds) - amount of time before the error callback is invoked, if 0 it will never invoke.
2. `enableHighAccuracy`: false | true

## Example

```html
<!DOCTYPE html>
<html>
  <body>
    <button onclick="getmyLoc()">Click Here</button>
    <p id="mygeoloc"></p>

    <script>
      var geoid = document.getElementById("mygeoloc");

      function getmyLoc() {
        if (navigator.geolocation) {
          navigator.geolocation.getCurrentPosition(showmyPos);
        } else {
          geoid.innerHTML = "Geolocation is not support ";
        }
      }
      function showmyPos(pos) {
        geoid.innerHTML =
          "Your Latitude: " +
          pos.coords.latitude +
          "<br>Your Longitude: " +
          pos.coords.longitude;
      }
    </script>
  </body>
</html>
```

## Output

When we run this file and click on Click Here button then browser pop-up the window that ask for the permission for access your location.
And when we accept that then output is generated like this which has Latitude and Longitude of user device.
