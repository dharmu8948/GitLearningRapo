import java.io.*;
import java.util.*;
class GFG {
	public static void main (String[] args) {
		
		Geeks g = new Geeks();
		g.getInput();
	}
}
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for Java
//Complete the function
//Take input for a and s 
class Geeks {
	static void getInput () {
		
	    Scanner sc = new Scanner(System.in);
	    int t=sc.nextInt(); //Taking the number of testcases
	    while(t-->0)
	    {
    		 int a =sc.nextInt();
    		 String s = sc.next();
    	     s += sc.nextLine();
    		System.out.println(a);
    		System.out.println(s);
	    }
	}
}