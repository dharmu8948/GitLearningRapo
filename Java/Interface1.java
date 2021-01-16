//WAP TO DEMONSTRATION OF INTERFACE 
interface college
{
//  int a; because it not initialized
	String c_name="IET LUCKNOW";
	String city="LUCKNOW";
	void PrintStudentDetail();
	void msg();
}
class Student impliment college
{
	String s_name;
	String s_course;
	String s_sem;
	void inputStudentDeatail()
	{
		//c_name="INTEGRAL UNIVERSITY";
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter Student name,course,and semester");
		try
		{
			s_name=br.readLine();
			s_course=br.readLine();
			s_sem=br.readLine();
		}
		catch(Exception e)
		{
		}
	}
	public void PrintStudentDeatail()
	{
	// c_code=2040; overridding
		System.out.println("College Name\t"+c_name);
		System.out.println("College code\t"+c_code);
		System.out.println("Student Name\t"+s_name);
		System.out.println("Student Course\t"+s_course);
		System.out.println("Semester    \t"+s_sem);
	}
	public void msg()
	{
	}
}
public class interface1
{
	public static void main(String[] args)
	{
		System.out.println("City\t"+city);
		Student stu=new Student();
		stu.inputStudentDetail();
		stu.PrintStudentDetail();
		College col=new College();
//      col.inputStudentDetail();
		col.PrintStudentDetail();
	}
} 