//WAP to compute area of Shape by appropriate use of default call by value and call by reference
class Shape
{
	int w,h,d,ar;
	Shape(int x,int y,int z)
	{
		w=x;
		h=y;
		d=z;
		System.out.println("Parameterized constructor using call by value");
	}
	Shape()
	{
		w=5;
		h=7;
		d=3;
		System.out.println("Default Constructor");
	}
	Shape(Shape S)
	{
		w=S.w;
		h=S.h;
		d=S.d;
		System.out.println("Parameterized constructor using call by Reference");
	}
	void findArea()
	{
		ar= 2*((w*h)+(h*d)+(d*w));
		System.out.println("Area of Shape="+ar);
	}
}
	class RunShape
	{
		public static void main(String[] args)
		{
			Shape S1=new Shape();
			Shape S2=new Shape(2,5,9);
			Shape S3=new Shape(5,4,6);
			S1.findArea();
			S2.findArea();
			S3.findArea();
		}
    }  