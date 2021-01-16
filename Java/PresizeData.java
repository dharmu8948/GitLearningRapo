import java.io.*;
import java.util.*;
//Position this line where user code will be pasted.
class GFG {
	public static void main (String[] args) {
		
		Scanner sc = new Scanner(System.in);
		int testcases = sc.nextInt();
		
		while(testcases-- > 0){
    		float a = sc.nextFloat();
    		float b = sc.nextFloat();
    		
    		Geeks g = new Geeks();
    		g.printInFormat(a, b);
		
		}
		
	}
}
class Geeks{
    
    static void printInFormat(float a, float b){
        float result = a/b;
       System.out.printf("%.7f ",result);
System.out.printf("%.3f",result);
System.out.println(" ");
    }    
}