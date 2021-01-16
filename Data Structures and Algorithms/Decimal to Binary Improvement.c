import java.util.*;
import java.lang.*;
import java.io.*;
class GFG
{
public static void main (String[] args)
{
Scanner sc = new Scanner(System.in);
int t;
t = sc.nextInt();
while(t > 0){
int n = sc.nextInt();
long sum = 0,pow = 1;
while(n > 0){
int rem = n % 2;
sum = sum + rem * pow;
pow = pow *10;
n = n / 2;
}
System.out.println(sum);
t--;
}
sc.close();
}
}
