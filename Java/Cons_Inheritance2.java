//WAP to impliment constructor inheritance and find its output
class Number
{
int a,b;
Number(int x,int y) //Error if we take default constructor(means we don't take any argument) here then we get no compile time error 
{
	a=x;
	b=y;
	System.out.println("This is class Number");
}
  /* if we remove this cumment then code will perfectly run
		Number()
		{
	System.out.println("This is class Number");
}  */
}
class value extends Number
{
	int e,f;
	value(int x,int y)
	{
		e=x;
		f=y;
	    System.out.println("This is class Value");
	}
	void ShowData()
	{
		System.out.println("a="+a);
		System.out.println("b="+b);
	}
}
class Cons_Inheritance2
{
	public static void main(String[] args)
	{
		value V=new value(50,70);
		V.ShowData();
	}
}
		