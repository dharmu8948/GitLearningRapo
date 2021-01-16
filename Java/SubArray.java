import java.util.*;
import java.lang.*;
import java.io.*;
class SubArraySum
 {
    int Solution(int arr[], int n, int sum)  
    { 
       int i_sum;
       for(int i = 0 ; i < n ; i++)
       {
           i_sum = arr[i];
           for(int j = i+1 ; j <= n ; j++)
           {
               if(i_sum==sum)
               {
                   System.out.println((i+1)+" "+j);
                   return 1;
               }
               if(i_sum > sum || j == n)
               break;
               i_sum = i_sum + arr[j];
           }
       }
       System.out.println("No SubArray Found");
       return 0;
    } 
  
    public static void main(String[] args)  
    { 
        SubArraySum as = new SubArraySum();
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
		int sum = sc.nextInt();
        int arr[] = new int[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }
        as.Solution(arr, n, sum); 
    } 
}