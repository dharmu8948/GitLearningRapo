//WAP to demonstration of constructor in Inheritance
class ValueConstructor1
{
int a; //instance variable
ValueConstructor1()
{
	a=10;
System.out.println("This is class value1");
}
}
class  ValueConstructor2 extends ValueConstructor1
{
	int b;
	ValueConstructor2()
	{
		b=20;
		System.out.println("This is class value2");
	}
}
class ValueConstructor3 extends ValueConstructor2
{
	int c;
	ValueConstructor3()
	{
		c=50;
		System.out.println("This is class value3");
	}
	ValueConstructor3(int x)
	{
		c=x;
		System.out.println("This is class value3");
	}
	void showdata()
	{
		System.out.println("a="+a);
		System.out.println("b="+b);
		System.out.println("c="+c);
	}
}
class ConstructorInheritance
{
	public static void main(String[] args)
	{
		ValueConstructor3 ob1=new ValueConstructor3(70);
		ValueConstructor3 ob2=new ValueConstructor3();
		ob1.showdata();
		ob2.showdata();
	}
}