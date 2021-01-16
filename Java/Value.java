//program to demonstration of implicit default constructor
class Value
{
int a;
float b;
boolean c;
void display()
{
 int d=10;
System.out.println("a="+a);
System.out.println("b="+b);
System.out.println("c="+c);
//System.out.println("d="+d);
}
public static void main(String[] args)
{
Value v=new Value();
v.display();
}
}
