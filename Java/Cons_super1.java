//WAP for implimentation of "super" keywords
class Number
{
	int a,b;
	Number(int x,int y)
	{
		a=x;
		b=y;
		System.out.println("This is class number");
	}
}
class Value extends Number
{
	int e,f;
	Value(int x,int y)
	{
	//error: //System.out.println("Hello"); means that we can't define any statement before "super" keyword
		super(90,55);
		e=x;
		f=y;
		System.out.println("This is class Value");
	}
	void showdata()
	{
		System.out.println("a="+a);
		System.out.println("b="+b);
		System.out.println("e="+e);
		System.out.println("f="+f);
	}
}
class Cons_super1
{
	public static void main(String[] args)
	{
		Value v = new Value(55,79);
		v.showdata();
	}
}
