/*
//JAVA.LANG.PACKAGE
//Example 1
class Student
{
	String name;
	int rollno;
	Student(String name,int rollno)
	{
		this.name=name;
		this.rollno=rollno;
	}
	public static void main(String[] args)
	{
		Student s1=new Student("durga",101);
		Student s2=new Student("Ravi",102);
		System.out.println(s1);
		System.out.println(s1.toString());
		System.out.println(s2);
	}
}
//conclusion==>if our class does not contain toString() then object class toString() will be executed
========================================================================================================================		
//Example 2
class Student
{
	String name;
	int rollno;
	Student(String name,int rollno)
	{
		this.name=name;
		this.rollno=rollno;
	}
	public String toString()
	{
		return name+"..."+rollno;
	}
	public static void main(String[] args)
	{
		Student s1=new Student("durga",101);
		Student s2=new Student("Ravi",102);
		System.out.println(s1);
		System.out.println(s1.toString());
		System.out.println(s2);
	}
}
//conclusion==>>based our requirement we can override toString() to provide our own string representation
==================================================================================================================*/
//Example 3 
import java.util.*; 
class Student
{
	
	public String toString()
	{
		return "Student";
	}
	public static void main(String[] args)
	{
		String s=new String("durga");
		System.out.println(s);
		Integer I=new Integer(10);
		System.out.println(I);
		ArrayList l=new ArrayList();
		l.add("A");
		l.add("B");
		System.out.println(l);
		Student s2=new Student();
		System.out.println(s2.toString());
		System.out.println(s2);
	}
}
//conclusion ==>> all wrapper classes,in all collection classes,string class,stringBuffer,StringBuilder class toString()
//is overriden for meaningfull string representation.Hence it is highly reccomended to override toString in our class  
/*==========================================================================================================================
// 2.hashCode
Example 1 
class Test{
	int i;
	Test(int i)
	{
		this.i=i;
	}
	public int hashCode()
	{
		return i;
	}
	public static void main(String[] args)
	{
		Test t1=new Test(10);
		Test t2=new Test(100);
		System.out.println(t1);
		System.out.println(t2);
	}
}
//conclusion ==>>if we are overriding toString() then our toString() may not call hashCode()
======================================================================================================================
Example 1
class Test{
	int i;
	Test(int i)
	{
		this.i=i;
	}
//	public int hashCode()
//	{
//		return i;
//	}   
	public static void main(String[] args)
	{
		Test t1=new Test(10);
		Test t2=new Test(100);
		System.out.println(t1);
		System.out.println(t2);
	}
}
//conclusion ==>>if we are giving the chance to object class toString()it will internally calls hashCode() 
===================================================================================================================
Example  
class Test{
	int i;
	Test(int i)
	{
		this.i=i;
	}
	public String toString()
	{
		return i+"";  //here i is converted from integer to String
	}
	public int hashCode()
	{
		return i;
	}
	public static void main(String[] args)
	{
		Test t1=new Test(10);
		Test t2=new Test(100);
		System.out.println(t1);
		System.out.println(t2);
	}
}
====================================================================================================================
// 3. .equals()
Example 1 
class Student{
	String name;
	int rollno;
	Student(String name,int rollno)
	{
		this.name=name;
		this.rollno=rollno;
	}
	public static void main(String[] args)
	{
		Student s1=new Student("Durga",101);
		Student s2=new Student("Dharmendra",102);
		Student s3=new Student("Durgesh",103);
		Student s4=s1;
		System.out.println(s1.equals(s2));
		System.out.println(s1.equals(s3));
		System.out.println(s1.equals(s4));
	}
}
//conclusion ==>>if our class does not contains equals() then object class .equals() will be executed
//object class .equals() compare with reference variable
==================================================================================================================
Example 2  
class Student
{
	String name;
	int rollno;
public boolean equals(Object obj)
{
	try
	{
		String name1=this.name;
		int rollno1=this.rollno;
		Student s=(Student)obj;
		String name2=s.name;
		int rollno2=rollno;
		if(name1.equals(name2)&&rollno1==rollno2)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	catch(ClassCastException e)
	{
		return false;
	}
	catch(NullPointerException e)
	{
		return false;
	}
}
	public static void main(String[] args)
	{
		Student s1=new Student("durga",101);
		Student s2=new Student("ravi",102);
		Student s1=new Student("durga",101);
		Student s4=s1;
		System.out.println(s1.equals(s2));
		System.out.println(s1.equals(s3));
		System.out.println(s1.equals(s4));
		System.out.println(s1.equals("durga"));
		System.out.println(s1.equals(null));
	}
}
// plz. check code again from video of durgasoft
==============================================================================================================
//3. getClass()
Example 1 
class Test
{
	public static void main(String[] args)
	{
		int count=0;
		Object o=new String("Durga");
		Class c=o.getClass();
		System.out.println("Fully Qualified Name of class "+c.getName());
		Method[] m=c.getDeclaredMethod();
		System.out.println("Method Information");
		for(Method m1:m)
		{
			count++;
			System.out.println(m1.getName());
		}
		System.out.println("The Number of Methods is:"+count);
	}
}
======================================================================================================================
//4.java.lang.string pkg.
Example 1  */





