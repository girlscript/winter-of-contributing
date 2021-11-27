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

```
class MarvelQuestion : AppCompatActivity(),View.OnClickListener {

    //Private Variables startRegion
    private var mCurrentPosition: Int = 1
    private var mQuestionList: List<Question>? = null
    private var mselectedOptionPosition: Int = 0
    private var mUserName: String? = null
    private var mcorrectAnswers:Int = 0
    //endregion

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_marvel_question)

        mUserName = intent.getStringExtra(datasource.USER_NAME)

        mQuestionList = datasource.getMarvelQuestion()
        option_01.setOnClickListener(this)
        option_02.setOnClickListener(this)
        option_03.setOnClickListener(this)
        option_04.setOnClickListener(this)
        submit_bttn.setOnClickListener(this)
        setQustion()
    }

    private fun setQustion(){
        val question: Question? = mQuestionList!![mCurrentPosition - 1]
        defaultOptionLayout()
        if(mCurrentPosition == mQuestionList?.size){
            submit_bttn.text = "FINISH"
        }
        else{
            submit_bttn.text = "SUBMIT"
        }
        marvel_progress.progress = mCurrentPosition
        marvel_pro_txt.text = "$mCurrentPosition" + "/" + marvel_progress.max
        marvel_question.text = getString(question!!.question)
        marvel_img.setImageResource(question.image)
        option_01.text = question.option1
        option_02.text = question.option2
        option_03.text = question.option3
        option_04.text = question.option4
    }

    private fun defaultOptionLayout(){
        val optionList = ArrayList<TextView>()
        optionList.add(0,option_01)
        optionList.add(1,option_02)
        optionList.add(2,option_03)
        optionList.add(3,option_04)

        for(option in optionList){
            option.setTextColor(Color.parseColor("#7A8089"))
            option.typeface = Typeface.DEFAULT
            option.background = ContextCompat.getDrawable(this,R.drawable.option_border_background)
        }
    }

    override fun onClick(p0: View?) {
        when(p0?.id){
            R.id.option_01 ->{selectedOptionView(option_01,1)}
            R.id.option_02 ->{selectedOptionView(option_02,2)}
            R.id.option_03 ->{selectedOptionView(option_03,3)}
            R.id.option_04 ->{selectedOptionView(option_04,4)}
            R.id.submit_bttn ->{
                if(mselectedOptionPosition == 0){
                    mCurrentPosition++
                    when{
                        mCurrentPosition <= mQuestionList!!.size -> {
                            setQustion()
                        }

                        else -> {
                            val intent = Intent(this, ResultActivity::class.java)
                            intent.putExtra(datasource.USER_NAME,mUserName)
                            intent.putExtra(datasource.CORRECT_ANSWERS,mcorrectAnswers)
                            intent.putExtra(datasource.TOTAL_QUESTIONS,mQuestionList!!.size)
                            startActivity(intent)
                        }

                    }
                }else{
                    val question = mQuestionList?.get(mCurrentPosition - 1)
                    if(question!!.correctAnswer != mselectedOptionPosition){
                        answerView(mselectedOptionPosition , R.drawable.wrong_option_background)
                    }
                    else{mcorrectAnswers++}
                    answerView(question.correctAnswer , R.drawable.right_option_background)
                    if(mCurrentPosition == mQuestionList!!.size){
                        submit_bttn.text = "FINISH"
                    }
                    else{
                        submit_bttn.text = "GO TO NEXT QUESTION"
                    }
                    mselectedOptionPosition = 0
                }

            }
        }
    }
    private fun answerView(answer:Int , drawableView:Int){

        when(answer){

            1 -> {option_01.background = ContextCompat.getDrawable(this,drawableView)}
            2 -> {option_02.background = ContextCompat.getDrawable(this,drawableView)}
            3 -> {option_03.background = ContextCompat.getDrawable(this,drawableView)}
            4 -> {option_04.background = ContextCompat.getDrawable(this,drawableView)}
        }
    }
    private fun selectedOptionView(tv: TextView, selectedOptionNum:Int){
        defaultOptionLayout()
        mselectedOptionPosition = selectedOptionNum
        tv.setTextColor(Color.parseColor("#363A43"))
        tv.setTypeface(tv.typeface , Typeface.BOLD)
        tv.background = ContextCompat.getDrawable(this,R.drawable.selected_option_border_background)

    }
}
```


