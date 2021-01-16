 class Person
{
	private static final int eyes=2;
	private static final int ears=2;
	private static final int legs=2;
	private static final int hands=2;
	
	private String name;
	private double height;
	private double weight;
	
	
	//getter method for final variables
	
	public int getEyes()
	{
		return eyes;
	}
	
	public int getEars()
	{
		return ears;
	}
	public int getLegs()
	{
		return legs;
	}
	public int getHands()
	{
		return hands;
	}
	
	//setter and getter methods for remaining variables
	public void setName(String name)
	{
		this.name=name;
	}
	public void setHeight(double height)
	{
		this.height=height;
	}
	public void setWeight(double weight)
	{
		this.weight=weight;
	}
	
	public String getName()
	{
		return name;
	}
	public double getHeight()
	{
		return height;
	}
	public double getWeight()
	{
		return weight;
	}
	
	//normal operation methods
	public void eat()
	{
		System.out.println(name+" eating");
	}
	public void sleep()
	{
		System.out.println(name+" sleeping");
	}
}

 class Student extends Person
{
	private int sno;
	private String course;
	private double fee;
	
	//setter and getter methods
	public void setSno(int sno)
	{
		this.sno=sno;
	}
	public void setCourse(String course)
	{
		this.course=course;
	}
	public void setFee(double fee)
	{
		this.fee=fee;
	}
	public int getSno()
	{
		return sno;
	}
	public String getCourse()
	{
		return course;
	}
	public double getFee()
	{
		return fee;
	}
	void display()
	{
		System.out.println("Eyes\t :" +getEyes());
		System.out.println("Ears\t :" +getEars());
		System.out.println("Hands\t :" +getHands());
		System.out.println("Legs\t :" +getLegs());
		System.out.println("Name\t :" +getName());
		System.out.println("Height\t :" +getHeight());
		System.out.println("Weight\t :" +getWeight());
		System.out.println("Name\t :" +sno);
		System.out.println("Course\t :" +course);
		System.out.println("Fee\t :" +fee);
	}
}

public class College
{
	public static void main(String[] args)
	{
		Student s1 = new Student();
		s1.display();
		System.out.println();
		s1.setName("HK");
		s1.setCourse("Core Java");
		s1.setFee(10000);
		s1.setHeight(5.9);
		s1.setWeight(100);
		s1.setSno(7379);
		s1.display();
        
		System.out.println();
		Student s2 = new Student();
		s1.display();
		System.out.println();
		s1.setName("Nataraj");
		s1.setCourse("Advance Java");
		s1.setFee(20000);
		s1.setHeight(6.1);
		s1.setWeight(80);
		s1.setSno(7000);
		s1.display();
	}
}