package com.example.quiz_app

import android.content.Intent
import android.graphics.Color
import android.graphics.Typeface
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.View
import android.widget.TextView
import android.widget.Toast
import androidx.core.content.ContextCompat
import com.example.quiz_app.Question.Question
import com.example.quiz_app.data.datasource
import kotlinx.android.synthetic.main.activity_dc_question.*


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