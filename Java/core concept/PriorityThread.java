class MyThread extends Thread
{
	public void run()
	{
		System.out.println(getName()+" run method executed");
	}
}
class PriorityThread
{
	public static void main(String[] args)
	{
		MyThread mt1 = new MyThread();
		MyThread mt2 = new MyThread();
		
		System.out.println(mt1.getName()+"..........."+mt1.getPriority());
		System.out.println(mt2.getName()+"..........."+mt2.getPriority());
		
		mt1.setPriority(8);
		mt2.setPriority(9);
		
		mt1.start();
		mt2.start();
		
		System.out.println(mt1.getName()+"..........."+mt1.getPriority());
		System.out.println(mt2.getName()+"..........."+mt2.getPriority());
	}
}