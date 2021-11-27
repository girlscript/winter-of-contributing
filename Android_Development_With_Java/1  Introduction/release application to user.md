
**Publishing an android application** 

Publishing is the general process that makes your Android applications available to users. When you publish an Android application you perform two main tasks:



* You prepare the application for release. \
During the preparation step you build a release version of your application, which users can download and install on their Android-powered devices.
* You release the application to users. \
During the release step you publicize, sell, and distribute the release version of your application to users.


## **Preparing app for release**

Preparing your application for release is a multi-step process that involves the following tasks:



* Configuring your application for release. \
At a minimum you need to remove Log calls and remove the android:debuggable attribute from your manifest file. You should also provide values for the android:versionCode and android:versionName attributes, which are located in the &lt;manifest> element. You may also have to configure several other settings to meet Google Play requirements or accommodate whatever method you're using to release your application. \
If you are using Gradle build files, you can use the _release_ build type to set your build settings for the published version of your app.
* Building and signing a release version of your application. \
You can use the Gradle build files with the _release_ build type to build and sign a release version of your application. See Building and Running from Android Studio.
* Testing the release version of your application. \
Before you distribute your application, you should thoroughly test the release version on at least one target handset device and one target tablet device.
* Updating application resources for release. \
You need to be sure that all application resources such as multimedia files and graphics are updated and included with your application or staged on the proper production servers.
* Preparing remote servers and services that your application depends on. \
If your application depends on external servers or services, you need to be sure they are secure and production ready.

You may have to perform several other tasks as part of the preparation process. For example, you will need to get a private key for signing your application. You will also need to create an icon for your application, and you may want to prepare an End User License Agreement (EULA) to protect your person, organization, and intellectual property.

When you are finished preparing your application for release you will have a signed .apk file that you can distribute to users.

To learn how to prepare your application for release, see Preparing for Release in the Dev Guide. This topic provides step-by-step instructions for configuring and building a release version of your application.


## **Releasing an android application to users**

You can release your Android applications several ways. Usually, you release applications through an application marketplace such as Google Play, but you can also release applications on your own website or by sending an application directly to a user.


### **Releasing through an app marketplace**

If you want to distribute your apps to the broadest possible audience, releasing through an app marketplace such as Google Play is ideal.

Google Play is the premier marketplace for Android apps and is particularly useful if you want to distribute your applications to a large global audience. However, you can distribute your apps through any app marketplace you want or you can use multiple marketplaces.


#### **Releasing your apps on Google Play**

Google Play is a robust publishing platform that helps you publicize, sell, and distribute your Android applications to users around the world. When you release your applications through Google Play you have access to a suite of developer tools that let you analyze your sales, identify market trends, and control who your applications are being distributed to. You also have access to several revenue-enhancing features such as in-app billing and application licensing. The rich array of tools and features, coupled with numerous end-user community features, makes Google Play the premier marketplace for selling and buying Android applications.

Releasing your application on Google Play is a simple process that involves three basic steps:



* Preparing promotional materials. \
To fully leverage the marketing and publicity capabilities of Google Play, you need to create promotional materials for your application, such as screenshots, videos, graphics, and promotional text.
* Configuring options and uploading assets. \
Google Play lets you target your application to a worldwide pool of users and devices. By configuring various Google Play settings, you can choose the countries you want to reach, the listing languages you want to use, and the price you want to charge in each country. You can also configure listing details such as the application type, category, and content rating. When you are done configuring options you can upload your promotional materials and your application as a draft (unpublished) application.
* Publishing the release version of your application. \
If you are satisfied that your publishing settings are correctly configured and your uploaded application is ready to be released to the public, you can simply click **Publish** in the Play Console and within minutes your application will be live and available for download around the world.