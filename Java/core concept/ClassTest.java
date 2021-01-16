import java.util.*;
class ClassTest
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t>0)
		{
			int n = sc.nextInt();
			String s = sc.nextLine();
			int k=0;
			int count=1;
			for(int i=1;i<s.length();i++)
			{
				if(s.charAt(i)!=s.charAt(k)){
			    count++;
				}
				k=i;
			}
			System.out.println(count);
			t--;
		}
	}
}