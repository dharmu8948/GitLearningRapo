class MyRunnable implements Runnable
{
	public void run()
	{
		for(int i=0;i<10;i++)
		{
			System.out.println("Child Thread");
		}
	}
}
class Example
{
	public static void main(String[] args)
	{
		
		System.out.println(Thread.currentThread().getName());
		/*    MyRunnable r = new MyRunnable();
		Thread t = new Thread(r);
		t.start();                    // Mixed output of main Thread and Child Thread        */
		MyRunnable r = new MyRunnable();
		Thread t1 = new Thread();       // no output B'coz empty implementation
		Thread t2 = new Thread(r);      // Mixed output of main Thread and Child Thread when t1.start() executed 
		//  t1.start();                 //no output B'coz empty implementation
        t2.start();		                // Mixed output of main Thread and Child Thread when t1.start() executed
		r.run();
		System.out.println(t1.getName());
		Thread.currentThread().setName("Dharmu");
		System.out.println(Thread.currentThread().getName());  // Dharmu
		
		for(int i=0;i<10;i++)
		{
			System.out.println("Main Thread");
		}
	}
}