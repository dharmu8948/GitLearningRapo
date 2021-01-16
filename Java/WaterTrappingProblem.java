class GFG
 {
	public static void main (String[] args)
	 {
	     Scanner sc = new Scanner(System.in);
	     int t=sc.nextInt();
	     for(int j=0;j<t;j++)
	     {
	         int n = sc.nextInt();
	         int a[] = new int[n];
	         for(int i=0;i<n;i++)
	         {
	             a[i] = sc.nextInt();
	         }
	         int b[] = new int[n];
	         int c[] = new int[n];
	         int max=0;
	         for(int i=0;i<n;i++)
	         {
	             if(max<a[i])
	             {
	                 max=a[i];
	             }
	             b[i]=max;
	         }
	         int max1=0;
	         for(int i=n-1;i>=0;i--)
	         {
	             if(max1<a[i])
	             max1=a[i];
	             c[i]=max1;
	         }
	         int totalwater=0;
	         for(int i=0;i<n;i++)
	         {
	             int waterAt = Math.min(c[i],b[i])-a[i];
	             totalwater+=waterAt;
	         }
	         System.out.println(totalwater);
	     }
	 }
}