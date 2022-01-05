# Assets in Flutter
In Android development in Flutter, we’d have resources, also referred to as **assets**, for our app. Assets include images, files, logo or data. Assets belong to AssetBundle class. These resources have asynchronous access so they will be transparently loaded over a network (e.g., from a NetworkAssetBundle) or from the local file system without blocking the application's interface

Applications contain a **rootBundle**, which have the resources that were packaged with the application when it was built. To add resources to the rootBundle for your application we specify assets under the flutter subsection in the *pubspec.yaml file*.

## Specifying Assets
To specify assets we need to add them in the *pubspec.yaml* file under the flutter subsection, which is present in the root of the project. 

Here's a code snippet to demonstrate

```git 
flutter:
  assets:
    - assets/logo.png
    - assets/picture.jpeg
```
To store all these resources in a directory we need to add the directory name with **a /** at the end. 

```
flutter:
  assets:
    - directory/
    - directory/subdirectory/

```
## Asset bundling

Flutter uses the pubspec.yaml file, present at the root of the project, to specify assets required by an app. The assets subsection basically specifies all the files that have to be included with the application after the build. Flutter places the resources after build in the **“asset bundle”**.   This process is thereby called asset bundling. 

## Asset variants

Asset variants distinguish between main asset and variants.  Variants are like different version of assets and their precedence depends on how they are stored in the application directory. 

For example-

Let’s say if these files are included in your application directory
```
.../mode/brightmode.png
.../mode /dark/darkmode.png
...etc.
```
And the pubspec.yaml contains the image called brightmode inside mode folder -

```
flutter:
  assets:
    - mode/ brightmode.png
```
Then both brightmode.png and darkmode.png would be included in the asset bundle. It’s just that brightmode.png would be the main asset and darkmode.png would be a variant.

(Precedence would go according to the file path. In simple terms the shortest path file is the main asset here)

Asset variants is used to categorize among resources and this mechanism might be extended to include variants for different locales or regions, reading directions, and so on.

## Loading Assets

### 1) Images

While our images or resources are stored in the asset folder, to actually access it and load it we need to use **AssetImage** class in the our *build()*  function.

This code snippet shows us how can we load an image 
```
Widget build(BuildContext context) {
  return Image(image: AssetImage(‘mode/ brightmode.png’));
}
```
In Flutter we can load images according to the resolution for the desired device and its pixel ratio.  The numeric identifiers correspond to the resolution of the images contained within i.e they specify the pixels of the device and the images corresponding to that.

For Example, let’s have a look at this asset layout of an image *my_logo.png*

```
.../my_logo.png
.../2.0x/my_logo.png
.../3.0x/my_logo.png
```
Here the main asset is **my_logo.png** which has the resolution 1. On devices with higher pixel ratio like for pixel ratio 1.7  the higher resolution picture **2.0x/my_icon.png** would be taken.


 ### Asset Images in Package Dependencies

 When the assets are being used by the package then we need to fetch or load the asset using package argument provided to the **AssetImage** class.

For Example we have an image by the path *logo/my_logo.png* and the application depends on the package named *logo_set*. Then to load the image we will use the package argument as -

```
AssetImage('logo/my_logo.png', package: 'logo_set')
```

## Bundling of package Asset

As we know that the assets specified in pubspec.yaml are bundled automatically with the application. 
But, the assets that are not specified in the *pubspec.yaml* file can also be bundled in the application present in the **lib**/ folder. We just have to specify the files present inside the lib folder of the package in the pubspec.yaml file within the assets section.

If the package has the subsequent files - 
```
.../lib/backgrounds/background1.png
.../lib/backgrounds/background2.png
```
Then if we want to specify the first image, then we need to specify it in *pubspec.yaml* under assets section as shown - 
```
flutter:
  assets:
    - packages/package_name/backgrounds/background1.png
```
The **lib**/ is inferred, so it should be excluded in the asset path.

 
## Sharing assets with the underlying platform

## Android 

Flutter assets can be shared and used on various platforms by using **AssetManager** Class in Android and **NSBundle** on ios.
On Android the assets are available by the *AssetManager* API. 

For Example, we've got specified the subsequent asset in pubspec.yaml
```
flutter:
  assets:
    - mode/brightmode.png

```
Now the directory structure would seem like this
```
.../pubspec.yaml
.../mode/brightmode.png
...etc.
```
Now to access *mode/brightmode.png* from the Java plugin code we would do the subsequent- 
```
AssetManager assetManager = registrar.context().getAssets();
String key = registrar.lookupKeyForAsset("mode/brightmode.png");
AssetFileDescriptor fd = assetManager.openFd(key);
```
The lookup key employed in, for example  openFd, is obtained from lookupKeyForAsset on *PluginRegistry. Registrar* or *getLookupKeyForAsset* on *FlutterView.* **PluginRegistry.Registrar** is available when developing a plugin while FlutterView would be the selection when developing an app including a platform view.

## Ios platform

On IOS the assets are available through the **mainBundle.**  The lookup key employed in, as an example **pathForResource:ofType:**, is obtained from **lookupKeyForAsset or lookupKeyForAsset:fromPackage:** on *FlutterPluginRegistrar*, or *lookupKeyForAsset:* or *lookupKeyForAsset:fromPackage:* on **FlutterViewController**. **FlutterPluginRegistrar** is accessible when developing a plugin while FlutterViewController would be the selection when developing an app including a platform view.

We will take the identical example as above for the asset section in pubspec.yaml

Now to access *mode/brightmode.png* from your Objective-C plugin code we might do the following:
```
NSString* key = [registrar lookupKeyForAsset:@" mode/brightmode.png "];
NSString* path = [[NSBundle mainBundle] pathForResource:key ofType:nil];	

```
