import java.awt.*;
import java.awt.event.*;
class DrawGraph extends Frame implements MouseListener 
{
int x[]=new int[20];
int y[]=new int[20];
Button b;
int p=0;
DrawGraph()
{
setSize(700,700);
setVisible(true);
b=new Button("DrawGraph");
setLayout(new FrameLayout());
add(b);
addMouseListener(this);
b.addActionListener(new ButtonEvent());
}
public void mousePressed(MouseEvent me)
{
}
public void mouseReleased(MouseEvent me)
{
}
public void mouseClicked(MouseEvent me)
{
x[p]=me.getX();
y[p]=me.getY();
p++;
}
public void mouseEntered(MouseEvent me)
{
}
public void mouseExited(MouseEvent me)
{
}
class ButtonEvent implements ActionListener
{
public void actionPerformed(ActionEvent ae)
{
repaint();
}
}
public void paint(Graphics g)
{
g.drawPolyline(x,y,p);
}
public static void main(String[] args)
{
new DrawGraph();
}
}