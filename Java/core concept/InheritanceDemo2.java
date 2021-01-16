/*
class A2
{
	static int a=10;
	static
	{
		System.out.println("In A SB");
		System.out.println("a: "+a);
	//	System.out.println("b: "+b); ce:c f s  
		System.out.println("b: "+B2.b);
		System.out.println("b: "+B2.getB());
	}
}
class B2 extends A2
{
	static int b=10;
	static
	{
		System.out.println("In B SB");
		System.out.println("a: "+a);
		System.out.println("b: "+b);
		System.out.println("b: "+B2.b);
		System.out.println("b: "+B2.getB());
	}
	static int getB()
	{
		return b;
	}
	public static void main(String[] args)
	{
		System.out.println("In B main");
		System.out.println("a: "+a);
		System.out.println("b: "+b);
	}
}

======================================================================================================================
class A3
{
	int x=m1();
	int m1()
	{
		System.out.println("A NSV");
		return 10;
	}
	{
		System.out.println("A  NSB");
	}
	A3()
	{
		System.out.println("A Constructor");
	}
}
class B3 extends A3
{
	int y=m2();
	int m2()
	{
		System.out.println("B NSV");
		return 20;
	}
	{
		System.out.println("B  NSB");
	}
	B3()
	{
		System.out.println("B Constructor");
	}
	public static void main(String[] args)
	{
		System.out.println("B  main");
		B3 b1 = new B3();
		System.out.println("\nB main x: "+b1.x);
		System.out.println("B main y: "+b1.y);
	}
}

========================================================================================================================*/
class A4
{
	static int a=m1();
	static
	{
		System.out.println("A4 class SB");
	}
	int x=m2();
	{
		System.out.println("A4 class NSB");
	}
	A4()
	{
		System.out.println("A4 class Constuctors");
	}
	static int m1()
	{
		System.out.println("A4 class SV is created");
		return 10;
	}
	int m2()
	{
		System.out.println("A4 class NSV is Created");
		return 20;
	}
	void abc()
	{
		System.out.println("A4 class abc");
	}
	void bbc()
	{
		System.out.println("A4 class bbc");
	}
}
class B4 extends A4
{
	static int b=m3();
	static
	{
		System.out.println("B4 class SB");
	}
	int y=m4();
	{
		System.out.println("B4 class NSB");
	}
	B4()
	{
		System.out.println("B4 class Constuctors");
	}
	static int m3()
	{
		System.out.println("B4 class SV is created");
		return 30;
	}
	int m4()
	{
		System.out.println("B4 class NSV is Created");
		return 40;
	}
	void abc()
	{
		System.out.println("B4 class abc");
	}
	public static void main(String[] args)
	{
		System.out.println("B4 class main");
		B4 s = new B4();
		s.abc();
		s.bbc();
	}
}