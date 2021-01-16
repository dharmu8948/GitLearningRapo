
/*
class Literals
{
	public static void main(String[] args)
	{
		int i=254;
		byte b1=(byte)i;
		System.out.println(b1);
		int a =10;
		float f = a;
		System.out.println(a);
		System.out.println(f);
		float f1=10;
		float f2 = f1;
		double d1 = f1;
		System.out.println(f1);
		System.out.println(f2);
		System.out.println(d1);
		int i1=10;
	//	byte b2=i;   ce: possible lossy conversion from int to byte
		byte b3=(byte)i;
	//	byte b4=(int)i; ce: possible lossy conversion from int to byte
	//	byte b5 = (boolean)i;
		System.out.println(i1);
	//	System.out.println(b2);
		System.out.println(b3);
	//	System.out.println(b4);
	//	System.out.println(b5);
		
	}
}
==================================================================================================================
class TypeConversion
{
	public static void main(String[] args)
	{
		int i1=10;
		float f1=20;
		float f2=i1+f1;
		System.out.println("f2="+f2);
		
	//	int i2=i1+f1; //CE: possible lossy conversion
	//	System.out.println(i2);
		
		int i3=(int)(i1+f1);
		System.out.println("i3 = "+i3);
		
	//	int i4 = (int)i1+f1;  //CE: possible lossy conversion
	//    System.out.println(i4);
		
	    int i5=i1+(int)f1;
		System.out.println("i5 = "+i5);
		
		boolean bo = true;
	//	int i6=i1+bo;  //CE:operator + cannot be applied between int,boolean
		byte b1=50;
		byte b2=100;
	//	byte b3=b1+b2;  //CE: possible lossy conversion
	
	
	    byte b3=(byte)(b1+b2);
		System.out.println("b3 = "+b3);
		
		int a=10;
		int b=20;
		int c=a+b;
		System.out.println("c = "+c);
		
		
		float f3=30;
		float f4=a+f3;
		System.out.println("f4 = "+f4);
		
		//in an expression "byte ,short and char " are autometically promotted to int 
		byte b4=10;
		byte b5=20;
	//	byte b6=b4+b5;
	//	System.out.ptinyln("b6 = "+b6);
		
		short s1=10;
		short s2=20;
	//	short s3=s1+s2;
	//	System.out.ptintln("s3 = "+s3);
		
		char ch1='a';
		char ch2='b';
	//	char ch3 = ch1+ch2;
    //    System.out.println("ch3 = "+ch3);
	
	
	
	      //it is true only if expression contain variables if it contains int literals directly,it evaluates expression
		  //and check the result is with in the range of the destination type. if that result is with in the range of
          // destination type assignment is possible else it throws CE:P.L.P.
        byte b7 = 10+20;
        System.out.println("b7 = "+b7);
         
		
		byte b8 = 126+1;
		System.out.println("b8 = "+b8);
		
	//	byte b9 = 126+2;
	//	System.out.println("b9 = "+b9);
	
	 //   byte b10=10L+20;
	//	System.out.println("b10 = "+b10);
		
		byte b11=(byte)10L+20;
		System.out.println("b11 = "+b11);
		
		byte b12 =(int)10L+20;
		System.out.println("b12 = "+b12);
		
		char ch4 = 'a'+'b';
		System.out.println("ch4 = "+ch4);
		
	//	char ch5 = ch4+'c';
	//	System.out.println("ch5 = "+ch5);
	    
		long l1=10;
	//	byte b13=l1+20;
	//	System.out.println("b13 = "+b13); //PLC
	
	//    byte b14 = (byte)l1+20;
	//	System.out.println("b14 = "+b14); //PLC
		
	//	byte b15 = (int)l1+20;
	//	System.out.println("b15 = "+b15);
		
		byte b16 = (byte)(l1+20);
		System.out.println("b16 = "+b16);
		
		int p=10;
		int q=20;
		int r=p+q;
		System.out.println(r);
		System.out.println("the addition of "+ p +"  and  "+ q + "  is :" + r);
		
		//in java all operators in an expression are executed from LEFT to RIGHT means "=" operator to ","
		//according to their precedence
		System.out.println(4*2+8/2-3*3+4/2);
		
	}
}
=================================================================================================================*/
class DisplayLiterals
{
	public static void main(String[] args)
	{
		System.out.println(10);
		System.out.println(10L);
		System.out.println(10.0);
		
		
		System.out.println(true);
		System.out.println(false);
		
		
		System.out.println(10.0f);
		
		System.out.println('a');
		System.out.println('1');
	//	System.out.println('10');
	//	System.out.println('ab');
	//	System.out.println('');
		System.out.println(' ');
	//	System.out.println('   ');
		
		
		System.out.println("");
		System.out.println(" ");
		System.out.println("a");
		System.out.println("1");
		System.out.println("asadsa");
		System.out.println("10");
	//	System.out.println(a);
	//	System.out.println(Hi);
		String s = "Hi";
		System.out.println(s);
		
	    
		//class literals
		System.out.println(String.class);
		System.out.println(byte[].class);
		System.out.println(short[].class);
		System.out.println(int[][].class);
		System.out.println(int[][][].class);
		System.out.println(char[].class);
		System.out.println(long[].class);
		System.out.println(float[].class);
		System.out.println(double[].class);
		
		
		
	//	System.out.println(null); CE:cannot find Symbol
	    String s1= null;
	    System.out.println(s1);
	//	System.out.println(String.s1);  //CE:C.F.S.
		System.out.println((String)null);
		char[] ca =null;
	//	System.out.println(ca);  //RE: NPE
	//    System.out.println((int)null);  CE: int can not be converted to null
		System.out.println((String)null);
		
		
	//	System.out.println(9988998899777077077);  CE: Interger number too large
	    System.out.println(998899889977707707L);
		
	//	long l2=998899889977707707;  //CE:L missing so integer number too large
	//	System.out.println(l2);
		long l3=998899889977707707l;
		System.out.println(l3);
		
		
		
		//Binary,octal decimal and HexaDecimal Number
		
		System.out.println(12);
		System.out.println(0xA1);
		System.out.println(0XA1);
		System.out.println(0B1010);
		System.out.println(0b1010);
		System.out.println(1010);
		System.out.println(0101);
		System.out.println(013);
		
		
	
		
		
		
	}
}