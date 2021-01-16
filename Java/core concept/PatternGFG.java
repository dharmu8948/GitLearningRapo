/*

class PatternGfG
{
	public static void main(String[] args)
	{
		PatternGfG p = new PatternGfG();
		p.printPat(3);
	}
    void printPat(int n)
    {
for(int i = n; i>=1; i--)
{
for(int j=n; j>=1; j--)
{
for(int k = 1; k<=i; k++)
{
System.out.print(j+" ");
}
}
System.out.print("$");
}
}
}

=========================================================================================================*/

class GfG
{
	public static void main(String[] args)
	{
		GFG g1 = new GFG();
		int n= Integer.parseInt();
		int arr[] = new int[n];
		for(int i=0;i<n;i++)
			arr[i]=Integer.parseInt();
		g1.print(arr,n);
    public static void print(int arr[], int n)
    {
for(int i=0; i<n; i++)
{
    if(i%2==0)
    {
        System.out.print(arr[i]+" ");
         }
 }
    }
}