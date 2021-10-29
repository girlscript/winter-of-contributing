This is a quiz app for Marvel and DC fans.

# Working

In this app I have followed MVC(Model View Controller) architecture pattern.

So in a MVC pattern basically there are three parts:
* Model
* View
* Controller

![Image](https://media.geeksforgeeks.org/wp-content/uploads/20201002214740/MVCSchema.png)
Image taken from [GeeksForGeeks](https://media.geeksforgeeks.org/wp-content/uploads/20201002214740/MVCSchema.png)

## Model
This is separate part (it is basically data class and object class) which contains all the data source which we need to show on the app. In this app `datasource.kt` is the Model part. The main purpose of it is to provide Data to the **Controller**.

> It does not have any relation with the UI part.
> It does not control the UI part.
> Changing it should not affect the UI of the App.

## View

It is basically the UI part of the App which is the xml file.(located in layout folder).

## Controller

This part takes data from **Model** and sends it into the **View** part for the app to display it. `MainActivity.kt`

# Tutorial

1. First of all store all the data which you want to be displayed in strings.xml file.

Also if your app contains any image then store it in Drawables folder.

![image](https://user-images.githubusercontent.com/59731205/139279675-0f7516a7-cd3e-44e6-b48c-71bbcafcb1f9.png)

In my case I have stored all the questions in the strings.xml file.

2. Now you will have to create a blueprint of what


<p align = "left">
<img src="https://user-images.githubusercontent.com/59731205/138231597-cefc4a27-3d9f-4dec-80ab-f43a344b95ae.png" width ="200">
<img src="https://user-images.githubusercontent.com/59731205/138231899-214c5c29-2136-4826-a974-3be096ff750c.png" width ="200">
<img src="https://user-images.githubusercontent.com/59731205/138232001-eade077b-84a2-498b-a7fa-2f9e5ae52476.png" width ="200">
</p>

[video1](https://user-images.githubusercontent.com/59731205/138166675-6a914fb7-daad-4346-8ca3-aa25bcbafb33.mp4)

https://user-images.githubusercontent.com/59731205/138167517-0f1b2276-b4d7-4bfa-ab63-67a834defb8d.mp4


