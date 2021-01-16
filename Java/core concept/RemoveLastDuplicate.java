import java.util.*;
import java.lang.*;
import java.io.*;
class Neelesh
 {
	public static void main (String[] args)
	 {
	     Scanner sc = new Scanner(System.in);
	     int t = sc.nextInt();
	     int flag=0;
	     for(int j=0;j<t;j++)
	     {
	         int n = sc.nextInt();
	         int a[] = new int[n];
	         for(int i=0;i<n;i++)
	         a[i] = sc.nextInt();
	         for(int i=n-1;i>=1;i--)
	         {
	             if(a[i]==a[i-1])
	             {
	                 flag++;
	                 System.out.print(i+" "+a[i]);
	                 break;
	             }
	         }
	         if(flag==0)
	         System.out.print("-1");
	         System.out.println();
	     }
	 }
}