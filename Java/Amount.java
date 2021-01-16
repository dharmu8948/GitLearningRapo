//WAP to input an amount in rupees and distribution this amount in minimum number of notes
import java.io.*;
class Amount
{
 public static void main(String[] args)throws IOException
 {
   int amt;
   InputStreamReader ir=new InputStreamReader(System.in);
   BufferedReader br=new BufferedReader(ir);
   System.out.println("Enter an Amount");
   amt=Integer.parseInt(br.readLine());
   System.out.println("2000 Notes="+(amt/2000));
   amt=amt%2000;
   System.out.println("500 Notes="+(amt/500));
   amt=amt%500;
   System.out.println("200 Notes="+(amt/200));
   amt=amt%200;
   System.out.println("100 Notes="+(amt/100));
   amt=amt%100;
   System.out.println("50 Notes="+(amt/50));
   amt=amt%50;
   System.out.println("20 Notes="+(amt/20));
   amt=amt%20;
   System.out.println("10 Notes="+(amt/10));
   amt=amt%10;
   System.out.println("5 Notes="+(amt/5));
   amt=amt%5;
   System.out.println("2 Notes="+(amt/2));
   amt=amt%2;
   System.out.println("1 Notes="+(amt/1));
  }
 }