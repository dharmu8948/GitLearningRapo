
//    Question 1:


//    Answer:-

import java.util.*;
class StringPermutation
{
	static boolean isSwap(char str[],int start,int current)
	{
		for(int i=start;i<current;i++)
		{
			if(str[i]==str[current])
				return false;
		}
		return true;
	}
	static void permutation(char str[],int index,int n)
	{
		if(index>=n)
		{
			System.out.println(str);
			return;
		}
		for(int i=index;i<n;i++)
		{
			boolean check=isSwap(str,index,i);
			if(check)
			{
				swap(str,index,i);
				permutation(str,index+1,n);
				swap(str,index,i);
			}
		}
	}
	static void swap(char[] str,int i,int j)
	{
		char c=str[i];
		str[i]=str[j];
		str[j]=c;
	}
	public static void main(String[] args)
	{
		Scanner scn = new Scanner(System.in);
		int n=scn.nextInt();
		char str[]=new char[n];
		for(int i=0;i<n;i++)
			str[i]=scn.next().charAt(0);
		//char str[]={'T','R','U','E'};
	//	String str = scn.nextLine();
		int m=str.length;
		permutation(str,0,m);
	}
}
//   output:   
//              4
//              t
//              r
//              u
//              e
//           prints all possible combinations of "true"



//      Question 2

//      Answer:-


