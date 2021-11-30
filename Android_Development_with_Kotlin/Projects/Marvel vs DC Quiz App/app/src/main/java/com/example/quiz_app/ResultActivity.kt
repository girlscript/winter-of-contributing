package com.example.quiz_app

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import android.view.View
import com.example.quiz_app.data.datasource
import kotlinx.android.synthetic.main.activity_result.*

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