class StringTest
{
	public static void main(String[] args)
	{
		String s1=null;
		System.out.println(s1);   // null
	//	System.out.println(s1.length());  //RE:NPE
	
	
	//	String s2=new String((String)null);  //Invalid way
	//	System.out.println(s1.length());   //RE:NPE
	
	    String s4="null";
		System.out.println("s4 : "+s4);   // null
	//	System.out.println("s4 length: "+s1.length());  //RE:NPE
	
	
		String s3=new String("null");
		System.out.println("s3 char: "+s3);  //s3 char: null
		System.out.println(s3.length());    //  4
		
	}
} 