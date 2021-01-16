//WAP TO CLOSE THE FRAME AFTER CLICKING CLOSE BUTTON
import java.awt.*;
import java.awt.event.*;
class WindowEvent0 extends Frame implements WindowListener
{
	WindowEvent0()
	{
		setTitle("Frame with WindowEvent");
		setSize(500,300);
		setBackground(Color.red);
		setVisible(true);
		addWindowListener(this);
	}
	public void windowClosing(WindowEvent we)
	{
		System.exit(0);
	}
	public void windowClosed(WindowEvent we)
	{

	}
	public void windowActivated(WindowEvent we)
	{
	//   setBackground(Color.blue);	
	}
	public void windowDeactivated(WindowEvent we)
	{
	//	setBackground(Color.yellow);
	}
	public void windowIconified(WindowEvent we)
	{
		
	}
	public void windowDeiconified(WindowEvent we)
	{
		
	}
	public void windowOpened(WindowEvent we)
	{
	
	}
	public static void main(String[] args)
	{
		new WindowEvent0();
	}
}
	
	