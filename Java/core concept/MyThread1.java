class MyThread1 extends Thread
{
	public void run()
	{
		for(int i=1;i<=50;i++)
		{
			System.out.println(getName()+" Run "+i);
		}
	}
	public static void main(String[] args)
	{
		MyThread1 mt1 = new MyThread1();
		mt1.start();
		
		MyThread1 mt2 = new MyThread1();
		mt2.start();
		
		MyThread1 mt3 = new MyThread1();
		mt3.start();
	}
}