import java.util.*;
class DuplicateArray
{
	public static void main(String[] args)throws Exception
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the number of elements:  ");
		int n = sc.nextInt();
		System.out.println("Enter the Elements of array: ");
		int a[] = new int[n];
		for(int i=0;i<n;i++)
		{
			a[i] = sc.nextInt();
		}
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[i]==a[j])
				{
					System.out.println("Duplicate Element is:  "+a[i]);
				}
			}
		}
	}
}