//WAP to demonstration of super keyword
class Base
{
	int a,b;
	Base()
	{
		a=20;
		b=55;
		System.out.println("Base class");
	}
	void showbase()
	{
		System.out.println("a="+a);
		System.out.println("b="+a);
	}
}
class Derive extends Base
{
	int a,b;
	Derive()
	{
		a=50;
		b=66;
		System.out.println("Derive class");
	}
	void display()
	{
		System.out.println("Derive class");
		System.out.println("a="+a);
		System.out.println("b="+b);
		System.out.println("Base class");
		System.out.println("a="+super.a);
		System.out.println("b="+super.b);
	}
}
class Testsuper1
{
	public static void main(String[] args)
	{
		Derive D = new  Derive();
		D.showbase();
		D.display();
	}
}