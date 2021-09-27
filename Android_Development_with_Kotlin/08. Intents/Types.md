
# Intent and it's Types

#### So before diving into types of Intent we will know about What is Intent.

Every person in this world has some purpose in his life or we can say that he has some [**Intent**](https://www.bing.com/search?q=intent+meaning&qs=AS&pq=inten&sk=AS2&sc=6-5&cvid=84306EFC2C2B4A3E81F5B6F4A1CACF58&FORM=QBRE&sp=3) in his life.<br/>

##### In the same way Android apps also has some intent behind performing certain actions.

<hr>
<p align = "center">
<img src="https://user-images.githubusercontent.com/59731205/134962884-6a885386-ee85-49fe-ae0b-1c5467d890bc.png">
<p/>
<hr>

Intents are asynchronous messages which allow application components to request functionality from other Android components. <br>Intents allow you to interact with components from the same applications as well as with components contributed by other applications. *For example, an activity can start an external activity for taking a picture*.
<br>
<br>

Intents are objects of the `android.content.Intent` type. Your code can send them to the Android system defining the components you are targeting. For example, via the `startActivity()` method you can define that the intent should be used to start an activity.<br>

An intent can contain data via a `Bundle`.

In Android the reuse of other application components is a concept known as **task**. An application can access other Android components to achieve a **task**.<br> 

*For example, from a component of your application you can trigger another component in the Android system, which manages photos, even if this component is not part of your application*.<br> 

In this component you select a photo and return to your application to use the selected photo.
<hr>

<p align = "center">
<img src="https://user-images.githubusercontent.com/59731205/134965001-03f169a9-e88a-462f-aa65-e1907a0b415c.png">
<p/>

<hr>

In the world of Android Development an **intent** is basically an object representing some action to be performed. The most common use for an intent is to launch an activity. 

## Types:
* Explicit Intent
* Implicit Intent

### Explicit Intent

An explicit intent is highly specific, where you know the exact activity to be launched, often a screen in your own app. An example code would be:

* Create an Intent, passing in the context, as well as the class name of the destination activity.<br>
`intent = Intent(applicationContext, SecondActivity::class.java)`  

* Call the startActivity() method on the context object, passing in the intent.<br>
`startActivity(intent)`

In the following code we are aiming to start a new activity using explicit intent.
In it the Intent function is taking two arguments:
* Context -> The current context is passed.
* Second Activity -> The activity which we want to open.


### Implicit Intent

An **implicit intent** is a bit more abstract, where you tell the system the type of action, such as: 
* opening a link 
* composing an email  
* making a phone call  

The system is responsible for figuring out how to fulfill the request.

However, for actions that don't necessarily involve the current app—say, you found an interesting Android documentation page and want to share it with friends—you'd use an implicit intent. You might see a menu like this asking which app to use to share the page.

<p align = "center">
<img src="https://user-images.githubusercontent.com/59731205/134967145-6980ad3c-053f-44b6-8cbe-a1dae674c103.png" width = "250" height = "500">
<p/>

An example code would be: (A simple calling app)
**Note:You have to add all the properties like width,height,margin by yourselves**
* First you have to create a EditText at the top and a Button(constrained to TextView) to call(I would like you to also apply constraints into the buttons using [Constraint Layout](https://github.com/girlscript/winter-of-contributing/blob/Android_Development_With_Kotlin/Android_Development_with_Kotlin/07.%20View%20Groups/07.4%20Constraint%20Layout.md))
* Add this code into TextView in the *activity_main.xml* resource file
```
android:id="@+id/et_number"
android:hint="@string/phone_number"
android:inputType="number"
```
* Add Call permission in *AndroidManifest.xml*:
`<uses-permission android:name="android.permission.CALL_PHONE" />`

* Open *ActivityMain.kt* class file and add this code

```
class MainActivity : AppCompatActivity() {
    val CALL_REQUEST_CODE = 101

    @SuppressLint("MissingPermission")
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        setupPermissions()

        // Calling using intent
        btn_call.setOnClickListener(View.OnClickListener {
            val intent = Intent(Intent.ACTION_CALL)
            intent.data = Uri.parse("tel:" + et_number.getText())
            startActivity(intent)
        })
        private fun setupPermissions() {
        val permission = ContextCompat.checkSelfPermission(this,
                Manifest.permission.CALL_PHONE)

        if (permission != PackageManager.PERMISSION_GRANTED) {
            Log.i("noone", "Permission to Call has denied")
            makeRequest()
        }
    }

    private fun makeRequest() {
        ActivityCompat.requestPermissions(this,
                arrayOf(Manifest.permission.CALL_PHONE),
                CALL_REQUEST_CODE)
    }

}
```
### Now run the app

## Conclusion:
* You use an explicit intent for actions or presenting screens **in your own app** and are responsible for the entire process.
* You commonly use implicit intents for performing actions **involving other apps and rely on the system to determine the end result**.



## Author
[@shubhmittal07](https://github.com/shubhmittal07)










