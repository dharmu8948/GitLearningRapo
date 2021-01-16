import java.util.*;
import java.io.*;

public class Main {
  public static void main(String args[]) throws IOException {
    
    //write your code here
    Scanner sc=new Scanner(System.in);
    int t=sc.nextInt();
    while(t-- >0)
    {
      int ar[]=new int[12];
      for(int j=0;j<12;j++)
       ar[j]=sc.nextInt();
      Arrays.sort(ar);
      int i;
      for(i=0;i<12;i=i+4)
      {
        if(ar[i]!=ar[i+3])
        {
          System.out.println("no");
          break;
        }
      }
      if(i==12)
         System.out.println("yes");
    }
    
  }
}