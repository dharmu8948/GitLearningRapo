//program to demonstration of menu bar on notepad
import java.awt.*;
class notepad0 //extends Frame
{
MenuBar mbar;
Menu file,edit,format,help;
MenuItem fnew,open,save,saveAs,page,exit,print;
MenuItem undo,cut,copy,paste;
MenuItem wordwrap,font;
MenuItem about,topics;
TextArea ta;
Frame f;
notepad0()
{
f=new Frame("AWT :Notepad");
mbar=new MenuBar();
f.setMenuBar(mbar);
ta=new TextArea();
f.add(ta);
file=new Menu("File");
edit=new Menu("EDIT");
format=new Menu("Format");
help=new Menu("Help");
fnew=new MenuItem("New");
open=new MenuItem("Open");
save=new MenuItem("Save");
saveAs=new MenuItem("SaveAs");
page=new MenuItem("Page Setup...");
print=new MenuItem("Print...");
exit=new MenuItem("Exit");
undo=new MenuItem("Undo");
cut=new MenuItem("Cut");
copy=new MenuItem("Copy");
//copy=new MenuItem("Copy");
paste=new MenuItem("Paste");
wordwrap=new MenuItem("Word Wrap");
font=new MenuItem("Font..");
about=new MenuItem("About");  //("About Notepad");
topics=new MenuItem("Help topics");
file.add(fnew);
file.add(open);
file.add(save);
file.add(saveAs);
file.add(page);
file.add(print);
file.add(exit);
edit.add(undo);
edit.add(cut);
edit.add(copy);
edit.add(paste);
format.add(wordwrap);
format.add(font);
help.add(topics);
help.add(about);
mbar.add(file);
mbar.add(edit);
mbar.add(format);
mbar.add(help);
f.setVisible(true);
f.setSize(500,500);
}
public static void main(String[] args)
{
new notepad0();
}
}