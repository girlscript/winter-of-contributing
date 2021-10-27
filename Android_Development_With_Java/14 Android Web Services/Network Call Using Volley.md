# Network Call Using Volley

## What is Volley?
Volley is an external HTTP library. Networking in Android Applications gets easier and faster using this library, i.e., we can easily get requests from the web and perform the required tasks.

To implement Vollay Library in our App, we need to add the following dependency in the build.gradle file (app).
 ```JAVA 
 implementation 'com.android.volley:volley:1.2.1'
 ```
We will be extracting the data from an URL and display it in our App using Volley. For demo purpose, we will be using a fake online Rest API - JSON placeholder.
 
 https://jsonplaceholder.typicode.com/
 
## Retrieve and Parse JSON Data

Suppose we have a text view in our XML and we want to print the title of the following Object in https://jsonplaceholder.typicode.com/posts/1 .
To do so, we write the following code within onCreate() method of the Activity :

```JAVA
 @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        RequestQueue requestQueue;
        requestQueue= Volley.newRequestQueue(this);

        // Make a new JSON Object

        JsonObjectRequest jsonObjectRequest=new JsonObjectRequest(Request.Method.GET,
                "https://jsonplaceholder.typicode.com/posts/1", null, new Response.Listener<JSONObject>() {
            @Override
            public void onResponse(JSONObject response) {
                try {
                    TextView textView=findViewById(R.id.text);
                    textView.setText("Response: "+response.getString("title"));
                } catch (JSONException e) {
                    e.printStackTrace();
                }

            }
        }, new Response.ErrorListener() {
            @Override
            public void onErrorResponse(VolleyError error) {
                // On getting Error
                Log.d("Error_JSON","Something went Wrong!");
            }
        });

        requestQueue.add(jsonObjectRequest);

    }
```

! Make sure to add Internet permission within Manifest File.

```XML
<uses-permission android:name="android.permission.INTERNET"/>
```

<p align="center">
    <img src="https://user-images.githubusercontent.com/79036525/136710281-7455d1af-5311-41d3-b662-049de14d77ca.png">
 </p>

## Parsing Nested JSON Arrays and Objects
Now, we will see how we can get the entire array from the given URL. We will see how we can display this list in a recycler view.
// Complete the RecyclerView Adapter class and the Model Class before proceeding//

```JAVA
public class MainActivity extends AppCompatActivity {

    private RecyclerView recyclerView;
    private RecyclerAdapter adapter;
    private LinearLayoutManager layoutManager;
    private ArrayList<ModelClass> list;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main2);
        recyclerView = findViewById(R.id.recyclerView);
        list = new ArrayList<>();
        RequestQueue requestQueue;
        requestQueue= Volley.newRequestQueue(this);

        // Make a new JSON Array Object

        JsonArrayRequest jsonArrayRequest=new JsonArrayRequest(Request.Method.GET,
                "https://jsonplaceholder.typicode.com/posts", null, new Response.Listener<JSONArray>() {
            @Override
            public void onResponse(JSONArray response) {
                for (int i = 0; i < response.length(); i++) {
                    try {
                        JSONObject object= response.getJSONObject(i);
                        ModelClass modelClass=new ModelClass(object.getString("userId"),object.getString("id"),object.getString("title"), object.getString("body"));
                        list.add(modelClass);
                    } catch (JSONException e) {
                        e.printStackTrace();
                    }
                }

            }
        }, new Response.ErrorListener() {
            @Override
            public void onErrorResponse(VolleyError error) {
                // On getting Error
                Log.d("Error_JSON","Something went Wrong!");
            }
        });

        requestQueue.add(jsonArrayRequest);

        adapter = new RecyclerAdapter(this, list);
        layoutManager = new LinearLayoutManager(this);
        recyclerView.setLayoutManager(layoutManager);
        recyclerView.setAdapter(adapter);
    }
}
```
<p align="center">
    <img src="https://user-images.githubusercontent.com/79036525/136710220-bed8e281-b42f-43ae-ba45-61b4974889b0.png">
 </p>
