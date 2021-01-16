/*
// Remving all Duplicates using extra space in sorted Array

import java.util.*;
class RemoveDuplicate
{
	public static void main(String[] args)throws Exception
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the number of Elements:  ");
		int n = sc.nextInt();
		int a[] = new int[n];
		int temp[] = new int[n];
		System.out.println("Enter the Elements:  ");
		for(int i=0;i<n;i++)
		{
			a[i] = sc.nextInt();
		}
		System.out.println("Before removing Duplicate Elements: ");
		for(int i=0;i<n;i++)
		{
			System.out.print(a[i]+" ");
		}
		System.out.println();
		
		int j=0;
		for(int i=0;i<n-1;i++)
		{
			if(a[i]!=a[i+1])
			{
				temp[j]=a[i];
				j++;
			}
		}
		temp[j]=a[n-1];
		System.out.print("After removing all Duplicate Elements: ");
		for(int i=0;i<n;i++)
		{
			System.out.print(temp[i]+" ");
		}
	}
}


======================================================================================================================*/

// Remving all Duplicates using constant space in sorted Array

import java.util.*;
class RemoveDuplicate2
{
	public static void main(String[] args)throws Exception
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the number of Elements:  ");
		int n = sc.nextInt();
		int a[] = new int[n];
	//	int temp[] = new int[n];
	    System.out.println("Enter the Elements:  ");
		for(int i=0;i<n;i++)
		{
			a[i] = sc.nextInt();
		}
		System.out.println("Before removing Duplicate Elements: ");
		for(int i=0;i<n;i++)
		{
			System.out.print(a[i]+" ");
		}
		System.out.println();
		
		int j=0;
		for(int i=0;i<n-1;i++)
		{
			if(a[i]!=a[i+1])
			{
				a[j]=a[i];
				j++;
			}
		}
		a[j]=a[n-1];
		System.out.print("After removing all Duplicate Elements: ");
		for(int i=0;i<=j;i++)
		{
			System.out.print(a[i]+" ");
		}
	}
}