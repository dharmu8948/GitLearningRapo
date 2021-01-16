class PropetiesDemo
{
	public static void main(String[] args)
	{
		Properties p = new Properties();
		p.load(new fileInputStream("Data Properties"));
		System.out.println(p);
		String aValue=p.getProperty("a");
		String bValue=p.getProperty("b");
		System.out.println(aValue);
		System.out.println(bValue);
	}
}