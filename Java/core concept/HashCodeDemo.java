class HashCode
{
	private int x;
	HashCode(int x)
	{
		this.x=x;
	}
	//Override hashcode()
	public int hashCode()
	{
		return x;
	}
	public int JVMHC()
	{
		return super.hashCode();
	}
}
class HashCodeDemo
{
	public static void main(String[] args)
	{
		HashCode e1 = new HashCode(5);
		HashCode e2 = new HashCode(5);
		HashCode e3 = new HashCode(6);
		
		System.out.println(e1.hashCode());  // 5
		System.out.println(e2.hashCode());   // 5
		System.out.println(e3.hashCode());   // 6
		
		System.out.println(System.identityHashCode(e1));   //1159190947
		System.out.println(System.identityHashCode(e2));   // 925858445
		System.out.println(System.identityHashCode(e3));    // 798154996
		
		System.out.println(e1.JVMHC());       //   1159190947
		System.out.println(e2.JVMHC());      //    925858445
		System.out.println(e3.JVMHC());      //    7981549965
	}
}