import java.util.*;
import java.lang.*;
import java.io.*;
class GFG
 {
	 public static void main (String[] args) {
     Scanner sc= new Scanner(System.in);
     int t=sc.nextInt();
      while(t>0){
         int n=sc.nextInt();
         char c='A';
          for(int i=0;i<n;i++)
          {
              if(i==0 || i==n-1)
              {
                  for(int j=0;j<n;j++)
                  System.out.print((c++));
              }
              else
              {
                  for(int j=0;j<n;j++)
                  if(j==0||j==n-1)
                  System.out.print((c++));
                  else
                  System.out.print("$");
               }
               System.out.println();
                }
                t--;
      }
      }
}