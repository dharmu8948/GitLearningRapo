/*
class GarbageCollection
{
	//static reference variable
	static GarbageCollection g1;
	static GarbageCollection g2;
	
	//non static variables
	GarbageCollection g3;
	GarbageCollection g4;
	public static void main(String[] args)
	{
		//local referenced variables
		GarbageCollection g5;
		GarbageCollection g6;
	}
}
=====================================================================================================================
class GarbageCollection2
{
	static GarbageCollection2 g1,g2;
	GarbageCollection2 g3,g4;
	public static void main(String[] args)
	{
		GarbageCollection2 g5,g6;
		
		//object creation with local referenced variable
		GarbageCollection2 g7 = new GarbageCollection2();
	}
}
==========================================================================================================================*/
class GarbageCollection3
{
	static GarbageCollection3 g1,g2;
	GarbageCollection3 g3,g4;
	public static void main(String[] args)
	{
		GarbageCollection3 g5,g6;
		
		//object creation with local referenced variable
		GarbageCollection3 g7 = new GarbageCollection3();
		
		
		System.out.println(g1);
		System.out.println(g2);
		
		
	//	System.out.println(g3);  ce: non static variable cannot accessed directly without creating object
	//	System.out.println(g4);   ce: non static variable cannot accessed directly without creating object
		
		
		System.out.println(g7.g3);
		System.out.println(g7.g4);
		
		
	//	System.out.println(g5);  //ce: g5 might not be initialized
	//	System.out.println(g6);  //ce: g5 might not be initialized
		
		//converting local null referenced variable as object referenced variable
		g5 = new GarbageCollection3();
		g6 = null;
		System.out.println(g5);
		System.out.println(g6);  
	}
}
/*==================================================================================================================
class GarbageCollection4
{
	//static referenced variables
	static GarbageCollection4 g1;
	static GarbageCollection4 g2;
	
	//non static referenced variables
	GarbageCollection4 g3;
	GarbageCollection4 g4;
	int x=10,y=20;
	
	public static void main(String[] args)
	{
		//local referenced variables
		GarbageCollection4 g5;
		GarbageCollection4 g6;
		
		//if we execute this program with above linescode only static and local
		//referenced variable are created . To create non static referenced variables are
		//must be created object this class
		
		GarbageCollection4 g7 = new GarbageCollection4();
		System.out.println(g1);
		System.out.println(g2);
		
	//	System.out.println(g3); //CE: non static variable g3 cannot be referenced from static context 
	//	System.out.println(g4); //CE: non static variable g4 cannot be referenced from static context
		
	//	System.out.println(g5); //CE: local variable g5 might not have been initialized
	//	System.out.println(g6); //CE: local variable g5 might not have been initialized
	
		System.out.println(g7);
		
	//	if we print null referenced variable JVM prints null
	//	if we print object referenced variable JVM prints its <class name>@hashcode
		
	//	we can also call toString() explicitly on object referenced variable ,
	//	but it not call on null referenced variable b'z it leads to NPE
		
	//	as shown below
		
		
		System.out.println(g7);
		System.out.println(g7.toString());
		
		System.out.println(g1);
	//	System.out.println(g1.toString()); //NPE
		
		//converting null referenced variable as object referenced variables.
        g1=new GarbageCollection4();
		g1.g3=new GarbageCollection4();
		g1.g3.g4 = new GarbageCollection4();
		
		//printing all above variables with different combination
		System.out.println(g1);
		System.out.println(g1.g3);
		System.out.println(g1.g3.g4);
		System.out.println(g1.g3.g4.g4);
		System.out.println(g1.g3.g4.g3);
		
		System.out.println(g1.g3.g3.g3);//NPE
		System.out.println(g1.g3.g3.g1);
		System.out.println(g1.g3.g3.g2);
	}
}
=======================================================================================================================
import java.util.Date;
class RuntimeDemo
{
	public static void main(String[] args)
	{
		Runtime r = Runtime.getRuntime();
		
		//difference between System.gc() and r.gc() is : "In System.gc() ,"gc()" is a static method that's why we are 
        //calling by class name i,e System.gc().....
        //But in r.gc() ,"gc()" is instance method that's why we are calling using object reference i,e r.gc()
        //Ques ==>> which of the following  is the valid way for requesting to JVM to run GarbageCollector ???
        //a)>>   System.gc();                    (Correct way) it is more Convenient So we use More times
        //b)     Runtime.gc();                    (Wrong way)
	    //c)     (new Runtime()).gc();            (wrong way)
		//d)    Runtime.getRuntime().gc();         (correct way)but it is highly recommended to use
		//because System.gc() internally calls Runtime.getRuntime().gc();
		//gc()preset in System class is a static method where as gc() present in Runtime class is instance method
	



	
		System.out.println();
		System.out.println(r.totalMemory());
		System.out.println();
		System.out.println(r.freeMemory());
		System.out.println();
		for(int i=0;i<10000;i++)
		{
			Date d= new Date();
			d=null;
		}
		System.out.println(r.freeMemory());
		System.out.println();
		r.gc();
//      r.gc();		
		System.out.println(r.freeMemory());
	}
}
=======================================================================================================================*/