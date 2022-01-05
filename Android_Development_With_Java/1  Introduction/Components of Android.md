# **Components of Android Application**  
<br />Android Application components are essential building blocks necessary to make Android Apps. These provide gateway to the system and the user to interact with your app. Some of these components depend on each other. 
These are the following main components of an Android Application:  
  

* Activities
* Services
* Broadcast Receivers
* Content Providers  

<br /> Each type has its own distinct purpose and its own unique life cycle on how the component is created and destroyed. The following section describes each of these app components.


![Components](https://miro.medium.com/max/2000/1*33hzCoxAoUehHrHeBJi-VA.png)

<br />

## **Activities** 
<br /> 
Activity is the UI which interacts with the user for the app. It is through activities that user can communicate with the app. In more simple words it is a single screen with user interface. For example, an Instagram have one activity where it shows all the posts and profile of someone would be another activity. Although all the activities work together to form a smooth and cohesive user experience, but these activities are independent of each other. As, any different app can start any of the above activities if Instagram allows to do so. For example, a camera app can open up the acitvity in Instagram that open user's chat feed and allow the user to share the photo with anyone.<br />   
An activity is implemented as subclass of class Activity.    
<br />
<div align = "centre">

![Activity1](https://img.freepik.com/free-psd/instagram-post-template-profile-feed-stories-smartphone-front-view-mobile-phone-mockup_90220-58.jpg?size=626&ext=jpg)

>As you can see these are two different pages on the Instagram application. These are actually two **Activities**. <br />
First activity shows the profile of someone whereas Second activty shows latest posts around the world. 

<div \>
<br \>

## **Services** 
<br />Service is used to keep the app running in the background. This component keeps running in the background to perform both long-running operations and work for remote processes. A service does no provide a user inteeface. For example, a service might play music in the background, or it can fetch data over the network without interrupting the user interaction with an activity. There are two kind of services to manage an app:

* **Started Services**: These services tell the system to keep them running until the work is done. For example, this could be syncing data in the background or playing music even after the user leaves the app.

* **Bound Service**: This service runs because some app had said it want to make use of the srevice. Basically this service provides an API to a process.

Live wallpapers, notifications, screen savers, playing music in the background, these are few of the many features that services have blessed us with.  
A service can be implemented as subclass of class **Service**.
<br /><br />
 ![Service](https://docs.microsoft.com/en-us/xamarin/android/app-fundamentals/services/service-notifications-images/02-fullnotification.png)

>These are some Services that takes place in background without disturbing the interaction of the user with the current activity.

<br>


## **Broadcast Receiver**
<br />Broadcast is like making announcements for system-wide events. For example, when a message is received, an incoming call or low battery. These are some of the few system-wide events that happens in an Android.  
And Broadcast Receiver is a component that allows the app to respond to these system-wide events which is outside the regular user flow of the app. This is another way of entry to an app and even to those apps that are not currently running. For example, an app can schedule an alarm to post a notification about an upcoming event. And by delivering that alarm to the BroadcastReceiver of the app there is no need for the app to keep running until the alarm gets off. Most of the common broadcasts originate from the system itself as the phrase itself states ***system-wide events***. For example, battery low, phone is turning off and many more. These are some of the many broadcasts system generates. Even though broadcast receiver don't display user interface, but they could aware user by creating notification regarding the events.  
A broadcast receiver is implemented as a sub class of **BroadcastReceiver** class.
<br /><br />
![BroadcastReceiver](https://i.ytimg.com/vi/XqjWq7kuBHI/maxresdefault.jpg)
> These are some of the events that Broadcast Receiver delivers.

<br />

## **Content Providers**
<br /> Content Provider is very important component from both perspective securing and storing your data. The task of the content provider in android is like of a central database in which data of the applications are stored, and it allows other applications to access and moidfy the app data based on the user requirements, if content provider allows it. This app data could be images, videos, audios or personal information. Content provider has the liberty to store this app data in file system, in a SQLite database, on the network or anywhere where the app can access it. It has the permission to grant or rescrit access of data to the apps.These are also useful for reading and writing data that is private to your app.  
A content provider is implemented as a subclass of class **ContentProvider**.
![ContentProvider](https://i2.wp.com/techvidvan.com/tutorials/wp-content/uploads/sites/2/2021/06/Content-provider-in-android.jpg?fit=1200%2C628&ssl=1)

>The role of the ContentProvider is to collect and store data.

<br >

## **Referrences**

* https://www.geeksforgeeks.org/components-android-application/

* https://developer.android.com/guide/components/fundamentals?authuser=2
