class Number{
	int a=10;
	static int c=50;
	void getValue(int x)
	{
		a=x;
		int b=30;//local variable
		System.out.println("b="+b);
	}
	void display()
	{
		System.out.println("a="+a);
	//	System.out.println("b="+b);//B'z local variable called only only in method where it is declared
		System.out.println("c="+c);
	}
	public static void main(String[] args)
	{
		System.out.println("c="+Number.c);  //static variable called by using class name
		Number N = new Number();  //N is referenced variable
		N.getValue(40);//a can be changed b'z it call anywhere within class
		N.display();
	}
}