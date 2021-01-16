class Circle
{
int r;
double ar,circum;
void Circle(int x)
{
r=x;
}
void findArea()
{
ar=Math.PI*r*r;
System.out.println("Area of Circle is="+ar);
}
void findcircum()
{
circum=2*3.14*r;
System.out.println("Circumference of circle is="+circum);
}
}
class Runcircle
{
public static void main(String[] args)
{
Circle C=new Circle();
C.Circle(2);
C.findArea();
C.findcircum();
}
}
