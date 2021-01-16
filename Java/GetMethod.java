
import java.lang.reflect.*;
class GetMethod
{
	public static void main(String[] args)throws Exception
	{
		int count=0;
		Class c = Class.forName("java.lang.object");
		Method []m=c.getDeclaredMethods(c);
        for(Method m1 : m)
		{
			count++;
			System.out.println(m1.getName());
		}
		System.out.println("The number of Methods="+count);
	}
}