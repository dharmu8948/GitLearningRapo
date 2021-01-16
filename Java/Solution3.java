import java.util.*;
import java.io.*;

class Solution3{
    public static void main(String [] args){
		int b,n,a;
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++){
             a = in.nextInt();
             b = in.nextInt();
             n = in.nextInt();
        }
		int result=a;
    for (int j = 0; j < n; j++) {
        result += (int) (Math.pow(2.0, j) * b);
        System.out.print(result + " ");
    }
        in.close();
    }
}