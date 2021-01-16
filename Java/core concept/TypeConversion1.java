/*

class TypeConversion1
{
	public static void main(String[] args)
	{
		byte b1=10;
		int i1=b1;
		
	//	byte b2=i1;
		byte b3=(byte)i1;
		
	//	int i=true;
		
	//	int i=(int)true;
		
		int i2=254;
		byte b4=(byte)i2;
		
		char ch1 = 'a';
		int i3=ch1;
		
		int i4=97;
	//	char ch2=i4;
		char ch3=(char)i4;
		
		long l1=10;
		float f1=l1;
		
	//	long l2 = f1;
		long l2 = (long)f1;
		System.out.println("b1 = "+b1);
		System.out.println("i1 = "+i1);
	//	System.out.println("b2 = "+b2);
		System.out.println("b3 = "+b3);
		System.out.println("b4 = "+b4);
		System.out.println("ch1 = "+ch1);
		System.out.println("i3 = "+i3);
	//	System.out.println("ch2 = "+ch2);
	    System.out.println("ch3 = "+ch3);
		System.out.println("i4 = "+i4);
		System.out.println("l1 = "+l1);
		System.out.println("f1 = "+f1);
		System.out.println("l2 = "+l2);
		System.out.println("l2 = "+l2);
	}
}
======================================================================================================================
*/
class ThinkAsCompilerAndJVM
{
	public static void main(String[] args)
	{
		System.out.println( 10         );
		System.out.println( 'a'        );
		System.out.println(  "a"       );
		System.out.println( 10.0       );
		System.out.println( 10.345f     );
		System.out.println( 30L         );
		System.out.println( 30l         );
		System.out.println( 40+90         );
		int a=30;
		int b=40;
		System.out.println( a+b     );
		System.out.println( "a+b"     );
		
		System.out.println( "a+b"+a+b     );
		System.out.println( "a+b"+(a+b)     );
		
	//	System.out.println( "a+b"+a-b     );
		System.out.println( "a+b"+(a-b)     );
		
		System.out.println( "a*b"+a*b     );
		System.out.println( "a*b"+(a*b)     );
		
		
		System.out.println( ""+10+20     );
        System.out.println( 10+""+20     );
        System.out.println( 10+20+""     );
		
		
        System.out.println(22/7*10*10  );
        System.out.println(22F/7*10*10  );
		System.out.println(22D/7*10*10  );
		
	//	System.out.println(10/0  );
	    System.out.println(10.0/0  );
		System.out.println(-10.0/0  );
		
	//	System.out.println(0/0  );
		System.out.println(0.0/0  );
		System.out.println(-0.0/0  );
		
		int p=50;
		int q=50;
		System.out.println(p==q);
		System.out.println(p!=q);
		System.out.println(p=q);
	//	System.out.println(p=q==q);   //CE: boolean cannot to converted to int 
		System.out.println((p=q)==q);
		
		System.out.println(3.0f==3.0);
		System.out.println(3.5f==3.5);
		
		
		System.out.println(3.3f==3.3);
		System.out.println(3.7f==3.7);
        		
	}
}