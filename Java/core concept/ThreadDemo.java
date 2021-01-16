class MyThread01 extends Thread
{
	public void run()
	{
		System.out.println("run start");
		System.out.println("From run method mt State after Start Call : "+this.getState());  //RUNNING
		try
		{
			Thread.sleep(5000);
		}
		catch(InterruptedException e){}
		System.out.println("run end");
	}
}
class ThreadDemo
{
	public static void main(String[] args)throws InterruptedException
	{
		MyThread01 mt = new MyThread01();
		System.out.println("From main method mt State after Object Creation : "+mt.getState());   //NEW
		mt.start();
		System.out.println("From main method mt State after start call: "+mt.getState());         // RUNNING
		Thread.sleep(1000);
		System.out.println("From main method mt State after mt.sleep call: "+mt.getState());     // TIMED_WAITING
		Thread.sleep(3000);
		System.out.println("From main method mt State after mt.sleep call: "+mt.getState());     // TIMED_WAITING
		Thread.sleep(1000);
		System.out.println("From main method mt State after mt.sleep call: "+mt.getState());     // TERMINATED
	}
}