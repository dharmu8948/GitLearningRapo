/*

import java.util.*;
import java.lang.*;
import java.io.*;
class GFG
 {
	public static void main (String[] args)
	 {
	     Scanner sc = new Scanner(System.in);
	     int n=sc.nextInt();
	     int rem,sum=0;
	     int b=n;
	     while(n>0)
	     {
	         rem=n%10 ;
	         sum=sum+rem*rem*rem;
	         n=n/10;
	     }
	     if(b==sum)
	        System.out.println("Yes");
	        else
	        System.out.println("No");
	 }
}

*/
class Test
{
	public static void main(String[] args)
	{
		int a=100;
		System.out.println(++a);
	}
}