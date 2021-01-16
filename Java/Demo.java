//  Important 1

/*

class Demo
{
	public static void main(String[] args)
	{
		System.out.println("String");
	}
	public static void main(int[] args)
	{
		System.out.println("Int");
	}
}

================================================================================================================
//Question :  without writing main().Is it possible to print some stmts to console ?
// Answer : Yes by using static block up to 1.6v
class Demo1
{
	static{
		System.out.println("Hello I can Print Without Main() method");
		System.exit(0);
	}
}


//Question : without writing main() & static block,Is it possible to print some stmts to console ?
// Yes! but only on 1.6v
class Demo2
{
	static int x=m1();
	public static int m1(){
		System.out.println("Hello I can Print Without Main() method");
		System.exit(0);
		return 10;
	}
}

*/
// 3rd way
//   Yes! but only on 1.6v
class Demo3
{
	static Demo2 x=new Demo2();
	{
		System.out.println("Hello I can Print Without Main() method");
		System.exit(0);
		//return 10;
	}
}

//4th way
// Yes but only up to 1.6.v

class Demo{
	static Demo4 d= new Demo4()
	Demo4()
	{
		System.out.println("Hello I can Print Without Main() method");
		System.exit(0);
	}
}