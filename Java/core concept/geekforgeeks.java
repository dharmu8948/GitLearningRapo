import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		int t,n,res=0;
		Scanner sc  = new Scanner(System.in);
		t = sc.nextInt();
		while(t-->0)
		{
			res=0;
		    int i=1;
		    n = sc.nextInt();
		    while(n-->0)
		    {  
		        res+=i*i;
		        i+=2;
		    }
		    System.out.println(res);
		}
	}
}