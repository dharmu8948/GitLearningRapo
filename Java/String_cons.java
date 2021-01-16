//WAP to impliment to constructor in String
class String_cons
{
	public static void main(String[] args)
	{
		String s1= "java";
		System.out.println("Ref of s1="+s1.hashCode());
		System.out.println("s1="+s1);
		s1=s1+"program";
		System.out.println("Ref of s1="+s1.hashCode());
        System.out.println("s1="+s1);
        System.out.println("Ref of s1="+s1.hashCode());
		s1="iu";
		System.out.println("Ref of s1="+s1.hashCode());
        System.out.println("s1="+s1);
	    char ch[]={'L','U','C','K','N','O','W'};
	int value[]={10,20,48,49,50,23,525,21,243,4,32,2,27,343,32,23,32,234};
	byte value2[]={65,90,48,97,100};
	String s2=new String(); //def constructor
    String s3=new String("String Demo");
	String s4=new String(ch);
	String s5=new String(ch,3,4);
	String s6=new String(ch,2,5);
	String s7=new String(value,2,5);
	String s8=new String(value2);
	String s9=new String(new StringBuffer("StringBuffer"));
	String s10=new String(new StringBuilder("StringBuilder"));
	System.out.println("s2="+s2);
	System.out.println("s3="+s3);
	System.out.println("s4="+s4);
	System.out.println("s5="+s5);
	System.out.println("s6="+s6);
	System.out.println("s7="+s7);
	System.out.println("s8="+s8);
	System.out.println("s9="+s9);
	System.out.println("s10="+s10);
	}
}
	
		