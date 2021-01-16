class Testthis4
{
	int a=10;
	int b=20;
	void show1()
	{
		System.out.println("This is Method show1()");
		System.out.println("a="+a);
	}
	void show2()
	{
		System.out.println("This is Method show2()");
		System.out.println("a="+a);
	}
	void show()
	{
		System.out.println("Method show");
		this.show1(); //show1() is used in 1.6version onwards
		this.show2(); //show2() is used in 1.6version onwards
	}
	public static void main(String[] args)
	{
		Testthis4 this4 = new Testthis4();
		this4.show();
	}
}
