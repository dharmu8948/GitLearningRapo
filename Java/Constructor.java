//program to demonstration of cal by reference constructor

/*
class Number
{
	int a,b;
	Number()
	{
		a=50;
		b=70;
		System.out.println("class number is initialized");
	}
	Number(Number N)
	{
		a=N.a;
		b=N.b;
		System.out.println("Duplicate copy is Created");
	}
	void Swap()
	{
		int temp=a;
		a=b;
		b=temp;
	}
	void Showdata()
	{
		System.out.println("a="+a);
		System.out.println("b="+b);
	}
}
class Constructor
{
	public static void main(String[] args)
	{
		Number N1=new Number();
		Number N2=new Number(N1);
		N1.Swap();
		System.out.println("Swapped data");
		N1.Showdata();
		System.out.println("Actual data");
		N2.Showdata();
	}
}


================================================================================================================*/
class StudentCons
{
	String name;
	int rollno;
	StudentCons(String name,int rollno)
	{
		this.name=name;
		this.rollno= rollno;
	}
	public static void main(String[] args)
	{
		StudentCons s1 = new StudentCons("Durga",101);
		StudentCons s2 = new StudentCons("Ravi",102);
		StudentCons s3 = new StudentCons("Shiva",103);
		StudentCons s4 = new StudentCons("Venky",104);
		StudentCons s5 = new StudentCons("Ballayya",105);
		StudentCons s6 = new StudentCons("Nagoor",106);
		StudentCons s7 = new StudentCons("Nataraj",107);
		StudentCons s8 = new StudentCons("Nag",108);
		StudentCons s9 = new StudentCons("3risha",109);
	}
}