package com.test.jniexample;

import android.app.Activity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

import com.utils.JNative;

public class MainActivity extends Activity
{

	private TextView textView1;
	private Button button1;

	@Override
	protected void onCreate(Bundle savedInstanceState)
	{
		super.onCreate(savedInstanceState);
		setContentView(R.layout.activity_main);
		findViews();

		button1.setOnClickListener(new Button.OnClickListener()
		{

			@Override
			public void onClick(View v)
			{
				// TODO Auto-generated method stub
				textView1.setText(String.valueOf(JNative.getUnixTime()));

			}
		});

	}

	private void findViews()
	{
		textView1 = (TextView) findViewById(R.id.textView1);
		button1 = (Button) findViewById(R.id.button1);

	}
}
