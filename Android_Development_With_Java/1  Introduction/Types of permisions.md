
## **Types of permissions**

Android categorizes permissions into different types, including install-time permissions, runtime permissions, and special permissions. Each permission's type indicates the scope of restricted data that your app can access, and the scope of restricted actions that your app can perform, when the system grants your app that permission.


### **Install-time permissions**

Install-time permissions give your app limited access to restricted data, and they allow your app to perform restricted actions that minimally affect the system or other apps. When you declare install-time permissions in your app, the system automatically grants your app the permissions when the user installs your app. An app store presents an install-time permission notice to the user when they view an app's details page, as shown in Figure 2.

Android includes several sub-types of install-time permissions, including normal permissions and signature permissions.


#### **Normal permissions**

These permissions allow access to data and actions that extend beyond your app's sandbox. However, the data and actions present very little risk to the user's privacy, and the operation of other apps.

The system assigns the "normal" protection level to normal permissions, as shown on the permissions API reference page.


#### **Signature permissions**

If the app declares a signature permission that another app has defined, and if the two apps are signed by the same certificate, then the system grants the permission to the first app at install time. Otherwise, that first app cannot be granted the permission.

**Note:** Some signature permissions aren't for use by third-party apps.

The system assigns the "signature" protection level to signature permissions, as shown on the permissions API reference page.


### **Runtime permissions**

Runtime permissions, also known as dangerous permissions, give your app additional access to restricted data, and they allow your app to perform restricted actions that more substantially affect the system and other apps. Therefore, you need to request runtime permissions in your app before you can access the restricted data or perform restricted actions. When your app requests a runtime permission, the system presents a runtime permission prompt, as shown in Figure 3.

Many runtime permissions access _private user data_, a special type of restricted data that includes potentially sensitive information. Examples of private user data include location and contact information.

The microphone and camera provide access to particularly sensitive information. Therefore, the system helps you explain why your app accesses this information.

The system assigns the "dangerous" protection level to runtime permissions, as shown on the permissions API reference page.


### **Special permissions**

Special permissions correspond to particular app operations. Only the platform and OEMs can define special permissions. Additionally, the platform and OEMs usually define special permissions when they want to protect access to particularly powerful actions, such as drawing over other apps.

The **Special app access** page in system settings contains a set of user-toggleable operations. Many of these operations are implemented as special permissions.

Each special permission has its own implementation details. The instructions for using each special permission appear on the permissions API reference page. The system assigns the "appop" protection level to special permissions.