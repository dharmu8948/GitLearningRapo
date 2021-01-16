class MyThread extends Thread
{
	MyThread()
	{
		super();
	}
	MyThread(String name)
	{
		super(name);
	}
	public void run()
	{
		for(int i=0;i<50;i++)
		{
			System.out.println(getName()+" i : "+i);
		}
	}
}
class ThreadNameAndPriority	
{
	public static void main(String[] atgs)
	{
		MyThread mt1 = new MyThread();
		MyThread mt2 = new MyThread("Child2");
		
		System.out.println("mt1 thread Initial name and Priority");
		System.out.println("mt1 thread name : "+mt1.getName());     //Thread-0
		System.out.println("mt1 thread Priority : "+mt1.getPriority());  //5
		
		System.out.println();
		
		System.out.println("mt2 thread Initial name and Priority");  
		System.out.println("mt2 thread name : "+mt2.getName());       //Child2
		System.out.println("mt2 thread Priority : "+mt2.getPriority());  // 5
		
		mt1.setName("child1");
		mt1.setPriority(7);
		
		mt2.setPriority(9);
		
		
		System.out.println("mt1 thread Initial name and Priority");
		System.out.println("mt1 thread name : "+mt1.getName());          //child1
		System.out.println("mt1 thread Priority : "+mt1.getPriority());  // 7
		
		System.out.println();
		
		
		System.out.println("mt2 thread Initial name and Priority");
		System.out.println("mt2 thread name : "+mt2.getName());        // Child2
		System.out.println("mt2 thread Priority : "+mt2.getPriority());  // 9
		
		mt1.start();
		mt2.start();
		
		for(int i=0;i<50;i++)
		{
			System.out.println("main i: "+i);
		}
	}
}