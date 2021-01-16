import java.awt.*;
import java.awt.event.*;
public class windowadp
{
public static void main(String[] args)
{
Frame f=new Frame("Cal.......");
f.setLayout(null);
f.setSize(320,320);
f.setVisible(true);
Label l=new Label("awt frame");
f.add(l);
f.WindowListener(new WindowAdapter()
{
public void windowClosing(WindowEvent we)
{
System.exit(0);
}
}
}
}
