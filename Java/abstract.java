abstract class A 
{
	public static void main(String[] args)
	{
    int prod;
    abstract void m1(int p,int q);
    void m2()
    {
        System.out.println(prod);
    }
	}
}
class B extends A 
{
	public static void main(String[] args)
	{
    void m1(int p,int q) {
       System.out.println(p*q);
       System.out.println(p*q);
      
    }
	}
    
}