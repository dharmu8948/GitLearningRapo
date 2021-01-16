import java.util.*;
class Sets
{
	public static void main(String[] args)
	{
		Set s = new HashSet();
		s.add("one");
		s.add("second");
		s.add(new Integer(4));
		s.add("3rd");
		s.add("second");
		s.add(new Integer(4));
		s.add(new Float(5.0));
		System.out.println(s);
	}
}