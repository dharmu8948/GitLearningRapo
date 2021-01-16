/*class SwitchTest
{
public static void main(String[] args)
{
int x=10;
switch(x)
{
}
}
}
==================================================================================
1.case ,default or }excepted total 9 error occur
class SwitchTest
{
public static void main(String[] args)
{
	int x=10;
	switch(x)
	{
		System.out.println("Hello");
	}
	}
	}
=========================================================================================
class SwitchTest
{
public static void main(String[] args)
{
	int x=10;
	final int y=20;
	switch(y)
	{
	case 10:
		  System.out.println(10);
		  break;
	case y:
		  System.out.println(20);
		  break;
	}
	}
	}
==========================================================================================
class SwitchTest
{
public static void main(String[] args)
{
	int x=10;
	switch(x+1)
	{
case 10:
	System.out.println(10);
		break;
case 10+20+40+66+54+34:
	                    System.out.println(60);
					     break;
	}
	}
	}
===================================================================================================*/
class SwitchTest
{
public static void main(String[] args)
{
	byte b=10;
	switch(b)
	{
		case 10:
			System.out.println(10);
			break;
		case 100:
			System.out.println(100);
			break;
		case 1000:
			System.out.println(1000);   //here byte type value range is -128 to 127 so this can not accept 1000
			break;
	}
	}
	}
=========================================================================================================
class SwitchTest
{
public static void main(String[] args)
{
	byte b=10;
	switch(b+1)   //hare switch(byte(b)+int(1)=int)
	{
		case 10:
			System.out.println(10);
			break;
		case 100:
			System.out.println(100);
			break;
		case 1000:
			System.out.println(1000);   //here byte type value converted into int type from switch condition so it is acceptable
			break;
	}
	}
	}