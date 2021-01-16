//inner class with example
// (1) Regular or normal inner class 
// (i)
/*
class outer 
{
class inner
{
}
public static void main(String[] args)
{
System.out.println("outer class main method");
}
}
======================================================================================================
//(ii)
class outer 
{
class inner
{
	public static void main(String[] args)
{
System.out.println("outer class main method"); //it will give compile time error because inner class cannot have static declaration
}
}
}
===============================================================================================================
//(iii) : Accessing inner class code from static area of outer class
class outer 
{
class inner
{
	public void m1()
	{
		System.out.println("Inner class method");
	}
}
public static void main(String[] args)
{
outer o=new outer();         //  ||within these first two lines can be written as "outer.inner i=new outer().new inner();"
outer.inner i=o.new inner(); //  || these three lines can be write in one line as "new outer().new inner().m1();"
i.m1();                      //  ||
}
}
===================================================================================================================
//(iv) : Accessing inner class code from instance Area of outer class
class outer 
{
class inner
{
	public void m1()
	{
		System.out.println("Inner class method");
	}
}
public void m2()
{
	inner i=new inner();
	i.m1();
}
public static void main(String[] args)
{
outer o=new outer();
o.m2();                      
}
}
===================================================================================================================
//              (v): Accessing inner class code from outside of outer class
class outer
{
	class inner
	{
		public void m1()
		{
			System.out.println("Inner class Method");
		}
		
	}
}
class InnerTest
{
	public static void main(String[] args)
	{
		outer o =new outer();
		outer.inner i =o.new inner();
		i.m1();
	}
}
====================================================================================================================
//(vi):from normal or regular inner class we can access both static and non static members of outer class directly
class outer
{
	int x=10;
	static int y=20;
	class inner
	{
		public void m1()
		{
			System.out.println(x);
			System.out.println(y);
		}
	}
	public static void main(String[] args)
	{
		new outer().new inner().m1();
	}
}
==============================================================================================================*/
//(vii): within the inner class "this" always refers current inner class object ,if we want to refer current
//outer class object then we have to use "outer_class_name.this"
class outer
{
	int x=10;
	class inner
	{
		int x=100;
		public void m1()
		{
			int x=1000;
			System.out.println(x);  //1000
			System.out.println(this.x); //100
			System.out.println(inner.this.x);//100
			System.out.println(outer.this.x);//10
		}
	}
	public static void main(String[] args)
	{
		new outer().new inner().m1();
	}
}