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
    fun getDCQuestion(): List<Question>{
        return listOf<Question>(
            Question(1, R.string.Dques01, R.drawable.dcimg01,"Clar Kent","Kon-El","Kal-El","Jor-El",3),
            Question(2, R.string.Dques02, R.drawable.dcimg02,"In a car accident","In military conflict","In a mugging","In a shootout",3),
            Question(3, R.string.Dques03, R.drawable.dcimg03,"Alan Scott","John Stewart","Guy Gardner","Hal Jordan",1),
            Question(4, R.string.Dques04, R.drawable.dcimg04,"Young Justice","The Teen Titans","Justice Society of America","The Justice Troup",3),
            Question(5, R.string.Dques05, R.drawable.dcimg05,"Oliver Queen","Bruce Wayne","Barry Allen","Clark Kent",1),
            Question(6, R.string.Dques06, R.drawable.dcimg06,"Mount Olympus","Minas","Atlantis","Asgard",3),
            Question(7, R.string.Dques07, R.drawable.dcimg07,"Dick Grayson","Tim Drake","Damian Wayne","JAson Todd",1),
            Question(8, R.string.Dques08, R.drawable.dcimg08,"Parallax","Atrocitus","Darkseid","Doomsday",4),
            Question(9, R.string.Dques09, R.drawable.dcimg09,"Batman","Ion","The Flash","Parallax",1),
            Question(10, R.string.Dques10, R.drawable.dcimg10,"The Red Hood","Blackstorm","CrimeBane","NightWing",4)
        )
    }
}