//calling of current class constructor using "this" keyword
class Number
{
	int a,b;
	Number(int x,int y)    //Parameterized constructor
	{
		a=x;
		b=y;
		System.out.println("Parameterized Constructor");
	}
	Number()
	{
		//System.out.println("Default constructor"); Error
		this(50,90); //calling of current class parameterized constructor
		System.out.println("Default constructor");
	}
	void show()
	{
		//this(50,90); Error calling of current class parameterized constructor
		System.out.println("a="+a);
		System.out.println("b="+b);
	}
}
class this_test
{
	public static void main(String[] args)
	{
		Number ob1 = new Number();
		Number ob2 = new Number(2,6);
		ob1.show();
		ob2.show();
	}
}
		