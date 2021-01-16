import java.util.*;
class VectorDemo1
{
	public static void main(String[] args)
	{
		Vector v = new Vector();
		System.out.println("Default Capacity of Vector is:  "+v.capacity());  //default capacity is 10
		v.addElement('s');
		v.addElement("1");
		v.addElement("6.8");
		v.addElement('M');
		v.addElement("7");
		v.addElement("27");
		v.addElement(null);
		v.addElement("HK");
		v.addElement("89");
		v.addElement(null);
		System.out.println(v);
		System.out.println();
		
		System.out.println("Default Capacity of Vector at adding of 10 element is:  "+v.capacity());// 10
		System.out.println("Size of objects in Vector is: "+v.size());
		v.addElement("a");
		System.out.println("Size of objects in Vector is: "+v.size());
		System.out.println("Capacity after adding 11th elements its size becomes double:  "+v.capacity());
		//after adding 10 element if we trying to add more element then its size-- 
		//--by default increases double of its size i,e 10*2=20
		System.out.println();
	//	v.setElement(9,5);
		System.out.println(v);
		
		System.out.println();
		
		//we can also create empty vector object with specified initial capacity for anothe objects
		Vector v1 = new Vector(60);
		System.out.println("Size of objects in Vector is: "+v.size());
		System.out.println("Capacity of Vector is:  "+v1.capacity());
		System.out.println();
		
		
		//remove to a perticuler element from the vecter v
		v.removeElement("89");   // [s, 1, 6.8, M, 7, 27, null, HK,89, null, a]
		System.out.println("Element 89 removed from Vector v:  "+v);    // [s, 1, 6.8, M, 7, 27, null, HK, null, a]
		System.out.println("Size of objects in Vector is: "+v.size());
		System.out.println();
		
		
		//element remove at specified index
		v.removeElementAt(3);
		System.out.println("After Element removed at specified Index 3rd:  "+v); //[s, 1, 6.8, 7, 27, null, HK, null,a]
		System.out.println("Size of objects in Vector is: "+v.size());
		System.out.println();
		
		
		// method prototype is Object elementAt(int index) used to search Specified index element
		System.out.println("Search Element at specified index 0 is: "+v.elementAt(0)); 
		System.out.println();
		
		// method prototype is Object firstelement() used to show first element
		System.out.println("The first Element of the Vector is:  "+v.firstElement());//The first Element of the Vector is:  s
		System.out.println();
		
		
		
		// method prototype is "Object lastelement();" used to show last element
		System.out.println("The first Element of the Vector is:  "+v.lastElement());
		System.out.println("Size of objects in Vector is: "+v.size());
		//The last Element of the Vector is:  s
		System.out.println();
		
		
		
		//to remove all elements from vector
	    v.removeAllElements();
		System.out.println(v);// [] all elements removed from vector
		System.out.println("Size of objects in Vector is: "+v.size());
	}
}