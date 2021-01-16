class Bread
{
	private static int counter=0;
	void Bread()
	{
		counter=5;
	}
	Bread(int x)
	{
		counter = x;
	}
	public static void main(String[] args)
	{
	//	Bread b = new Bread();
		Bread b1 = new Bread(2);
		System.out.println(counter);
		System.out.println(b1);
	}
}

		