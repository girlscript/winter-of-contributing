package com.example.quiz_app


import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.View
import android.view.WindowManager
import android.widget.Toast
import com.example.quiz_app.data.datasource
import kotlinx.android.synthetic.main.activity_main.*

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        window.setFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN,WindowManager.LayoutParams.FLAG_FULLSCREEN)
        window.decorView.systemUiVisibility = View.SYSTEM_UI_FLAG_HIDE_NAVIGATION
        setContentView(R.layout.activity_main)
        window.decorView.systemUiVisibility = View.SYSTEM_UI_FLAG_FULLSCREEN
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