import java.util.*;
class HashMapTable
{
	public static void main(String[] args)
	{
		Hashtable h = new Hashtable();
		//it creates an empty hashtable object with default initial capaty is "11" and default fill ratio "0.75"
		h.put(new Temp(5),"A");
		h.put(new Temp(2),"B");
		h.put(new Temp(6),"c");
		h.put(new Temp(15),"D");  // 15%11=4  "11" is default initial capacity
		h.put(new Temp(23),"E");   // 23%11=1
		h.put(new Temp(16),"F");   // 16%11=5
		h.put(new Temp(5),"A");
		h.put("HK",7);
		h.put("HK",8);
		h.put(6,"Durga Sir");
		h.put(7,47);
	//	h.put("HK",null);    // RE: NPE
		System.out.println(h);
	}
}
class Temp{
	int i;
	Temp(int i)
	{
		this.i=i;
	}
	public int hashCode()
	{
		return i;
	}
	public String toString()
	{
		return i+"";
	}
}