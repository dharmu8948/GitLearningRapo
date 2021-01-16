import java.util.*;
class polindrome{
	public static void main(String[] args)throws Exception{
		Scanner s = new Scanner(System.in);
		int x = s.nextInt();
		String s1 = Integer.toString(x);
		String s2 = new StringBuilder(s1).reverse.toString();
		if(s1.equals(s2))
			System.out.println("true");
		else
			System.out.println("false");
	}
}