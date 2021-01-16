class MyThread02 extends Thread
{
	public void run()
	{
		System.out.println("run start");
		System.out.println("From run method mt State after Start Call : "+this.isAlive());  //true
		try
		{
			Thread.sleep(5000);
		}
		catch(InterruptedException e){}
		System.out.println("run end");
	}
}
class isAliveMthodDemo
{
	public static void main(String[] args)throws InterruptedException
	{
		MyThread02 mt = new MyThread02();
		System.out.println("From main method mt State after Object Creation : "+mt.isAlive());   //false
		mt.start();
		System.out.println("From main method mt State after start call: "+mt.isAlive());         // true
		Thread.sleep(1000);
		System.out.println("From main method mt State after mt.sleep call: "+mt.isAlive());     // true
		Thread.sleep(3000);
		System.out.println("From main method mt State after mt.sleep call: "+mt.isAlive());     // True
		Thread.sleep(1000);
		System.out.println("From main method mt State after mt.sleep call: "+mt.isAlive());     // false
	}
}