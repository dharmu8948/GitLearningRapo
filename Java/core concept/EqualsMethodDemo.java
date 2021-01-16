class EqualsMethod
{
	int x=10;
	int y=20;
}
class Test
{
	
}
class EqualsMethodDemo
{
	public static void main(String[] args)
	{
		int x=10;
		int y=20;
		int z=10;
		
		//comparing primitive values using "==" operator
		System.out.println(x==y);   //false
		System.out.println(x==z);   // true
		
		//comparing primitive values using "==" operator
		EqualsMethod e1 = new EqualsMethod();
		EqualsMethod e2 = new EqualsMethod();
		EqualsMethod e3 = e2;
		
		System.out.println(e1==e2);  // false
		System.out.println(e1==e3);  //false
		System.out.println(e2==e3);   // true
		
		boolean bo = true;
	//	System.out.println(x==bo);  //CE:incomparable types:int and boolean
		
		Test t1 = new Test();
	//	System.out.println(e1==t1);  //CE:incomparable types:EqualsMethod and Test
		
		//in below code we are using objects those we created 
		System.out.println(e1.equals(e2)); //false
		System.out.println(e2.equals(e3)); //true
		System.out.println(e1.equals(t1));  // false
		
		//comparing two null using == operator
		
		System.out.println(null==null);  //true
		
		//comparing null with null referenced variable return true
		EqualsMethod e4=null; 
		System.out.println(null==e4);  //true
		
		//comparing null with object referenced variable return false
		EqualsMethod e5=new EqualsMethod(); 
		System.out.println(null==e5);   //false
		
		//comparing null with object also return false
		System.out.println(null==new Example());  //false
		System.out.println();
		System.out.println();
		
		// we cannot invoke method using null it leads compile time error
	   //	System.out.println(null.equals(null));             //CE: <null> cannot be dereferenced
		
		// we cannot invoke method using null referenced variable it leads exception NPE
		Example e6=null;
	//	System.out.println(e6.equals(null));  //RE:NPE
	    Example e7 = new Example();
		System.out.println(e7.equals(null));  //false
		
		
	}
}