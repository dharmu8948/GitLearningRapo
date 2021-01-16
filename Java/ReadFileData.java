// program to reading data from file
import java.io.*;
import java.util.*;
class ReadFileData
{
	public static void main(String[] args)throws IOException
	{
		FileWritter fw = new FileWritter("abc.txt");
		fw.writter("ABC 521 LUCKNOW KANPUR SITAPUR 5030");
		fw.close();
		FileReader fr=new FileReader("abc.txt");
		Scanner scan=new Scanner(fr);
		while(scan.hasnext())
		{
			System.out.println(scan.next());
		}
	}
}