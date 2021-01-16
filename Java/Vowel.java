//WAP inputa charactor and check if it is vowel or consonents
import java.io.*;
class Vowel
{
  public static void main(String[] args)throws IOException
  {
    char ch;
	InputStreamReader ir=new InputStreamReader(System.in);
	BufferedReader br=new BufferedReader(ir);
	System.out.println("Enter a Charactor :");    
	ch=(char) br.read();
	if(ch=='a'||ch=='A')             /*OR if(ch=='a'||ch=='A'||ch=='e'||ch=='E'.......ch=='u'||ch=='U')
	  System.out.println("Vowel");
	else
      if(ch=='e'||ch=='E')
	  System.out.println("Vowel");
	else
	if(ch=='i'||ch=='I')
	  System.out.println("Vowel");
	else
	if(ch=='o'||ch=='O')
	  System.out.println("Vowel");
	else
	if(ch=='u'||ch=='U')
	  System.out.println("Vowel");
	else
	System.out.println("Cansonents");
  }
 }