//program to demonstration of Tread group and priority
class Natural extends Thread
{
	int i,n;
	public void run()  //overriding
	{
		n=50;
		System.out.println("Natural Series");
		for(i=1;i<=n;i++)
		{
			System.out.println("Natural\t"+i);
		}
		System.out.println("End of Natural Series");
	}
}
class even extends Thread
{
	int i,n;
	public void run()
	{
		n=100;
		System.out.println("Even Series");
		for(i=2;i<=n;i+=2)
		{
			System.out.println("Even\t"+i);
		}
		System.out.println("End of even Series");
	}
}
class odd extends Thread
{
	int i,n;
	public void run()
	{
		n=100;
		System.out.println("Odd Series");
		for(i=1;i<n;i+=2)
		{
			System.out.println("Odd\t"+i);
		}
		System.out.println("End of Odd Series");
	}
}
class Priority
{
	public static void main(String[] args)
	{
		Natural n=new Natural();
		even e=new even(); 		//new born state
		odd o=new odd();
		System.out.println("Natural\t"+n);
        System.out.println("Natural\t"+n.getName());
		System.out.println("Odd\t"+o.getName());
		System.out.println("Even\t"+e.getName());
		System.out.println("Priority Natural\t"+n.getPriority());
		System.out.println("Priority of Even\t"+e.getPriority());
		System.out.println("Priority of Odd\t"+o.getPriority());
		n.setName("Natural");
		e.setName("Even");
		o.setName("Odd");
		n.setPriority(Thread.MAX_PRIORITY);  //n.setpriority(10);
		//n.setPriority(11);
		o.setPriority(2);
		System.out.println("Natural\t"+n.getName());
		System.out.println("Even\t"+e.getName());
		System.out.println("Odd\t"+o.getName());
		System.out.println("Priority Natural\t"+n.getPriority());
		System.out.println("Priority of Even\t"+e.getPriority());
		System.out.println("Priority of Odd\t"+o.getPriority());
		e.start();
		o.start();
		n.start();  //Runable state
	}
}
		
		
			