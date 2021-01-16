import java.util.*;
import java.lang.*;
import java.io.*;
class GFG
 {
	public static void main (String[] args)
	 {
	     Scanner sc = new Scanner(System.in);
	     int t=sc.nextInt();
	     for(int i=0;i<t;i++)
	     {
	         String s=sc.next();
	         int sum=0;
	         String a[]=s.split("\\D");
	         for(int j=0;j<a.length;j++)
	         {
	             if(!a[j].isEmpty())
	             sum=sum+Integer.parseInt(a[j]);
	         }
	         System.out.println(sum);
	     }
	 }
}