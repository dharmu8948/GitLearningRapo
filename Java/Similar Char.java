import java.util.*;
class SimilarChar
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		char[] ch = new char[N];
		int k=0;
		for(int i=0;i<n;i++)
		{
			ch[i] = sc.next().charAt(k);
		}
		int Q = scan.nextInt();
		while(Q->0)
		{
			int a = scan.nextInt();
			char var = ch[a-1];
			int count=0;
			for(int j=0;j<a-1;j++)
			{
				if(var==vh[j])
				{
					count++;
				}
			}
			
			System.out.println(count);
			