//program to creating a frame by object Creation of Frame class
import java.awt.*;
class MyFrame2 extends Frame
{
public static void main(String[] args)
{
Frame f=new Frame("MyFrame2...");    //Frame f=new Frame();
f.setSize(500,500);
f.setVisible(true);
f.setLocation(300,120);
f.setResizable(false);
f.setBackground(Color.blue);
}
}
//  To close Frame press ctrl+c on console