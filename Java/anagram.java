import java.util.*;
class anagram{
	public static void main(String[] args)throws Exception{
		Scanner sc = new Scanner(System.in);
		String s1 = sc.nextLine();
		String s2 = sc.nextLine();
		// char ch1[] = new char[s1.length()];
		// char ch2[] = new char[s2.length()];
		char[] ch1 = s1.toCharArray();
		char[] ch2 = s2.toCharArray();
		Arrays.sort(ch1);
		Arrays.sort(ch2);
		String s3 = new String(ch1);
		String s4 = new String(ch2);
		if(s3.equals(s4))
			System.out.println("True");
		else
			System.out.println("False");
	}
}