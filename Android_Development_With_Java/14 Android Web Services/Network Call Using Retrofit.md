# Network Call Using Retrofit
Retrofit is a type-safe REST client for Android.This library provides a powerful framework for authenticating and interacting with APIs across the web. It helps in easy download of JSON data from the web API. Once this data has been downloaded, it is parsed into the POJO (Plain Old Java Object) class.

To start with, we first need to add ```Internet``` permissions in our Application in the Manifest file. 

```xml
<uses-permission android:name="android.permission.INTERNET" />
```

Next we need to add the dependencies in the app/build.gradle file

```java
implementation 'com.squareup.retrofit2:retrofit:2.5.0'
implementation 'com.squareup.retrofit2:converter-gson:2.4.0'
```

Let us first create a simple TextView where we can show a particular post from the [demo URL](https://jsonplaceholder.typicode.com/posts) (for example , let us display the 6th post)

```xml
 <?xml version="1.0" encoding="utf-8"?>
 <androidx.constraintlayout.widget.ConstraintLayout xmlns:android="http://schemas.android.com/apk/res/android"
     xmlns:app="http://schemas.android.com/apk/res-auto"
     xmlns:tools="http://schemas.android.com/tools"
     android:layout_width="match_parent"
     android:layout_height="match_parent"
     tools:context=".MainActivity">

     <TextView
         android:id="@+id/textView"
         android:layout_width="wrap_content"
         android:layout_height="wrap_content"
         android:gravity="center"
         android:textColor="@color/black"
         android:textSize="18dp"
         app:layout_constraintBottom_toBottomOf="parent"
         app:layout_constraintLeft_toLeftOf="parent"
         app:layout_constraintRight_toRightOf="parent"
         app:layout_constraintTop_toTopOf="parent" />

 </androidx.constraintlayout.widget.ConstraintLayout>
```

We need to send out network requests to an API. For this we need the Retrofit Builder class and specify the base URL for the service. For demo purposes, we will use a  [Fake JSON API server](https://jsonplaceholder.typicode.com/posts) as our URL.

<p align="center">
    <img src="https://user-images.githubusercontent.com/79036525/138501461-b5246bd5-2d47-469c-b242-7628d9290e15.png">
 </p>

```PostModel:- (POJO Class)```

```java
import com.google.gson.annotations.SerializedName;

public class PostModel {

    @SerializedName("userId")
    public int userId;

    @SerializedName("id")
    public int id;

    @SerializedName("title")
    public  String title;

    @SerializedName("body")
    public  String body;

}

```

```Service Interface```

```java
import retrofit2.Call;
import retrofit2.http.GET;
import retrofit2.http.Query;

public interface Service {


    @GET("/posts") //Add extension as per the data needed by the App
    Call<List<PostModel>> getPosts();
}
```

```JAVA
public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        TextView textview=findViewById(R.id.textView);
        Retrofit retrofit=new Retrofit.Builder()
                .baseUrl("https://jsonplaceholder.typicode.com/")
                .addConverterFactory(GsonConverterFactory.create())  //Convert the data to Gson
                .build();
        Service api=retrofit.create(Service.class); //Service Interface
        api.getPosts().enqueue(new Callback<List<PostModel>>() {
            @Override
            public void onResponse(Call<List<PostModel>> call, Response<List<PostModel>> response) {
                List<PostModel> list=response.body(); //PostModel-a POJO class 
                String str1="Found "+list.size()+" posts in the Web. \n\n";
                PostModel post=list.get(5); //to get the 6th post in the list.
                String str2="User ID: " + post.userId
                        +"\nPost ID: "+ post.id
                        +"\nTitle: "+ post.title
                        +"\nBody: "+ post.body;
                textview.setText(str1+str2);

            }

            @Override
            public void onFailure(Call<List<PostModel>> call, Throwable t) {
                Toast.makeText(MainActivity.this,t.getLocalizedMessage(),Toast.LENGTH_SHORT).show();
            }
        });
    }
}
```



The output of the above code implemented is as follows:

<p align="center">
    <img src="https://user-images.githubusercontent.com/79036525/138334521-c4957726-5ae2-48a2-9882-b643810a73f1.png">
</p>

Retrofit can also be used for authentication purposes. For token authentication we can use this code in the ```Service``` interface :

```java
 @POST("posts")
    Call<ResponseCreatePost> createPost(@Header ("Authorization") String token, @Body HashMap<String, Object> newPost);
    
```

The ResponseCreatePost Class is as follows:
```java
class ResponseCreatePost
{
    public int code;
    public String message;
}
```

Other important applications of Retrofit include Pgination, File uploads and Downloads, Token Authentication, Error Handling, Caching, etc. To know more about all these functions, you can refer to the following [Tutorial](https://futurestud.io/tutorials/retrofit-token-authentication-on-android).
