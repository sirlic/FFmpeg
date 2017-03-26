package com.ffmpeg.test;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.text.method.ScrollingMovementMethod;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        final TextView infoText = (TextView) findViewById(R.id.text_libinfo);
        infoText.setMovementMethod(ScrollingMovementMethod.getInstance());
        Button button = (Button) this.findViewById(R.id.button_avcodec);
        button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                infoText.setText(avcodecinfo());
            }
        });
    }


    //JNI
    public native String avcodecinfo();

    static{
        System.loadLibrary("ffmpeg");
        System.loadLibrary("helloworld");
    }

}
