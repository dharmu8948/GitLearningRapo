class call
{
	public static void main()
	{
		System.out.println("Hello main()");
	}
}
class callBack
{
	public static void main(String[] args)
	{
		System.out.println("Hello main again");
	    call.main();
	}
}