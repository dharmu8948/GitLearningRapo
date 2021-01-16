//WAP to implimentation of super keyword to refer value from subclass to super class(base class)
class Company
{
	String cname;
	Company(String cmp)
	{
		cname=cmp;
		System.out.println("class Company");
	}
		void showcmp()
		{
		   System.out.println("Company\t"+cname);
	    }
}
class Department extends Company
{
	String dname;
	Department(String cmp,String dpt)
	{
		super(cmp);
		dname=dpt;
		System.out.println("Class Department");
	}
	void showDept()
	{
		this.showcmp();
		System.out.println("Department\t"+dname);
	}
}
class Employee extends Department
{
	String ename;
	Employee(String cname,String dname,String ename)
	{
		super(cname,dname);
		this.ename=ename;
		System.out.println("class Employee");
	}
	void showemp()
	{
		this.showDept();
		System.out.println("Employee name\t"+ename);
	}
}
class Testsuper2
{
	public static void main(String[] args)
	{
		Employee emp = new Employee("Social Add World","Business","Dharmendra Kumar");
		emp.showemp();
	}
}
 