```
class DCQuestion : AppCompatActivity(),View.OnClickListener {

    //Private Variables startRegion
    private var mCurrentPosition: Int = 1
    private var mQuestionList: List<Question>? = null
    private var mselectedOptionPosition: Int = 0
    private var mUserName: String? = null
    private var mcorrectAnswers: Int = 0
    //endregion

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_dc_question)

        mUserName = intent.getStringExtra(datasource.USER_NAME)

        mQuestionList = datasource.getDCQuestion()
        dc_option_01.setOnClickListener(this)
        dc_option_02.setOnClickListener(this)
        dc_option_03.setOnClickListener(this)
        dc_option_04.setOnClickListener(this)
        dc_submit_bttn.setOnClickListener(this)
        setQustion()
    }

    private fun setQustion(){
        val question: Question? = mQuestionList!![mCurrentPosition - 1]
        defaultOptionLayout()
        if(mCurrentPosition == mQuestionList?.size){
            dc_submit_bttn.text = "FINISH"
        }
        else{
            dc_submit_bttn.text = "SUBMIT"
        }
        dc_progress.progress = mCurrentPosition
        dc_pro_txt.text = "$mCurrentPosition" + "/" + dc_progress.max
        dc_question.text = getString(question!!.question)
        dc_img.setImageResource(question.image)
        dc_option_01.text = question.option1
        dc_option_02.text = question.option2
        dc_option_03.text = question.option3
        dc_option_04.text = question.option4
    }

    private fun defaultOptionLayout(){
        val optionList = ArrayList<TextView>()
        optionList.add(0,dc_option_01)
        optionList.add(1,dc_option_02)
        optionList.add(2,dc_option_03)
        optionList.add(3,dc_option_04)

        for(option in optionList){
            option.setTextColor(Color.parseColor("#7A8089"))
            option.typeface = Typeface.DEFAULT
            option.background = ContextCompat.getDrawable(this,R.drawable.option_border_background)
        }
    }

    override fun onClick(p0: View?) {
        when(p0?.id){
            R.id.dc_option_01 ->{selectedOptionView(dc_option_01,1)}
            R.id.dc_option_02 ->{selectedOptionView(dc_option_02,2)}
            R.id.dc_option_03 ->{selectedOptionView(dc_option_03,3)}
            R.id.dc_option_04 ->{selectedOptionView(dc_option_04,4)}
            R.id.dc_submit_bttn ->{
                if(mselectedOptionPosition == 0){
                    mCurrentPosition++
                    when{
                        mCurrentPosition <= mQuestionList!!.size -> {
                            setQustion()
                        }

                        else -> {
                            val intent = Intent(this, ResultActivity::class.java)
                            intent.putExtra(datasource.USER_NAME,mUserName)
                            intent.putExtra(datasource.CORRECT_ANSWERS,mcorrectAnswers)
                            intent.putExtra(datasource.TOTAL_QUESTIONS,mQuestionList!!.size)
                            startActivity(intent)
                        }

                    }
                }else{
                    val question = mQuestionList?.get(mCurrentPosition - 1)
                    if(question!!.correctAnswer != mselectedOptionPosition){
                        answerView(mselectedOptionPosition , R.drawable.wrong_option_background)
                    }
                    else{mcorrectAnswers++}
                    answerView(question.correctAnswer , R.drawable.right_option_background)
                    if(mCurrentPosition == mQuestionList!!.size){
                        dc_submit_bttn.text = "FINISH"
                    }
                    else{
                        dc_submit_bttn.text = "GO TO NEXT QUESTION"
                    }
                    mselectedOptionPosition = 0
                }

            }
        }
    }
    private fun answerView(answer:Int , drawableView:Int){

        when(answer){

            1 -> {dc_option_01.background = ContextCompat.getDrawable(this,drawableView)}
            2 -> {dc_option_02.background = ContextCompat.getDrawable(this,drawableView)}
            3 -> {dc_option_03.background = ContextCompat.getDrawable(this,drawableView)}
            4 -> {dc_option_04.background = ContextCompat.getDrawable(this,drawableView)}
        }
    }
    private fun selectedOptionView(tv: TextView, selectedOptionNum:Int){
        defaultOptionLayout()
        mselectedOptionPosition = selectedOptionNum
        tv.setTextColor(Color.parseColor("#363A43"))
        tv.setTypeface(tv.typeface , Typeface.BOLD)
        tv.background = ContextCompat.getDrawable(this,R.drawable.selected_dc_option_border_background)

    }
}
```

