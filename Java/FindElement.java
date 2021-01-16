import java.io.*;
class FindElement
{
public static void main(String[] args)throws IOException
{
int i,j,item,count=-1;
int a[]=new int[10];
BufferedReader br =new BufferedReader(new InputStreamReader(System.in));
System.out.println("Enter 5 element of array");
for(i=0;i<5;i++)
{
a[i]=Integer.parseInt(br.readLine());
}
System.out.println("Enter the element to be search");
item=Integer.parseInt(br.readLine());
for(i=0;i<5;i++)
{
count++;
if(a[i]==item)
{
System.out.println("Search Successful");
System.out.println("item found at index\t"+count);
}
}
//System.out.println("Search unsuccessful");
}
}
