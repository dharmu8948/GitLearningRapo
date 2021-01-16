class Test2
{
	public static void main(String[] args)
	{
		Example2 e1 = new Example2();
		Example2 e2 = new Example2();
		e1.set(10);
		e1.set(20);
		
		e2.set(30);
		e2.set(40);
		
		e1.display();
		e2.display();
	}
}