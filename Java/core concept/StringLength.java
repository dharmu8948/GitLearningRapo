import java.util.*;
class StringLength
{
	public static void main(String[] args)
	{
		String s1="";
		String s2=" ";
		String s3="ab";
		String s4=new String();
		String s5=new String("");
		String s6=new String(" ");
		String s7=new String("HariKrishna Sir");
		System.out.println("s1 length: "+s1.length());  //0
		System.out.println("s2 length: "+s2.length());  // 1
		System.out.println("s3 length: "+s3.length()); //2
		System.out.println("s4 length: "+s4.length());  // 0
		System.out.println("s5 length: "+s5.length());  // 0
		System.out.println("s6 length: "+s6.length());  //1 
		System.out.println("s7 length: "+s7.length());  // 15
        System.out.println();
		
		String s8=null;
	//	System.out.println("s8 length: "+s8.length());  //  RE:NPE
	    String s9="null";
		System.out.println("s9 length: "+s9.length());  //4
		String s10;
	//	System.out.println("s10 length: "+s10.length());  //CE:  variable s10 might not have been initialize
	    Scanner sc = new Scanner(System.in);
		System.out.print("\nEnter String1: ");
		System.out.println(sc.nextLine().length());  //get length of string
	//	System.out.println(s11.length());  //RE:NE
	//    System.out.println(s12.length());  //CE:C F S
		
	}
	static String s11;
}