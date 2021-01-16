//WAP TO DEMONSTRATION OF USER DEFINE EXCEPTION 
import java.util.Scanner;
class Amount extends AmountException
{
	Amount()
	{
		super("Please Enter Amount in Multiple of Hundred");
	}
}
class AmountException
{
	public static void main(String[] args)
	{
		Scanner scan=new Scanner(System.in);
		int amt;
		try
		{
			System.out.println("Enter the Amount");
			amt=scan.nextInt();
			if(amt%100==0)
			{
				throws new Amount();
			}
			else  
				System.out.println("valid amount");
			}
		}
			
		catch(InputMismatchException ie)
		{
			System.out.println(ie.getMessage());
		}
		catch(AmountException ae)
		{
			System.out.println(ae.getMessage());
		}
	}
}