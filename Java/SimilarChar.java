import java.util.*;
class SimilarChar
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		char[] ch = new char[N];
		int k=0;
		for(int i=0;i<N;i++)
		{
			ch[i] = sc.next().charAt(k);
		}
		int t = sc.nextInt();
		while(t!=0)
		{
			int a = sc.nextInt();
			char var = ch[a-1];
			int count=0;
			for(int j=0;j<a-1;j++)
			{
				if(var==ch[j])
				{
					count++;
				}
				t--;
			}
			
			System.out.println(count);
		}
	}
}
			