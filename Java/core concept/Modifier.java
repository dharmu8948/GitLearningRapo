
class Modifier1
{
	private int a=10;
	int b=20;
	protected int c=30;
	public int d=40;
	public static void main(String[] args)
	{
		Modifier1 m1 = new Modifier1();
		System.out.println("a: "+m1.a);
		System.out.println("b: "+m1.b);
		System.out.println("c: "+m1.c);
		System.out.println("d: "+m1.d);
	}
}

/*========================================================================================================================*/

class Modifier2 
{
	public static void main(String[] args)
	{
		Modifier1 m1 = new Modifier1();
	//	System.out.println("a: "+m1.a);    CE: a has private access only
		System.out.println("b: "+m1.b);
		System.out.println("c: "+m1.c);
		System.out.println("d: "+m1.d);
	}
}

/*====================================================================================================================*/

package p1;
class A
{
	private int a=10;
	int b=20;
	protected int c=30;
	public int d=40;
	public static void main(String[] args)
	{
		A a1 = new A();
		System.out.println("a: "+a1.a);
		System.out.println("b: "+a1.b);
		System.out.println("c: "+a1.c);
		System.out.println("d: "+a1.d);
	}
}

/*======================================================================================================================

package p1;
class B
{
	public static void main(String[] args)
	{
		A a1 = new A();
	//	System.out.println("a: "+a1.a);
		System.out.println("b: "+a1.b);
		System.out.println("c: "+a1.c);
		System.out.println("d: "+a1.d);
	}
}

===================================================================================================================


package p2;
import p1.A;
class C extends A
{
	public static void main(String[] args)
	{
		A a1 = new A();
	//	System.out.println("a: "+a1.a);
	//	System.out.println("b: "+a1.b);
	//	System.out.println("c: "+a1.c);
		System.out.println("d: "+a1.d);
		
		C c1 = new C();
	//	System.out.println("a: "+a1.a);
	//	System.out.println("b: "+a1.b);
		System.out.println("c: "+a1.c);
		System.out.println("d: "+a1.d);
		
		A a2 = new C();
	//	System.out.println(a2.c);
		System.out.println(a2.d);
	}
}

*/