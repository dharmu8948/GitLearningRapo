/*

class ThrowsExceptionDemo
{
	public static void main(String[] args)throws InterruptedException
	{
		dostuff();
	}
	public static void dostuff()throws InterruptedException
	{
		domorestuff();
	}
	public static void domorestuff()throws InterruptedException
	{
		Thread.sleep(10000);
	}
}
================================================================================================================		
//we can use throws keyword only for throwable types,if we trying to use for nrmal java class,then we will get C.E.
//  1.
class Test6
{
	public void m1()throws Test6   //ce: incompatible type
	{
	}
}

//  2.
class Test7 extends RuntimeException
{
	public void m1()throws Test7    //no error becoz Test7 is also throwable type
	{
	}
}


=======================================================================================================================
//  3. 

class ThrowsExceptionDemo2
{
	public static void main(String[] args)
	{
		throw new Exception();        //Exception is checked Exception already so it get C.E.
	}
}


//4.
class ThrowsExceptionDemo3
{
	public static void main(String[] args)
	{
		throw new Error();     //R.E.  ==>>Exception in thread main java.lang.error
	}
}


====================================================================================================================*/
