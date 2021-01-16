import java.util.*;
import java.lang.*;
import java.io.*;
class GFG
 {
	public static void main (String[] args)
	 {
	     int t,n,temp,sum=0,res1=0;
	     Scanner sc = new Scanner(System.in);
	     t=sc.nextInt();
	     for(int i=0;i<t;i++)
	     {
	         n=sc.nextInt();
	         temp=n;
	         while(temp>0)
	         {
	             int rem=temp%10;
				// if(rem==0)
				//	 sum="0"
	             sum=sum*10+rem;
	             temp=temp/10;
	         }
	         int res=sum+n;
	         int temp2=res;
	         while(temp2>0)
	         {
	             int rem=temp2%10;
	             res1=res1*10+rem;
	             temp2=temp2/10;
	         }
	         if(res1==res)
	         System.out.println(res);
	         else
	         System.out.println("-1");
	     }
	     
	 }
}