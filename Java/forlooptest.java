class forlooptest
{
public static void main(String[] args)
{
for(int i=0;true;i++)
System.out.println("Hello");
}
}
==================================================================================================================================
class forlooptest
{
public static void main(String[] args)
{
for(int i=0;i<10;i++);
}
}
================================================================================================================================
class forlooptest
{
public static void main(String[] args)
{
for(int i=0;true;i++)
int x=10;        //invalid statement
==================================================================================================================================
class forlooptest
{
public static void main(String[] args)
{
int i=0;
for(System.out.println("Hello Boss You Are Sleeping);i<3;i++)
{
System.out.println("No Boss You Are Sleeping");
}
}
}
====================================================================================================================
class forlooptest
{
public static void main(String[] args)
{
for(System.out.println("Hello");i<3;System.out.println("Hi"))
{
i++;
}
}
}
=================================================================================================================
class forlooptest
{
public static void main(String[] args)
{
for(;;)   //valid but infinite loop
}
}
=========================================================================================================================
class forlooptest
{
public static void main(String[] args)
{
for(;;)
{
System.out.println("Hello");
}
}
}
================================================================================================================================
class forlooptest
{
public static void main(String[] args)
{
for(int i=0;true;i++)
{
System.out.println("Hello");   //this statement always true
}
System.out.println("Hi");   //this statement is unreachable statement
}
}
=====================================================================================================================================
class forlooptest
{
public static void main(String[] args)
{
for(int i=0;;i++)       // here condition section is always true
{
System.out.println("Hello");   //this statement always true
}
System.out.println("Hi");   //this statement is unreachable statement
}
}
===============================================================================================================================
class forlooptest
{
public static void main(String[] args)
{
int a=10,b=20;
for(int i=0;a>b;i++)
{
System.out.println("Hello");   
}
System.out.println("Hi");  
}
}
====================================================================================================================================
class forlooptest
{
public static void main(String[] args)
{
int a=10,b=20;
for(int i=0;a<b;i++)
{
System.out.println("Hello");   
}
System.out.println("Hi");  
}
}
=====================================================================================================================================
class forlooptest
{
final int a=10,b=20;
public static void main(String[] args)
{
for(int i=0;a>b;i++)
{
System.out.println("Hello");   
}
System.out.println("Hi");    //this is unreachable statement
}
}