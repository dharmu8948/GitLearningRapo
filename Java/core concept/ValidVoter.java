import java.util.*;
class ValidVoter
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		Voter v = new Voter();
		
		while(true)
		{
		
		try
		{
			System.out.println("Enter Your age:  ");
			v.setAge(sc.nextInt());
			System.out.println("Enter Your Name:  ");
			v.setName(sc.next());
		
		
			int age=v.getAge();
			if(age>18||age<120)
				System.out.println("Congratulation! sir You are elligible for voting...."+
			".....You will get your VoterId within 30 days by Telangana State");
		    String name=v.getName();
			if(name!=null)
			{
				System.out.println("Your Name : "+name);
			}
		}
		catch(IllegalArgumentException e)
		{
			System.out.println(e.getMessage());
		}
		}
	}
}