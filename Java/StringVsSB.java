class StringVsSB
{
	public static void main(String[] args)
	{
		String s = new String("Durga");
		s.concat("Software");
		StringBuffer sb = new StringBuffer("Durga");
		sb.append("Software");
		System.out.println("String is Immutable You can see:  "+s);
		System.out.println("StringBuffer is Mutable You can see:  "+sb);
	}
}
		
		