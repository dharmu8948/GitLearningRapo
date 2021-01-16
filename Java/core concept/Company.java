class Company
{
	public static void main(String[] args)
	{
		//creating objects and instances
		Employee e1 = new Employee();
		e1.Eno = 101;
		e1.Ename = "Mr. Hari Krishna";
		e1.Post = "Software Developper";
		e1.Dept = "Java";
		e1.Company = "Naresh i Technology";
		e1.Salary = 80000.0;
		
		Employee e2 = new Employee();
		e2.Eno = 102;
		e2.Ename = "Mr. Dharmendra Kumar";
		e2.Post = "Software Engineer";
		e2.Dept = "Java";
		e2.Company = "TCS";
		e2.Salary = 40000.0;
		
		Employee e3 = new Employee();
		e3.Eno = 103;
		e3.Ename = "Mr. Mayank Dixit";
		e3.Post = "Software Developper";
		e3.Dept = "Node js";
		e3.Company = "ZEEBOX";
		e3.Salary = 50000.0;
		
		
		Employee e4= new Employee();
		e4.Eno = 104;
		e4.Ename = "Mr. Harshit Kumar";
		e4.Post = "Software Developper";
		e4.Dept = "Machine Learning";
		e4.Company = "Paytm";
		e4.Salary = 90000.0;
		
		
		//Displaying e1,e2,e3 and e4 objects values
		
		System.out.println("e1's Pointing objects Values  : ");
		System.out.println();
		System.out.println("Employee Number : "+e1.Eno);
		System.out.println("Employee Name : "+e1.Ename);
		System.out.println("Employee Post : "+e1.Post);
		System.out.println("Employee Department : "+e1.Dept);
		System.out.println("Employee Company : "+e1.Company);
		System.out.println("Employee Salary : "+e1.Salary);
		System.out.println();
		
		
		
		
		
		System.out.println("e2's Pointing objects Values  : ");
		System.out.println();
		System.out.println("Employee Number : "+e2.Eno);
		System.out.println("Employee Name : "+e2.Ename);
		System.out.println("Employee Post : "+e2.Post);
		System.out.println("Employee Department : "+e2.Dept);
		System.out.println("Employee Company : "+e2.Company);
		System.out.println("Employee Salary : "+e2.Salary);
		System.out.println();
		
		
		
		System.out.println("e3's Pointing objects Values  : ");
		System.out.println();
		System.out.println("Employee Number : "+e3.Eno);
		System.out.println("Employee Name : "+e3.Ename);
		System.out.println("Employee Post : "+e3.Post);
		System.out.println("Employee Department : "+e3.Dept);
		System.out.println("Employee Company : "+e3.Company);
		System.out.println("Employee Salary : "+e3.Salary);
		System.out.println();
		
		
		
		System.out.println("e4's Pointing objects Values  : ");
		System.out.println();
		System.out.println("Employee Number : "+e4.Eno);
		System.out.println("Employee Name : "+e4.Ename);
		System.out.println("Employee Post : "+e4.Post);
		System.out.println("Employee Department : "+e4.Dept);
		System.out.println("Employee Company : "+e4.Company);
		System.out.println("Employee Salary : "+e4.Salary);
		System.out.println();
	}
}