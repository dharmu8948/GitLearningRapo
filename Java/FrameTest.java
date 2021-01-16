import java.awt.*;
import java.awt.event.*;
class FrameTest extends Frame
{
FrameTest()
{
setTitle("frame with Closing Event");
setSize(500,300);
setVisible(true);
setBackground(Color.cyan);
addWindowListener(new WindowAdapter() {
public void windowClosing(WindowEvent we)
{
System.exit(0);
}
});
}
public static void main(String[] args)
{
new FrameTest();
}
}