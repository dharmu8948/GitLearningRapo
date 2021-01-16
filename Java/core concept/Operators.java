/*

class Operators
{
	public static void main(String[] args)
	{
		int a=10;
		int b=20;
		int c=a+b;
		
		
		int x=-4;
		
		if(x<0)
		{
			System.out.println(x + " is a -ve Number");
		}
		else if(x>0)
		{
			System.out.println(x + " is a +ve Number");
		}
		else
		{
			System.out.println(x + " is Zero");
		}
	}
}
=================================================================================================================
class Operators1
{
	public static void main(String[] args)
	{
		double sal           =10000;
		double annualSal  =sal*12;
		System.out.println(sal            );
		System.out.println(annualSal      );
		System.out.println();
		
		
		int exp=4;
		if(exp<1)
		{
			System.out.println("Fresher");
		}
		else if(exp==1)
		{
			System.out.println("Associate");
		}
		else if((exp>=2)&&(exp<4))
		{
			System.out.println("Software Engineer");
		}
		else if(exp>=4)
		{
			System.out.println("Lead");
		}
	}
}
====================================================================================================================
class Operators2
{
	public static void main(String[] ishank)
	{
		int i1=5+6;
		int a=5,b=6;
		int i2 = m1() +m2();
		System.out.println("i2  : "+i2);  //  5
		System.out.println();
		
		
		int i3 = (a+b)-(i1*i2);	
		System.out.println("i3   : "+i3);  //  -44
		System.out.println();
		
		
		int i4 = 5+a+m1()+(i1-i2);
		System.out.println("i4  :  "+i4);  //  18
		System.out.println();
	}
	static int m1()
	{
		return 2;
	}
	static int m2()
	{
		return 3;
	}
}
======================================================================================================
//ternary operator
class Operators3
{
	public static void main(String[] arf)
	{
		int a=10;
		int b;
		b=(a==10)?5:6;
		
		System.out.println(a);
		
		System.out.println(b);
		
		if(a==10)
			b=100;
		else
			b=200;
		
		System.out.println(b);
	}
}
=================================================================================================================
class UnaryBinaryTarnary
{
	public static void main(String[] args)
	{
		
		//Unary Operators
		int i1=+5;
		int i2=-6;
		boolean b1=!true;
		System.out.println(i1);  // 5
		System.out.println(i2);  // -6
		System.out.println(b1);   // true
		System.out.println();
		
		
		//binary operator
		int i3=7+8;
		System.out.println(i3); //15
        int i4=7&8;
		System.out.println(i4);  // true
        boolean b3=7<8;
		System.out.println(b3);   //true
        boolean b4=7>8;		
		System.out.println(b4);   //false
		System.out.println();
		
		
		//ternary Operators
		System.out.println(true ? "Hi":"Hello");  //Hi
		System.out.println(false ? "Hi":"Hello");  //Hello
		System.out.println();
		
		
		
		String s1 = true ? "Hi":"Hello";   
		String s2 = false ? "Hi":"Hello";
		System.out.println(s1);   //Hi
		System.out.println(s2);   //Hello
		System.out.println();
		
		
		
		
		String s3 = true ? "Hi":"Hello";
		System.out.println(s3);          // Hi
		System.out.println();
		
		
		
		String s4;
		if(true)
			s4="Hi";
		else
			s4="Hello";
		System.out.println(s4);
	}
}
======================================================================================================================
class Operator4
{
	public static void main(String[] args)
	{
		int x = 4 - 15 / 3 * 2 + 7;
        System.out.println(x);
		System.out.println();
		int a,b,c;
		c=a=b=10;
		System.out.println(a+"     "+b+"        "+c);
		System.out.println();
		
	}
}
===================================================================================================================
//Assignment Operator:
class AssignmentOperator
{
	public static void main(String[] args)
	{
		int x,y,z;
		x=10;
		y=x;
		z=x+y;
		System.out.println(x+"................."+y+"..........."+z);
		System.out.println();
		
	//	10=20;   CE :unexpected Type
	//  10=y;    CE :unexpected Type
	//  10=x+y;   CE :unexpected Type
   //   x+y=30;   CE :unexpected Type
   
   
   
  // case 1:
            int a;
			boolean bo;
			String s1;
			System.out.println(a=10  ); //10
			System.out.println(bo=true);  // true
			System.out.println(s1="HK");   // HK
			System.out.println();
			
			long l1,m;
			byte b1;
			boolean bo2;
			l1=m=30;
		//	b1=m=40;    //CE: PLC
		//	bo2=m=50;   //CE : long cannot be converted to boolean
			System.out.println(l1);
			System.out.println(m);
		//	System.out.println(bo2);
		//	System.out.println(b1);
		System.out.println();
		
		
		int m1;
		int n=m1=10;
		int o=n=m1=20;
		System.out.println(m1);  //20
		System.out.println(n);  //20
		System.out.println(o);  //20
		System.out.println();
		
		
	//	b1=(byte)m1=30;  //CE:unexpected type
	//	b1=20=30;        //CE: unexpected type
		
		b1=(byte)(m=30);
		System.out.println(b1);   //30
		
	//	int p=10+m=40;   //ce:unexpected type
	//	int p=10+30=40;   //CE: unexpected type
		
		
	//	int p=10+(m=40);  CE: PLC
	    int p=10+(40);
		System.out.println(p);//50
		System.out.println();
		
	//	int p=50;
	//	System.out.println(p); //CE: already defined in method main
	}
}
=============================================================================================================
class Plus_Operator
{
	public static void main(String[] args)
	{
		System.out.println(10                         );     //  10
		System.out.println(     'a'                         );  //  a
		System.out.println("a");                                 //  a
		System.out.println(10.0);                                //  10.0
		System.out.println(10.345f);      //   10.345f
		System.out.println(30L);          //   30L
		System.out.println(30l);         //   30l
		System.out.println();
		
		
		
		
		
		System.out.println(50+20);   //  70
		System.out.println(10+'a');   //  107
		System.out.println('a'+'b');   // 195 
		System.out.println("a"+"b");   //  ab
		System.out.println("a"+10);       // a10
		System.out.println("a"+true);    //  atrue 
		System.out.println("a"+null);    //  anull
		System.out.println();
		
		
		
		
		System.out.println(""+10+20);   //  1020
		System.out.println(10+""+20);   //  1020
		System.out.println(10+20+"");    //  30
		System.out.println(""+(10+20));    //  30
		
		int a=10;
		int b=20;
		System.out.println(a+b);   //30
		System.out.println("a+b");    //  a+b
		
		System.out.println("a+b"+a+b);   // a+b1020
		System.out.println("a+b"+(a+b));//a+b30
		
	//	System.out.println("a+b"+a-b);   //we get CE: due to a-b
		//System.out.println("a+b"+"10"-20)
		//System.out.println("a+b10"-"20")
		//we cannot concatenate b'z - cannot able to concate
		System.out.println("a+b"+(a+b));    //a+b-10
		System.out.println("a*b"+(a*b));   //  a*b200
		
		System.out.println();
	}
}
==================================================================================================================
class Division_Operator
{
	public static void main(String[] args)
	{
		System.out.println(22/7*10*10);  // 300
		System.out.println(22F/7*10*10);   // 314.2857
		System.out.println(22D/7*10*10);  //314.2857142857143
		System.out.println();
		
		
		System.out.println(1/2);   // 0
		System.out.println(1F/2);   //  0.5
		System.out.println();
		
		System.out.println(10/3);    //3
		System.out.println(10F/3);   //3.3333
	    System.out.println(10D/3);    //  3.33333333333333
		System.out.println();
		
		
		System.out.println(2/1);
		System.out.println(0/2);
		System.out.println();
		
	//	System.out.println(1/0);   //RE: ArithmaticException /by division zero
	//	System.out.println(10/0);      //RE: ArithmaticException /by division zero
	//	System.out.println();
		
		
		System.out.println(1.0/0);  //  INFINITY
		System.out.println(1.0F/0);  //  INFINITY
		System.out.println(-1.0/0);  //  -INFINITY
		System.out.println();
		
	//	System.out.println(0/0);   //RE: ArithmaticException /by division zero
		System.out.println(0.0/0);  //NaN  (Not a Number)
		System.out.println(-0.0/0);    // NaN
		System.out.println(.0/0);     //  NaN
		System.out.println(0./0);    //  NaN
	}
}
===================================================================================================================
class Remainder
{
	public static void main(String[] args)
	{
		System.out.println(10/5);  // 2
		System.out.println(10%5);  // 0
		System.out.println();
		System.out.println(10/3);  //3
		System.out.println(10%3);  // 1
	}
}
========================================================================================================================
//                                      Increment Decrement operator                                    
class IncrDecr1
{
	public static void main(String[] args)
	{
		int x=10;
		x++;
		System.out.println("x  :  "+x);  //11
		
		int y=10;
		y++;
		System.out.println("y  :  "+y);//  11
	}
}
====================================================================================================================
class IncrDecr2
{
	public static void main(String[] args)
	{
		int x=10;
		++x;
		System.out.println("x  :  "+x);  //11
		
		int y=10;
		++y;
		System.out.println("y  :  "+y);//  11
	}
}
==================================================================================================================
class IncrDecr3
{
	public static void main(String[] args)
	{
		int x=1;
		System.out.println("Hi-  :  "+ x++);  //1
		System.out.println(x);    //  2
		System.out.println();
		
		x=1;
		System.out.println("Hi-  :  "+ ++x);//  2
	}
}
=========================================================================================================================
class IncrDecr4
{
	public static void main(String[] args)
	{
		int x=10;
		int y=++x;
		System.out.println("x  :  "+x);  //11
		System.out.println("y  :  "+y);  // 11
        System.out.println(); 
		
		
		x=10;
		y=x++;
		System.out.println("x  :  "+x);//  11
		System.out.println("y  :  "+y);   //  10
	}
}
================================================================================================================
class IncrDecr5
{
	public static void main(String[] args)
	{
		int x=1;
		x=++x;
		System.out.println("x  :  "+x);  // 2
		
		x=1;
		x=x++;
		System.out.println("x  :  "+x);//  1
	}
}
==================================================================================================================
class IncrDecr6
{
	public static void main(String[] args)
	{
		int x=1;
		int y=x++ + ++x;
		System.out.println("x  :  "+x);  // 3
		System.out.println("y  :  "+y);  //  4
		System.out.println();
		
		x=1;
		y=x++ + ++x + x++ + x-- + --x + ++x;
		System.out.println("x   :  "+x);  // 3
		System.out.println("y  :  "+y);// 16
		System.out.println();
		
		x=1;
		y=++x + --x - x-- + x++ - ++x;
		System.out.println("x  :  "+x);  // 2
		System.out.println("y  :  "+y);   // 0
	}
}
=========================================================================================================================
class IncrDecr7
{
	public static void main(String[] args)
	{
		int i=1;
		while(i++<=4)
		System.out.println(i+"->Hello");  //  2->Hello 3->Hello  4->Hello  5->Hello
	    System.out.println("After Loop i : "+i);  // 6
		System.out.println();
		
		i=1;
		while(++i<=4)
		System.out.println(i+"->Hello");//  2->Hello 3->Hello 4->Hello
	    System.out.println("After loop i: "+i);  //5
	}
}
========================================================================================================================*/
class IncrDecr8
{
	public static void main(String[] args)
	{
		//10++;  //CE: unexpected type
		//++10;  //CE: unexpected type
		int x=10;
		x++;
		System.out.println(x);
		++x;
		System.out.println(x);
		
		long l2=10;
		l2++;
		System.out.println(l2);
		++l2;
		System.out.println(l2);
		float f=10.0F;
		f++;
		System.out.println(f);
		++f;
		System.out.println(f);
		double d=10.0;
		d++;
		System.out.println(d);
		++d;
		System.out.println(d);
		char ch='a';
		ch++;                            //      ch=(char)(ch+1);
		System.out.println(ch);
		++ch;
		System.out.println(ch);
		byte b=10;
		b++;                         // b = (byte)(b+1);
		System.out.println(b);
		++b;
		System.out.println(b);
		boolean bo=true;
	//	bo++;   CE: Bad Operand
	//	++bo;    CE:Bad Operand boolean
		System.out.println(bo);
		b=127;
		b++;                                          //  b = (byte)(b+1);
		System.out.println(b);
		String s1="a";
		//s1++;  CE: Bad Operand String
		System.out.println(s1);
		class A{}
		A a1= new A();
		//a1++;      //CE:Bad Operand 
		
		int[] ia = new int[5];
		//ia++;    //CE: Bad Operand
	}
}