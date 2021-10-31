package com.example.quiz_app
import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import com.example.quiz_app.data.datasource
import kotlinx.android.synthetic.main.activity_select_team.*

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