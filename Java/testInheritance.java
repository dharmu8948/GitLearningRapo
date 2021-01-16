//program to demonstration of inheritance
class Base
{
	private int a;
	int b;  //Default Access specifier
	protected int c;
    public int d;
	void get(int x)
	{
		a=x;
	}
	void getbcd(int x,int y,int z)
	{
		b=x;
		c=y;
		d=z;
	}
	void puta()
	{
		System.out.println("a="+a);
	}
	void putbcd()
	{
		System.out.println("b="+b);
		System.out.println("c="+c);
		System.out.println("d="+d);
	}
}
class Derive extends Base
{
	int e,f;
	void getef(int x,int y)
	{
		e=x;
		f=y;
	}
	void putef()
	{
		System.out.println("e="+e);
		System.out.println("f="+f);
	}
	void Showall()
	{
		//System.out.println("a="+a);  it can not be access everywhere because it  is private
		System.out.println("b="+b);
		System.out.println("c="+c);
		System.out.println("d="+d);
		System.out.println("e="+e);
		System.out.println("f="+f);
	}
}
class testInheritance
{
	public static void main(String[] args)
	{
		Base B=new Base();
		Derive D=new Derive();
		B.get(10);
		B.getbcd(20,30,40);
//		D.geta(50);  it not initialize every time because it is private
		D.getbcd(55,65,75);
		D.getef(85,95);
		B.puta();
		B.putbcd();
		D.putbcd();
		D.putef();
		D.Showall();
	}
}
