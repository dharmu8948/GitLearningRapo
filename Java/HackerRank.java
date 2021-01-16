/*
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

class Solution {

    public static void main(String[] args) {
        int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0,c0=0;
        long sum=0;
        Scanner sc =new Scanner(System.in);
        long n=sc.nextLong();
        while(n>0)
        {
            long rem1 = n % 10;
            sum=sum*10+rem1;
            n=n/10;
        }
        while(sum>0)
        {
            long rem=sum%10;
            if(rem==0)
            {
                c0++;
                sum=sum/10;
              //  System.out.println(c0+"0");
                
            }
            if(rem==1)
            {
                c1++;
                //System.out.println(c1+"1");
                sum=sum/10;
            }
            if(rem==2)
            {
                c2++;
              //  System.out.println(c2+"2");
                sum=sum/10;
            }
            if(rem==3)
            {
                c3++;
               // System.out.println(c3+"3");
                sum=sum/10;
            }
            if(rem==4)
            {
                c4++;
              //  System.out.println(c4+"4");
                sum=sum/10;
            }
            if(rem==5)
            {
                c5++;
              //  System.out.println(c5+"5");
                sum=sum/10;
            }
            if(rem==6)
            {
                c6++;
              //  System.out.println(c6+"6");
                sum=sum/10;
            }
            if(rem==7)
            {
                c7++;
              //  System.out.println(c7+"7");
                sum=sum/10;
            }
            if(rem==8)
            {
                c8++;
              //  System.out.println(c8+"8");
                sum=sum/10;
            }
            if(rem==9)
            {
                c9++;
              //  System.out.println(c9+"9");
                sum=sum/10;
            }
        }
        if(c0>0)
        System.out.print(c0+"0");
        if(c1>0)
        System.out.print(c1+"1");
        if(c2>0)
        System.out.print(c2+"2");
        if(c3>0)
        System.out.print(c3+"3");
        if(c4>0)
        System.out.print(c4+"4");
        if(c5>0)
        System.out.print(c5+"5");
        if(c6>0)
        System.out.print(c6+"6");
        if(c7>0)
        System.out.print(c7+"7");
        if(c8>0)
        System.out.print(c8+"8");
        if(c9>0)
        System.out.print(c9+"9");
        
    }
}
===================================================================================================================
import java.util.*;
class ArrayDemo
{
	public static void main(String[] args)
	{
		int[] arr = new int[20];
	//	Scanner sc = new Scanner(System.in);
	//	for(int i=0;i<20;i++)
	//		arr[i]=sc.nextInt();
		for(int i=0;i<20;i++)
			System.out.print(arr[i]+" "); //automatically initialize with 0 to all element by new operator
		System.out.println("\n");
		
		
		boolean[] bool = new boolean[10];
		for(int i=0;i<10;i++)
			System.out.print(bool[i]+" ");
		System.out.println("\n");
		
		double[] D = new double[10];
		for(int i=0;i<10;i++)
			System.out.print(D[i]+" ");
	}
}
=================================================================================================================
// Java program to illustrate creating an array 
// of integers,  puts some values in the array, 
// and prints each value to standard output. 
  
class ArrayDemoTwo  
{ 
    public static void main (String[] args)  
    {          
      // declares an Array of integers. 
      int[] arr; 
          
      // allocating memory for 5 integers. 
      arr = new int[5]; 
          
      // initialize the first elements of the array 
      arr[0] = 10; 
          
      // initialize the second elements of the array 
      arr[1] = 20; 
          
      //so on... 
      arr[2] = 30; 
      arr[3] = 40; 
      arr[4] = 50; 
          
      // accessing the elements of the specified array 
      for (int i = 0; i < arr.length; i++) 
         System.out.println("Element at index " + i +  
                                      " : "+ arr[i]);           
    } 
}
================================================================================================================
// Java program to illustrate creating an array of 
// objects 
  
class Students 
{ 
    public int roll_no; 
    public String name; 
    Students(int roll_no, String name) 
    { 
        this.roll_no = roll_no; 
        this.name = name; 
    } 
} 
  
// Elements of array are objects of a class Student. 
class Demo5
{ 
    public static void main (String[] args) 
    { 
        // declares an Array of integers. 
        Students[] arr; 
  
        // allocating memory for 5 objects of type Student. 
        arr = new Students[5]; 
  
        // initialize the first elements of the array 
        arr[0] = new Students(1,"aman"); 
  
        // initialize the second elements of the array 
        arr[1] = new Students(2,"vaibhav"); 
  
        // so on... 
        arr[2] = new Students(3,"shikar"); 
        arr[3] = new Students(4,"dharmesh"); 
        arr[4] = new Students(5,"mohit"); 
  
        // accessing the elements of the specified array 
        for (int i = 0; i < arr.length; i++) 
            System.out.println("Element at " + i + " : " + 
                        arr[i].roll_no +" "+ arr[i].name); 
    } 
}  
===============================================================================================================
class GFG 
{ 
    public static void main (String[] args) 
    { 
        int[] arr = new int[2]; 
        arr[0] = 10; 
        arr[1] = 20;
        System.out.println(arr.length);	  //2	
  
        for (int i = 0; i <= arr.length; i++) 
            System.out.println(arr[i]); 
    } 
} 
=====================================================================================================================
// Java program to demonstrate  
// passing of array to method 
  
class ArrayDemo9 
{     
    // Driver method 
    public static void main(String args[])  
    { 
        int arr[] = {3, 1, 2, 5, 4}; 
          
        // passing array to method m1 
        sum(arr); 
      
    } 
  
    public static void sum(int[] arr)  
    { 
        // getting sum of array values 
        int sum = 0; 
          
        for (int i = 0; i < arr.length; i++) 
            sum+=arr[i]; 
          
        System.out.println("sum of array values : " + sum); 
    } 
} 
====================================================================================================================
// Java program to demonstrate  
// return of array from method 
  
class ArrayDemo10 
{     
    // Driver method 
    public static void main(String args[])  
    { 
        int arr[] = m1(); 
          
        for (int i = 0; i < arr.length; i++) 
            System.out.print(arr[i]+" "); 
      
    } 
  
    public static int[] m1()  
    { 
        // returning  array 
        return new int[]{1,2,3}; 
    } 
} 
=================================================================================================================*/
// Java program to demonstrate  
// Class Objects for Arrays 
  
class ObjectArray
{  
    public static void main(String args[])  
    { 
        int intArray[] = new int[3]; 
        byte byteArray[] = new byte[3]; 
        short shortsArray[] = new short[3]; 
          
        // array of Strings 
        String[] strArray = new String[3]; 
          
        System.out.println(intArray.getClass()); 
        System.out.println(intArray.getClass().getSuperclass()); 
        System.out.println(byteArray.getClass()); 
        System.out.println(shortsArray.getClass()); 
        System.out.println(strArray.getClass()); 
    } 
} 