import java.util.*;
import java.lang.*;
import java.io.*;
class DigitalPrimeSum
 {
	public static void main (String[] args)
	{
	    Scanner sc = new Scanner(System.in);
	    int t = sc.nextInt();
	    for(int j=0;j<t;j++)
	    {
	        int n = sc.nextInt();
	        int sum=0;
	        while(n>0)
	        {
	            int rem = n%10;
	            sum = sum+rem;
	            n=n/10;
	        }
			System.out.println(sum);
			int res=0;
	        if(sum<=9)
	        {
	            res = res+sum;
	        }
	        else
	        {
	            while(sum>0)
				{
					int rem1 = sum%10;
	            res = res+rem1;
	            sum=sum/10;
				}
	        }
			System.out.println(res);
	        int flag=0;
			if(res==1)
				System.out.println("0");
	       else
		   {
			    for(int i=3;i<res;i++)
	        {
	            if(res%i==0)
	            {
	                flag++;
	                break;
	            }
	        }
	        if(flag>=1)
	        System.out.println("0");
	        else
	        System.out.println("1"); 
		   }
	    }
	}
}