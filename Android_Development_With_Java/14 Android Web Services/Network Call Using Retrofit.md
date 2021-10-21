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

We first need to send out network requests to an API. For this we need the Retrofit Builder class and specify the base URL for the service. For demo purposes, we will use a  [Fake JSON API server](https://jsonplaceholder.typicode.com/posts) as our URL.

```JAVA
 Retrofit retrofit=new Retrofit.Builder()
                .baseUrl("https://jsonplaceholder.typicode.com/")
                .addConverterFactory(GsonConverterFactory.create())  // Convert the data to Gson
                .build();

        Service service=retrofit.create(Service.class); //Service is an interface  (described below)

        service.getDataSet().enqueue(new Callback<List<DataModel>>() {
            @Override
            public void onResponse(Call<List<DataModel>> call, Response<List<DataModel>> response) {

                    List<DataModel> list = (List<DataModel>) response.body(); // DataModel is the POJO Class (described below)
                    // You can now perform your required tasks from this list
            }

            @Override
            public void onFailure(Call<List<DataModel>> call, Throwable t) {
                Toast.makeText(MainActivity.this,t.getLocalizedMessage(),Toast.LENGTH_SHORT).show();

            }
        });
```

As mentioned in the code, we need an Interface ```Service``` and a POJO Class ```DataModel```.

```java
import retrofit2.Call;
import retrofit2.http.GET;
import retrofit2.http.Query;

public interface Service {


    @GET("/posts") //Add extension as per the data needed by the App
    Call<List<DataModel>> getDataSet();

}
```

```DataModel:-```

```java
import com.google.gson.annotations.SerializedName;

public class DataModel {

    @SerializedName("userId")
    public String userId;

    @SerializedName("id")
    public String id;

    @SerializedName("title")
    public  String title;

    @SerializedName("body")
    public  String body;

    public String getUserId() {
        return userId;
    }

    public void setUserId(String userId) {
        this.userId = userId;
    }

    public String getId() {
        return id;
    }

    public void setId(String id) {
        this.id = id;
    }

    public String getTitle() {
        return title;
    }

    public void setTitle(String title) {
        this.title = title;
    }

    public String getBody() {
        return body;
    }

    public void setBody(String body) {
        this.body = body;
    }
}

```

Retrofit can also be used for authentication purposes. For token authentication we can use this code in the ```Service``` interface :

```java
 @POST("posts")
    Call<ResponseCreatePost> createPost(@Header ("Authorization") String token, @Body HashMap<String, Object> newPost);
    
```

Other important applications of Retrofit include Pgination, File uploads and Downloads, Token Authentication, Error Handling, Caching, etc. To know more about all these functions, you can refer to the following [Tutorial](https://futurestud.io/tutorials/retrofit-token-authentication-on-android).
