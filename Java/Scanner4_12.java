//WAP to input the name of file and print its data ""by input its file name(Scanner4_12.java) and it print Completed code
import java.util.Scanner;
import java.io.*;
class Scanner4_12
{
	public static void main(String[] args)throws IOException
	{
		Scanner scan=new Scanner(System.in);
		System.out.println("Enter the file name");
		String file=scan.nextLine();
		FileReader fr=new FileReader(file);
		Scanner in=new Scanner(fr);
		while(in.hasNextLine())
		{
			System.out.println(in.nextLine());
		}
	}
}
	