## How to Work with Internal Storage

Working with file storage in Android is similar to working with the standard Java I/O classes. There are several methods to choose from, including **`openFileInput()`**, **`openFileOutput()`**, **`InputStreams`**, and **`OutputStreams`**. You should keep in mind that these calls do not allow you to specify file paths; instead, you can only provide the filename. If you need more flexibility, you can get a File object that points to the root of your file locations by calling **getFilesDir()** or **getCacheDir()**. If you want to work with the cache directories of the internal storage, use **getCacheDir()**. When you have a File object, you can use it to create your own directory and file structure.

A few simple steps are required to write to a file. You must do the following:

* Choose a file name.

* Get a FileOutputStream object.

* Convert your data into a ByteArray.

* Use the FileOutputStream to write the ByteArray. 

* Don't forget to close the file.

```kotlin
val filename = "file.txt"
val out = openFileOutput(filename, Context.MODE_PRIVATE) 
out.use { 
  out.write(txtinput.text.toString().toByteArray()) 
}
```
  
  * `openFileOutput` returns a FileOutputStream; we need this object so we can write to a file. The first parameter of the call is the name of the file you want to create. The second parameter is a Context mode. We’re using `MODE_PRIVATE` because we want the file to be private to the app.

  * The `use` extension indicates that we do not need to explicitly or manually close the file. When we're finished with it, the Android runtime will close it for us. This is very useful because many developers forget to close files. Memory leak occurs when a file handle is left open until the app is closed.

  * The `write` method expects a ByteArray. So, we need to convert the Editable (data type of EditText) to a String, then convert it to a ByteArray.

Reading from a file involves more steps than writing to it. You generally need to do the following:

* Get a FileInputStream.

* Read from the stream, one byte at a time.

* Keep on reading until there’s nothing more to read and the value of last byte you have read is -1.

* As you progress through the file, you must save the bytes you're taking from the stream in a temporary container. A StringBuilder or StringBuffer should be useful. Because Strings are immutable, using the plus operator to create a String object is wasteful and inefficient. Each time you use the plus operator, a new String object is created. If you're reading a text file, this will be the case. You'll use a different data structure if you're reading something else, such as an audio or video file.

* When you reach the end of the file, stop reading.

* Don't forget to close the file.

```kotlin
val filename = "file.txt"
val input = openFileInput(filename) 
input.use {
  var buffer = StringBuilder()
  var bytes_read = input.read() 
  while(bytes_read != -1) { 
   buffer.append(bytes_read.toChar()) 
   bytes_read = input.read() 
  }
 println(buffer.toString()) 
}
```

  * `openFileInput` returns a FileInputStream; this is the object we need so can read from a file. The only parameter it takes is the name of the file to read.
 
  * We won't be able to read the entire file in one go. We'll read it in sections. We'll store the chunks inside the StringBuilder object as we get them.
  
  * The `read` method reads a byte of data from the input stream and returns it as an integer. We need to keep reading from the stream one byte at a time until we reach the end of file (EOF) marker.
  
  * When there are no more bytes to read from the stream, the EOF is marked as -1. We will use this as the condition for the `while` loop. Until `bytes_read` isn’t equal to -1 yet, just keep on reading.

  * The `read` method returns an int; it’s the ASCII value of each letter in the file, returned as integer. We have to convert it to a `Char` before we can put it in the StringBuilder.
  
  * Read another byte if you're not yet at the EOF.
  
  * When we run out of bytes to read, we’ll get out of the loop and print the content of StringBuilder.

Now that you have basic knowledge of using Internal Storage in Android, refer [this](https://developer.android.com/training/data-storage) official documentation for more complex examples and ideas.
