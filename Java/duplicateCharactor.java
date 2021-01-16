//import java.io.*;
class duplicateCharactor
{
public static void main(String[] args)//throws IOExcepion
{
int i,j,c;
//String a[]={"Dharmendra"};
BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
System.out.println("Enter the String");
//String s=new String();
//for(i=0;i<10;i++)
String s =br.readLine();
int len=s.length();
int charCount[] =new int[25];
for(i=0;c>=65&&c<=90;i++)
{
	c=(char)(c+32);
if(c>=97&&c<=122)
{
	charCount[c-97]+=1;
}
}
for(i=0;i<26;i++)
{
	if(charCount[i]>1)
	System.out.println( ":" +charCount[i]);
}
}
}
