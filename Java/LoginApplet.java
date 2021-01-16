import java.applet.*;
import java.awt.*;
public class LoginApplet extends Applet
{
Button b1,b2;
TextField t1,t2;
Label l1,l2;
public void init()
{
Label l1=new Label("Username");
Label l2=new Label("Password");
TextField t1=new TextField(10);
TextField t2=new TextField(10);
//t2.setEchoChar('*'); 
t2.setEchoChar('*'); 
Button b1=new Button("SUBMIT");
Button b2=new Button("RESET");
add(l1);
add(t1);
add(l2);
add(t2);
add(b1);
add(b2);
setBackground(Color.cyan);
}
}
//<applet code=LoginApplet height=150 width=200></applet>
