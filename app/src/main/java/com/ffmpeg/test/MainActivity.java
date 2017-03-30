package com.ffmpeg.test;

import android.Manifest;
import android.os.Environment;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.text.method.ScrollingMovementMethod;
import android.util.Log;
import android.view.Surface;
import android.view.SurfaceHolder;
import android.view.SurfaceView;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;
import android.widget.Toast;

import com.tbruyelle.rxpermissions.RxPermissions;

import java.io.File;

import rx.Observer;

public class MainActivity extends AppCompatActivity implements SurfaceHolder.Callback {

    private SurfaceView surfaceView;
    private SurfaceHolder mHolder;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        surfaceView = (SurfaceView) findViewById(R.id.surfaceview);
        mHolder = surfaceView.getHolder();
        mHolder.addCallback(this);
        final TextView infoText = (TextView) findViewById(R.id.text_libinfo);
        infoText.setMovementMethod(ScrollingMovementMethod.getInstance());
        Button button = (Button) this.findViewById(R.id.button_avcodec);
        button.bringToFront();
        button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                infoText.setText(codecinfo()+"");
                start();
            }
        });

    }


    //JNI
    public native int avcodecinfo(String path,Object surface);
    public native String codecinfo();

    static{
        System.loadLibrary("ijkffmpeg");
        System.loadLibrary("helloworld");
    }

    @Override
    public void surfaceCreated(SurfaceHolder holder) {
        start();
    }

    private void start() {
        RxPermissions.getInstance(this)
                .request(Manifest.permission.READ_EXTERNAL_STORAGE)
                .subscribe(new Observer<Boolean>() {
                    @Override
                    public void onCompleted() {

                    }

                    @Override
                    public void onError(Throwable e) {

                    }

                    @Override
                    public void onNext(Boolean aBoolean) {
                        if (aBoolean) {
                            new Thread(new Runnable() {
                                @Override
                                public void run() {
                                    avcodecinfo("/storage/emulated/0/begin.mp4",mHolder.getSurface());
                                }
                            }).start();
                        } else {
                            Toast.makeText(MainActivity.this,"请打开存储卡权限",Toast.LENGTH_SHORT).show();
                        }
                    }
                });

    }

    @Override
    public void surfaceChanged(SurfaceHolder holder, int format, int width, int height) {

    }

    @Override
    public void surfaceDestroyed(SurfaceHolder holder) {

    }
}
