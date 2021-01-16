import java.util.*;
class TOStringDemo
{
	public static void main(String[] args)
	{
		String s1="Hari";
		System.out.println("s1: "+s1);  //Hari
		System.out.println("s1: "+s1.toString());
		System.out.println();
		
		String s2= new String("Naresh IT");
		System.out.println("s2: "+s2);  //Naresh IT
		System.out.println("s2: "+s2.toString());  // Naresh IT
		System.out.println();
		
		String s3=null;
		System.out.println("s3: "+s3); 
	//	System.out.println("s3: "+s3.toString()); //RE:NPE
		System.out.println();
		
		
		String s4;
	//	System.out.println("s4: "+s4);  // CE:  variable s4 might not have been initialized
		System.out.println();
		
		
	//	System.out.println("s5: "+s5);  //ce:C F S
		System.out.println();
		
	//	A a1 = new A(567);   // CE: c f  s
	//	System.out.println("a1: "+a1);
	
	//    A a2 = null;   CE: C F S
	//	System.out.println("a2: "+a2);
	    
		
	//	 A a3;   //CE: C F S
	//	System.out.println("a3: "+a3);
		
	//	System.out.println("a4: "+a4);  //CE:C F  S
	    
		
	}
	static A a4;
//	Static String s5;  CE: expected identifier
}