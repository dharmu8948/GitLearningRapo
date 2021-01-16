import java.util.Scanner;
class BikeRider
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		Bike b = new Bike();
		while(true)
		{
			try
			{
				System.out.println("\nChangeGear: ");
				b.setGear(sc.nextInt());
				
				int gear=b.getGear();
				if(gear==0)
					System.out.println("Bike is Neutral");
				else
					System.out.println("Bike is running on gear: "+gear);
			}catch(IllegalArgumentException e)
			{
				System.out.println(e.getMessage());
			}
		}
	}
}
		