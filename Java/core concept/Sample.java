class Example
{
	void m1(int a){
		System.out.println("int-arg");
	}
}
class Sample extends Example
{
void m1(Integer a){
		System.out.println("Integer-arg");
	}	
public static void main(String[] args)
{
	Sample s = new Sample();
	s.m1(10);
	s.m1(new Integer(10));
	Example e = new Example();
	e.m1(10);
	e.m1(new Integer(10));
}
}