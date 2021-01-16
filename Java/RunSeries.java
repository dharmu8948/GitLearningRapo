/*wap tocreate a class series that contain three attributes a,d,n and method called input and out,now 
create two sub classes named as APSeries and GPSeries to print respective series*/
class Series
{
	int a,d,n;
	void getvalue(int x,int y,int z)
	{
		a=x;
		d=y;
		n=z;
	}
	void putvalue()
	{
		System.out.println("a="+a);
		System.out.println("d="+d);
		System.out.println("n="+n);
	}
	void printAP()
	{
		int i,T;
       System.out.println("APSeries is:");
       for(i=0;i<n;i++)
	   {
		   T=a+i*d;
		   System.out.println(T);
	   }
	   System.out.println("End of APSeries");
	}
	void printGP()
	{
		int i,T;
       System.out.println("GPSeries is:");
       for(i=0;i<n;i++)
	   {
		   T=(int)(a*Math.pow(d,i));
		   System.out.println(T);
	   }
	}
}
class RunSeries
{
	public static void main(String[] args)
	{
		Series AP=new Series();
		Series GP=new Series();
		AP.getvalue(5,4,10);
		GP.getvalue(5,7,3);
		AP.putvalue();
		GP.putvalue();
		AP.printAP();
		GP.printGP();
	}
}