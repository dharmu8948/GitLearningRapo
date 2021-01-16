import java.util.*;
import java.lang.*;
import java.io.*;
class javaInputOutput 
{
public static void main(String[] args) {
Scanner in = new Scanner(System.in);
int a = in.nextInt();

while(a>0){

String s = in.next();
int n = in.nextInt();
System.out.println("The input string :"+s);
System.out.println("The input integer :"+n);
a--; 
}
}
}