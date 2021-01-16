import java.util.*;
class StringHandling
{
	public static void main(String[] args)
	{
		String s1=new String();
		System.out.println(s1);  //no output
		String s2="abcd";
		//string copy
		String s3=new String(s2);
		System.out.println(s3);
		String s4=new String("bbc");
		String s5=s4;
		System.out.println("s2: "+s2); // abcd
		System.out.println("s3: "+s3);// abcd
		System.out.println("s4: "+s4);//bbc
		System.out.println(s2==s3); // false
		System.out.println(s4==s5);//true
		
		
		
		
		char[] ch={'a','b','c','d','e','f'};
		String s6=new String(ch);
		System.out.println(s6);   //abcdef
		
		
		String s7=new String(ch,2,3);
		System.out.println(s7);   //cde
		
		
		byte[] b={97,98,99};
		String s8 = new String(b);
		System.out.println(s8);  //abc
		
		
		String s9 = new String(b,1,1);
		System.out.println(s9); //b
		
		
		
	//	String s11 = new String(null);    // CE: ambiguous error
	    String s12 = null;
	//	String s14 = new String((String)null);// RE:NPE
	//	String s13 = new String((StringBuffer)null);   // RE:NPE
		System.out.println("s12: "+s12);
	//	System.out.println("s12: "+s12.length());//RE:NPE
		System.out.println();
		
		String s15 = new String("null");
		System.out.println("s15: "+s15);  // null
		System.out.println("s15 length: "+s15.length());  // 4
		
		String s16= new String();
		System.out.println(s16.isEmpty());  // true
		String s17= new String("");
		System.out.println(s17.isEmpty());  //true
		String s18= new String(" ");
		System.out.println(s18.isEmpty());  // false
		String s19="";
		System.out.println(s19.isEmpty());  // true
		String s20=" ";
		System.out.println(s20.isEmpty());  //false
		String s21="a";
		System.out.println(s21.isEmpty());  //false
		String s22=null;
	//	System.out.println(s22.isEmpty());    // RE:NPE
		String s23;
	//	System.out.println(s23.isEmpty());  //CE: variable s23 might not have been initialize
		System.out.println();
		
		
		Scanner sc = new Scanner(System.in);
		System.out.print("\nEnter String1: ");
		System.out.println(sc.nextLine().isEmpty());
		
		
		
		
		
	}
}