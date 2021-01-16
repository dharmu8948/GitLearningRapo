/*
class Example1
{
	int x=10;
	int y=20;
	public static void main(String[] args)
	{
		System.out.println("Main Method");
		Example e = new Example();
		System.out.println(e.x+"........"+e.y);
	}
}
========================================================================================================
// Multiple objects can be created for a class and every object has seperate Memory 
class Example2
{
	int x=10;
	int y=20;
	public static void main(String[] args)
	{
		System.out.println("Main Method");
		Example2 e1 = new Example2();
		Example2 e2 = new Example2();
		System.out.println(e1.x+"........"+e1.y);
		System.out.println(e2.x+"........"+e2.y);
	}
}
============================================================================================================
// we can modify one object data then another object data will not be modified b'z both have seperate Memory Location 
class Example3
{
	int x=10;
	int y=20;
	public static void main(String[] args)
	{
		System.out.println("Main Method");
		Example3 e1 = new Example3();
		Example3 e2 = new Example3();
		System.out.println(e1.x+"........"+e1.y);
		System.out.println(e2.x+"........"+e2.y);
		e2.x=50;
		e2.y=90;
		System.out.println(e1.x+"........"+e1.y);
		System.out.println(e2.x+"........"+e2.y);
	}
}
====================================================================================================================
// We not get proper output but we get as "Employee@24d46ca6" i,e e1 object hash codevalue in hexa String format.
//we get improper output b'z toString() not overridden
class Employee
{
	int eid=7279;
	String ename="Dharmendra";
	String company="Naresh i Technology";
	public static void main(String[] args)
	{
		Employee e1 = new Employee();
		System.out.println(e1);
	}
}
====================================================================================================================
// below program shows overridding toString() to print object data
class Employee
{
	int eid;
	String ename;
	String company;
	//overriding toString() method to print object data
	public String toString()
	{
		return "Eid:         "+eid +"\n"+"Ename:       "+ename+"\n"+"Company:     "+company +"\n";
	}
	public static void main(String[] args)
	{
		Employee e1 = new Employee();
        e1.eid =                      7279;
		e1.ename =            "Dharmendra";
		e1.company = "Naresh i Technology";
		System.out.println(e1);
	}
}
=======================================================================================================================
class Example4
{
	static int a=10;
	static int b=20;
	int x=30;
	int y=40;
	public static void main(String[] args)
	{
		System.out.println("a :"+a);  //10
		System.out.println("b :"+b);   //20
		
		
		Example4 e1 = new Example4();
		
		System.out.println("x :"+e1.x); //30
		System.out.println("y :"+e1.y);  //40
		
		System.out.println("a :"+e1.a);  //10
		System.out.println("b :"+e1.b);   //20
		
	//	System.out.println("x :"+Example4.x);
	//	System.out.println("y :"+Example4.y);
		
		Example4 e2 =null;
		System.out.println(e2.a);  //10
		System.out.println(e2.b);   //20
	}
}
==================================================================================================================
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<           Static methods                     >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
class StaticMethods
{
	void m1()
	{
		System.out.println("In m1() Method");
	}
	public static void main(String[] args)
	{
		System.out.println("In main() method");
	//	m1();   //CE:non static methods cannot be referenced from static context
		StaticMethods s = new StaticMethods();
		s.m1();
	}
}
=======================================================================================================================
class StaticMethods2
{
	int x=10;
	int y=20;
	void m1()
	{
		System.out.println("In m1() Method");   //In main method
	}
	void printXY()
	{
		System.out.println(x);  
	    System.out.println(y);  
		
		m1();
	}
	public static void main(String[] args)
	{
		StaticMethods2 s = new StaticMethods2();
		s.printXY();  //10 20
	}
}
=======================================================================================================================*/
class StaticMethods3
{
	int x=10;
	int y=20;
	void m1()
	{
		System.out.println("In m1() Method");   //In main method
	}
	void printXY()
	{
		System.out.println(x);  
	    System.out.println(y);  
		
		m1();
	}
	public static void main(String[] args)
	{
		StaticMethods3 s1 = new StaticMethods3();
		StaticMethods3 s2 = new StaticMethods3();
		s1.printXY();   //10 20
		s2.printXY();   //10 20
	}
}