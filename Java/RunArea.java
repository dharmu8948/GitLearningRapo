//WAP to compute area of rectangle if value of length and breadth are initialize using default constructor
class Area
{
int l,b,ar;
Area()
{
	l=12;
	b=6;
	System.out.println("This is the Area of Rectangle");
}
void printArea()
{
	ar=l*b;
	System.out.println("Area of Rectangle is="+ar);
}
}
class RunArea
{
	public static void main(String[] args)
	{
		Area ar=new Area();
		//ar.Area();
		ar.printArea();
	}
}