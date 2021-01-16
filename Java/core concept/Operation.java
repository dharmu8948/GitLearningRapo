class AddThread extends Thread
{
	int sum=0;
	public void run()
	{
		for(int i=50;i>=1;i--)
		{
			sum = sum + i ;
			System.out.println("Sum :"+sum);
		}
	}
}


class DiffThread extends Thread
{
	int diff = 0;
	public void run()
	{
		for(int i=1;i<=50;i++)
		{
			diff = i-diff ;
			System.out.println("diff :"+diff);
		}
	}
}

class Operation 
{
	public static void main(String[] args)
	{
		AddThread at = new AddThread();
		DiffThread dt = new DiffThread();
		at.start();
		dt.start();
	}
}