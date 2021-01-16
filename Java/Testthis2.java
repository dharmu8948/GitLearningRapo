//implimentation of "this" keyword and evaluate output
class TestThis2
{
	int a=10,b;
	TestThis2()
	{
		this(30);
		System.out.println("This is default constructor");
	}
	TestThis2(int x)
	{
		this(x,30);
		System.out.println("Hello");
		System.out.println("This is parameterized constructor1");
	}
	TestThis2(int x,int y)
	{
		//this();
		a=x;
		b=y;
		System.out.println("This is parameterized constructor2");
	}
	void display()
	{
		System.out.println("a="+a);
		System.out.println("b="+b);
	}
	public static void main(String[] args)
	{
		TestThis2 obj = new TestThis2();  //if we take two argument hare then only constructor2 statement .....
                                       	//...will be executed eg. TestThis2 obj=new TestThis2(4,7) 
		obj.display();
	}
}