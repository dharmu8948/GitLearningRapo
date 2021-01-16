
/*

class StaticVar
{
	static int a;
	static int b;
	static int c;
	static int d;
	public static void main(String[] args){
	System.out.println(a);
	System.out.println(b);
	System.out.println(c);
	System.out.println(d);
	
	a=20;
	b=30;
	c=40;
	d=50;
	System.out.println(a);
	System.out.println(b);
	System.out.println(c);
	System.out.println(d);
}
}
=================================================================================================

class SVExample
{    
    static int x=10;
    static int y=20;
	public static void main(String[] args)
	{
		System.out.println("x: "+x);
		System.out.println("y: "+y);
		m1();
	}
	public static void m1()
	{
		System.out.println("x: "+x);
		System.out.println("y: "+y);
	}
}

=====================================================================================================================

class SVExample2
{
	static int a=10;
//	int a=10;//CE: a is already defined in SVExample
	public static void main(String[] args)
	{
		//it is allow to define "a" variable in this method
		a=20;
		
		//creating local variable
		int p=10;
		//double p=30;  //CE:a is already defined in SVExample2
	}
	static void m1()
	{
		int p=30;
	}
}
===========================================================================================================================
class SVExample3
{    
    static int x=10;
    static int y=20;
	public static void main(String[] args)
	{
		System.out.println(x+"........."+y);
		int x=50;
		System.out.println(x+"........."+y);
		int y=30;
		System.out.println(SVExample3.x+"........."+SVExample3.y);
		
	}
}

=======================================================================================================================
class SVExample4
{
	static int a =m1();
	static int m1()
	{
		System.out.println("Variable 'a' is created");
		return 10;
	}
	static int b=m2();
	static int m2()
	{
		System.out.println("Variable 'b' is created");
		return 20;
	}
	public static void main(String[] args)
	{
		System.out.println("main");
		System.out.println("a: "+a);
		System.out.println("b: "+b);
	}
}
====================================================================================================================*/

class SVExample5
{
	static int a =m1();
	static int m1()
	{
		System.out.println("Variable 'a' is created");
		return 10;
	}
	static int m2()
	{
		System.out.println("Variable 'b' is created");
		return 20;
	}
	public static void main(String[] args)
	{
		System.out.println("main");
		System.out.println("a: "+a);
		System.out.println("b: "+b);
	}
	static int b=m2();
}		