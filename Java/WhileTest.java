/*class WhileTest
{
public static void main(String[] args)
{
while(1)                          //it gives always gives compile time error because while takes only boolean type
{
System.out.println("Hello");
}
}
}
========================================================================================================================
class WhileTest
{
public static void main(String[] args)
{
while(true)               //while has curly braces are optional i,e its valid statement of while
System.out.println("Hello");   //so it prints infinite times because while statement is always true
}
}
==============================================================================================================================
class WhileTest
{
public static void main(String[] args)
{
while(true);      //valid statement of while
}
}
==================================================================================================================================
class WhileTest
{
public static void main(String[] args)
{
while(true)
{
int x=10;
}
}
}
===================================================================================================================================
class WhileTest
{
public static void main(String[] args)
{
while(true)
{
System.out.println("Hello");  //it gives output Hello always because while statement is always become true.................
}
System.out.println("Hi");   //so this statement is always unreachable
}
}
======================================================================================================================================
class WhileTest
{
public static void main(String[] args)
{
while(false)
{
System.out.println("Hello");  //this statement is always become false because..............
}
System.out.println("Hi");     //it gives output Hello always because while statement is always become false   
}
}
==============================================================================================================================
class WhileTest
{
public static void main(String[] args)
{
	int a=10,b=20;       //it is a local variable not a final variable i,e its value is changes is possible by assigning
	while(a<b)
	{
		System.out.println("Hello");    //here while statement is always not true because a,b are local variable
	}
	System.out.println("Hi");
}
}
=======================================================================================================================================
class WhileTest
{
public static void main(String[] args)
{
	final int a=10,b=20;
	while(a>b)            // it is always false because a>b and value of a,b is final value not a local var.
	{
		System.out.println("Hello");   //it is unreachable statement because while statement is always false
	}
	System.out.println("Hi");    
}
}
==============================================================================================================================
class WhileTest
{
public static void main(String[] args)
{
	final int a=10,b=20;
	while(a<b)       //it is always true because a>b and value of a,b is final value not a local var.
	{
		System.out.println("Hello");
	}
	System.out.println("Hi");         //it is unreachable statement because while statement is always false
}
}
==============================================================================================================================
class WhileTest
{
public static void main(String[] args)
{
	int a=10,b=20;
	while(a<b)     //it is a local variable not a final variable i,e its value is changes is possible by assigning
	{
		System.out.println("Hello");
	}
	System.out.println("Hi");
}
}
=============================================================================================================================*/
class WhileTest
{
public static void main(String[] args)
{
	int a=10;
	final int b=20;
	System.out.println(a);
	System.out.println(b);
}
}
/*====================================================================================================================================
class WhileTest
{
public static void main(String[] args)
{
	final int a=10,b=20;
	int c=30;
	System.out.println(a+b);
	System.out.println(a+c);
	System.out.println(a<b);
	System.out.println(a<c);
}
}
*/