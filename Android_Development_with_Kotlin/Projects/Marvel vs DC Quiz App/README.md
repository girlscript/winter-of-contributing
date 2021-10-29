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

2. Now you will have to create a blueprint of what you want to show in your app.

In my case screen contains one Question at a time.

So we will make a Questions data class which will hold the information about what we want to show.

> **Data class:** The soul purpose of a data class is to hold data . It is also far more suitable for handling data than a normal class. For example ->
```
data class Person(val name: String, val age: Int)

fun task6(): List<Person> {
    return listOf(Person("Alice", 29), Person("Bob", 31))
}
```
Result: `[Person(name=Alice, age=29), Person(name=Bob, age=31)]`

```
class Person(val name: String, val age: Int)

fun task6(): List<Person> {
    return listOf(Person("Alice", 29), Person("Bob", 31))
}
```
Result: `[i_introduction._6_Data_Classes.Person@4f47d241, i_introduction._6_Data_Classes.Person@4c3e4790]`

So now coming back to the point.

We want to show some parameters on the app like questions , images , options etc.

```
import androidx.annotation.DrawableRes
import androidx.annotation.StringRes

data class Question(
    val id : Int,
    @StringRes val question : Int,
    @DrawableRes val image : Int,
    val option1 : String,
    val option2 : String,
    val option3 : String,
    val option4 : String,
    val correctAnswer : Int
)
```
3. Now we will have to create a class which will act as a data source for the app.

In my case it is an object(Singleton) but you can also use normal class for this.

```
package com.example.quiz_app.data

import com.example.quiz_app.Question.Question
import com.example.quiz_app.R

object datasource{

const val USER_NAME : String = "user_name"
const val TOTAL_QUESTIONS: String = "total_ques"
const val CORRECT_ANSWERS = "correct_answers"

fun getMarvelQuestion(): List<Question>{
    return listOf<Question>(
        Question(1, R.string.Mques01, R.drawable.marvelimg01,"2005","2008","2010","2012",2),
        Question(2, R.string.Mques02, R.drawable.marvelimg02,"Vanir","Mjolnir","Aesir","Norn",2),
        Question(3, R.string.Mques03, R.drawable.marvelimg03,"That he wants to study The Hulk","That he knows about S.H.I.E.L.D.","That they are putting a team together","That Thaddeus owes him money",3),
        Question(4, R.string.Mques04, R.drawable.marvelimg04,"Adamantium","Vibranium","Promethium","Carbonadium",2),
        Question(5, R.string.Mques05, R.drawable.marvelimg05,"Cats","Ducks","Reptiles","Raccoons",1),
        Question(6, R.string.Mques06, R.drawable.marvelimg06,"H.O.M.E.R.","J.A.R.V.I.S.","A.L.F.R.E.D.","M.A.R.V.I.N.",2),
        Question(7, R.string.Mques07, R.drawable.marvelimg07,"T’Challa","M’Baku","N’Jadaka","N’Jobu",1),
        Question(8, R.string.Mques08, R.drawable.marvelimg08,"The Chitauri","The Skrulls","The Kree","The Flerkens",1),
        Question(9, R.string.Mques09, R.drawable.marvelimg09,"Thor","Loki","The Collector","Tony Stark",2),
        Question(10, R.string.Mques10, R.drawable.marvelimg10,"On Vormir","In a vault on Asgard","Inside Sif’s sword","To the Collector",4)
    )}
}
```

Now coming to the activity part:

In this app there are 5 Activities. Source code of all the Activities is provided in this repo.

* MainActivity.kt is for handling the _**user input**_ part.

```
class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        Start_btn.setOnClickListener{
            if(EditName_Text.text.toString().isEmpty()){
                Toast.makeText(this,"Please enter a name",Toast.LENGTH_LONG).show()
            }
            else{
                val intent = Intent(this,SelectTeam::class.java)
                intent.putExtra(datasource.USER_NAME , EditName_Text.text.toString())
                startActivity(intent)
                finish()
            }
        }
    }
}
```
> Here we also have to use Intents to pass on the user name to other activitis.

* MarvelQuestion.kt and DCQuestion.kt are for providing the data to the View Component.


* SelectTeam.kt is for the user to select his/her team.
* ResultActivity.kt is just showing the user's result.

<p align = "left">
<img src="https://user-images.githubusercontent.com/59731205/138231597-cefc4a27-3d9f-4dec-80ab-f43a344b95ae.png" width ="200">
<img src="https://user-images.githubusercontent.com/59731205/138231899-214c5c29-2136-4826-a974-3be096ff750c.png" width ="200">
<img src="https://user-images.githubusercontent.com/59731205/138232001-eade077b-84a2-498b-a7fa-2f9e5ae52476.png" width ="200">
</p>

[video1](https://user-images.githubusercontent.com/59731205/138166675-6a914fb7-daad-4346-8ca3-aa25bcbafb33.mp4)

https://user-images.githubusercontent.com/59731205/138167517-0f1b2276-b4d7-4bfa-ab63-67a834defb8d.mp4


