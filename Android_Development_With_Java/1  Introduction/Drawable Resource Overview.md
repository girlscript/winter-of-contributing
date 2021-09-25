###Android-Java: Drawable Resource Overview



A drawable resource is a concept for a graphic that is to be displayed on the screen and which can be retrieved by applying to another XML resource with attributes such as android:drawable and android:icon or with APIs such as getDrawable(int). 
There are several different types of drawables:

1. Inflate/paste an image resource (bitmap Image or file) in your project.

2. Create an XML resource file that defines the drawable properties.

   2.1. Create Custom Resource files.

       2.1.1. shape.

       2.1.2. selector.

       2.1.3. layer-list.

   2.2. Create Image Assets.

   2.3. Create Vector Assets.



**1. Inflate Image Resource file (Bitmap files)**.
Bitmap
  
image. Android supports bitmap files in three formats: .png (preferred), .jpg (acceptable), .gif (discouraged).

You can reference a bitmap file directly, using the filename as the resource ID, or create an alias resource ID in XML.
2. 
