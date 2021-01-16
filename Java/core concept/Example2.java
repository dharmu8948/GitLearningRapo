class Example1
{
	int x=0;
	int y=0;
	void set(int p)
	{
		this.x=p;
	}
	void display()
	{
		System.out.println(x);
		System.out.println(y);
	}
}
class Example2 extends Example1();
{
	void set(int q)
	{
		this.y=q;
		this.x=q;
	}