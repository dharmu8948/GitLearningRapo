import java.awt.*;
import java.awt.event.*;
public class keyEvent extends Frame implements KeyListener
{
String str="";
Label l;
keyEvent()
{
 setSize(500,400);
 setVisible(true);
 l=new Label();
 addKeyListener(this);
 add(l);
 }
 public void keyPressed(KeyEvent ke)
 {
 if(ke.getKeyCode()==KeyEvent.VK_0)
 {
 str=str+"";
 l.setText(str);
 }
 else if(ke.getKeyCode()==KeyEvent.VK_1)
  {
 str=str+"1";
 l.setText(str);
 }
 else if(ke.getKeyCode()==KeyEvent.VK_2)
  {
 str=str+"2";
 l.setText(str);
 }
 else if(ke.getKeyCode()==KeyEvent.VK_3)
  {
 str=str+"3";
 l.setText(str);
 }
 else if(ke.getKeyCode()==KeyEvent.VK_4)
  {
 str=str+"4";
 l.setText(str);
 }
 else if(ke.getKeyCode()==KeyEvent.VK_5)
  {
 str=str+"5";
 l.setText(str);
 }
 else if(ke.getKeyCode()==KeyEvent.VK_6)
  {
 str=str+"6";
 l.setText(str);
 }
 else if(ke.getKeyCode()==KeyEvent.VK_7)
  {
 str=str+"7";
 l.setText(str);
 }
 else if(ke.getKeyCode()==KeyEvent.VK_8)
  {
 str=str+"8";
 l.setText(str);
 }
 else if(ke.getKeyCode()==KeyEvent.VK_9)
  {
 str=str+"9";
 l.setText(str);
 }
 }
 public void keyReleased(KeyEvent ke)
 {
 }
 public void keyTyped(KeyEvent ke)
 {
 }
 public static void main(String[] args)
 {
 new keyEvent();
 }
 }