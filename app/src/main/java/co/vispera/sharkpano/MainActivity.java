package co.vispera.sharkpano;

import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.widget.TextView;

import org.opencv.android.OpenCVLoader;

public class MainActivity extends AppCompatActivity {

    static {
        if (!OpenCVLoader.initDebug()) {

        }
    }

    static {
        System.loadLibrary("native-lib2");
    }

    private TextView textView;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        textView = (TextView) findViewById(R.id.text_view);
    }

    @Override protected void onResume() {
        super.onResume();

        long addr = opencvconceptNew();
        textView.setText(String.valueOf(opencvconceptGetRows(addr)));
        opencvconceptDelete(addr);

    }

    public native long opencvconceptNew();
    public native void opencvconceptDelete(long addr);
    public native int opencvconceptGetRows(long addr);


}