* SelectTeam.kt is for the user to select his/her team.

```
class SelectTeam : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        val userName = intent.getStringExtra(datasource.USER_NAME)
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_select_team)
        Marvel_Bttn.setOnClickListener{
            val intent1 = Intent(this,MarvelQuestion::class.java)
            intent1.putExtra(datasource.USER_NAME , userName)
            startActivity(intent1)
            finish()
        }
        DC_Bttn.setOnClickListener{
            val intent2 = Intent(this,DCQuestion::class.java)
            intent2.putExtra(datasource.USER_NAME , userName)
            startActivity(intent2)
            finish()
        }

    }
}
```

* ResultActivity.kt is just showing the user's result.

```
class ResultActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_result)
        window.decorView.systemUiVisibility = View.SYSTEM_UI_FLAG_FULLSCREEN
        val userName = intent.getStringExtra(datasource.USER_NAME)
        tv_name.text = userName
        val totalQuestions = intent.getIntExtra(datasource.TOTAL_QUESTIONS,0)
        val correctAnswers = intent.getIntExtra(datasource.CORRECT_ANSWERS,0)
        Log.i("Total Questions:",totalQuestions.toString())
        Log.i("Correct Answers:",correctAnswers.toString())
        ProgressBar.max = totalQuestions
        if(correctAnswers > 0)
        {
            updateProgressBar(correctAnswers,totalQuestions)
            tv_score.text = "$correctAnswers/$totalQuestions"
        }
        else
        {
            updateProgressBar(0,10)
            tv_score.text = "$correctAnswers/$totalQuestions"
        }

        when{

            correctAnswers <= 5 ->{tv_congratulations.text = "You need to work on your knowledge"}
            correctAnswers <= 8 -> {tv_congratulations.text = "You are an average fan"}
            correctAnswers <= 10 -> {tv_congratulations.text = "You are a die hard fan"}
        }
        btn_finish.setOnClickListener{view -> startActivity(Intent(this,MainActivity::class.java))}

    }
    private fun updateProgressBar(prog:Int,max:Int)
    {
        ProgressBar.progress = prog
        ProgressBar.max = max
    }
}
```

## UI (View) 

All the UI files are located in the res>layout folder.
I would encourage you to design your own UI cause mine is not good and you will also learn some things.

Though I would recommend you to just take all the drawables file from res>drawables and copy it into your drawables folder.

# Screenshots

<p align = "left">
<img src="https://user-images.githubusercontent.com/59731205/138231597-cefc4a27-3d9f-4dec-80ab-f43a344b95ae.png" width ="200">
<img src="https://user-images.githubusercontent.com/59731205/138231899-214c5c29-2136-4826-a974-3be096ff750c.png" width ="200">
<img src="https://user-images.githubusercontent.com/59731205/138232001-eade077b-84a2-498b-a7fa-2f9e5ae52476.png" width ="200">
</p>

[video1](https://user-images.githubusercontent.com/59731205/138166675-6a914fb7-daad-4346-8ca3-aa25bcbafb33.mp4)



