import java.applet.*;
import java.awt.*;
import java.awt.event.*;
public class mouseadapter extends Applet
{
class ButtonEvent implements ActionListener
{
public void actionPerformend(ActionEvent ae)
{
repaint();
}
}
Button B;
int x[]=new int[10];
int y[]=new int[10];
int p=0;
public void init()
{
setBackground(Color.cyan);
B=new Button("DrawGraph");
add(B);
addMouseListener(new MouseAdapter()
{
public void mouseClicked(MouseEvent me)
{
x[p]=me.getX();
y[p]=me.getY();
p++;
}
}
);
B.addActionListener(new ButtonEvent());
}
public void paint(Graphics g)
{
g.drawPolyline(x,y,p);
}
}
/*<applet code=mouseadapter width=1000 height=700>
</applet> */