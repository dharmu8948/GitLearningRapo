//wap to change the color of frame
import java.awt.*;
import java.awt.event.*;
class mouseevent extends Frame implements MouseListener
{
	String mouse;
	mouseevent()
	{
		setTitle("Mouse Event Demo");
		setSize(500,500);
		setVisible(true);
		setBackground(Color.blue);
		addMouseListener(this);
	}
	public void mouseClicked(MouseEvent me)
	{
		mouse="you Have Clicked"+"("+me.getX()+","+me.getY()+")";
		setTitle(mouse);
	}
	public void mousePressed(MouseEvent me)
	{
		setBackground(Color.yellow);
	}
	public void mouseReleased(MouseEvent me)
	{
		setBackground(Color.cyan);
	}
	public void mouseEntered(MouseEvent me)
	{
		setBackground(Color.green);
	}
	public void mouseExited(MouseEvent me)
	{
		setBackground(Color.red);
	}
	public static void main(String[] args)
	{
		new mouseevent();
	}
}