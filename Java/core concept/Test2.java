import java.util.*;
class Test2
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t>0)
		{
			int n = sc.nextInt();
			String l = sc.next();
			char ch[] = new char[l.length()];
			int count=0;
			for(int i=0;i<l.length();i++){
				ch[i] = l.charAt(i);
			}
			for(int i=0;i<l.length()-1;i++){
				if(ch[i]==ch[i+1])
				{
					count=count+2;
				}
			}
			System.out.println(count);
			t--;
		}
	}
}