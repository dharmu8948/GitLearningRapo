/*
//javaprogram to calculate average of numbers using array
import java.util.*;
class AvgByArray
{
	public static void main(String[] args)
	{
		int i,j,sum=0;
		double Avg;
		int A[] =new int[20];
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the Number of Element :");
		int n=sc.nextInt();
		System.out.println("Enter the Numbers :");
		for(i=0;i<n;i++)
		{
			A[i]=sc.nextInt();
		}
	//	System.out.println("Enter the Numbers :");
		for(i=0;i<n;i++)
		{
			sum=sum+A[i];
		}
		Avg=(double)sum/n;
		System.out.println("Average is :"+Avg);
	}
}
======================================================================================================================
//javaprogram to check even and odd of the given numbers
import java.util.*;
class EvenOdd
{	
    public static void main(String[] args)
	{
		Scanner sc =new Scanner(System.in);
		System.out.println("Enter the Number");
		int n= sc.nextInt();
		if((n/2)*2==n)
			System.out.println("EVEN");
		else
			System.out.println("ODD");
	}
}
========================================================================================================================
//java program to display first 100 prime numbers
import java.util.*;
class PrimeNumbers
{
	public static void main(String[] args)
	{
		int i,j;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the number Limits :");
		int n =sc.nextInt();
		for(i=1;i<=n;i++)
		{
			int flag=0;
			for(j=2;j<i;j++)
			{
				if(i%j==0)
				{
					flag++;
					break;
				}
			}
			if(flag==0)
			{
				System.out.print(i+" ");
			}
		}
	}
}
=========================================================================================================================
//java program to reverse a String using recursion
class ReverseString
{
	public static void main(String[] args)throws IOException
	{
		String S="Welcome To Java Programming";
		String Reverse=reverseString(S);
		System.out.println("the Reverse String  is :"+Reverse);
	}
	public static String reverseString(String S)
	{
		if(S.isEmpty())
			return S;
		return reverseString(S.substring(1))+S.charAt(0);
	//	BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
	}
}
=======================================================================================================================
//reverse of String by user
import java.util.Scanner;
class ReverseString2
{
	public static void main(String[] args)
	{
		String str;
		System.out.println("Enter Your String :");
		Scanner sc = new Scanner(System.in);
		str=sc.nextLine();
		sc.close();
		String reversed = reverseString(str);
		System.out.println("the reversed String is :"+reversed);
	}
	public static String reverseString(String str)
	{
		if(str.isEmpty())
			return str;
		else
			return reverseString(str.substring(1)) + str.charAt(0);
	}
}
=========================================================================================================================
//reverse a number using while loop
import java.util.*;
class ReverseInt
{
	public static void main(String[] args)
	{
		int i,rem, rev=0;
		System.out.println("Enter a Number :");
		Scanner sc = new Scanner(System.in);
		int n =sc.nextInt();
		while(n>0)
		{
			rem = n % 10;
			rev = rev * 10 + rem;
			n = n / 10;
		}
		System.out.println("Reverse Number is :"+rev);
	}
}
=======================================================================================================================
//reverse a number using for loop
import java.util.*;
class ReverseInt2
{
	public static void main(String[] args)
	{
		int i,rem, rev=0;
		System.out.println("Enter a Number :");
		Scanner sc = new Scanner(System.in);
		int n =sc.nextInt();
		for(i=n;i>0;i=i/10)
		{
			rem = i % 10;
			rev = rev * 10 + rem;
		//	n = n / 10;
		}
		System.out.println("Reverse Number is :"+rev);
	}
}
=================================================================================================================*/
//find ASCIIcode of a character
import java.util.Scanner;
class ASCIIDemo
{
	public static void main(String[] args)
	{
		System.out.println("Enter A Character :");
		Scanner scan = new Scanner(System.in);
		char ch = scan.nextChar();
		int asciiCode = ch;
		int asciiValue = (int)ch;;
		System.out.println("ASCII value of "+ch+" is :" + asciiCode);
		System.out.println("ASCII value of "+ch+" is :" + asciiValue);
	}
}