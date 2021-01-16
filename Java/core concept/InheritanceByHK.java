class InherihanceByHK
{
	static int a=m1();
	static int m1()
	{
		System.out.println("A SV");
		return 0;
	}
	static{
		System.out.println("A SB");
	}
	public static void main(String[] args)
	{
		System.out.println("A main");
	}
}
class InherihanceDemo
{
	static int b=m2();
	static int m2()
	{
		System.out.println("B SV");
		return 20;
	}
	static
	{
		System.out.println("B SB");
	}
	public static void main(String[] args)
	{
		System.out.println("B main");
		System.out.println("\nB main a:"+a);  //CE:c f s 
		System.out.println("\nB main a:"+InherihanceByHK.a);
		System.out.println("\nB main b:"+b);
	}
}