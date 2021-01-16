import java.io.*;
class NameList
{
public static void main(String[] args)throws IOException
{
String name[]=new String[20];
int i,j;
String temp;
BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
System.out.println("Enter 20 number");
for(i=0;i<20;i++)
{
name[i]=br.readLine();
}
//Selection sort
for(i=0;i<19;i++) //n-1 posses
{
for(j=i+1;j<20;j++)
{
if(name[i].compareTo(name[i])>0)
{
temp=name[i];
name[i]=name[j];
name[j]=temp;
}
}
}
System.out.println("Name in alphabetical order");
for(i=0;i<20;i++)
{
System.out.println(name[i]);
}
}
}
