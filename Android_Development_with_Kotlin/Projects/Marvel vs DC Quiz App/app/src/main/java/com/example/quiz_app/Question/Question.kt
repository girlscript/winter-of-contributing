package com.example.quiz_app.Question

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