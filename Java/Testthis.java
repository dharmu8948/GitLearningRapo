//Using "this" keyword for the some program
class Testthis1
{
	int a,b; //instance variable
	void getdata(int a,int b)
	{
		this.a=a;
		this.b=b;
	}
	void putdata()
	{
		System.out.println("a="+a);
		System.out.println("b="+b);
	}
	public static void main(String[] args)
	{
		Testthis1 T=new Testthis1();
		T.getdata(23,45);
		T.putdata();
	}
}
		
	