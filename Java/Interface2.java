//WAP TO MULTIPLE INHERITANCE USING INTERFASE
import java.io.*;
interface college
{
	String c_name="IET LUCKNOW";
	String c_city="Lucknow";
	int c_code=1020;
	void printStudentDetail();
	void msg();
}
class Department
{
	String dname;
	int dcode;
	void getDept(String s1,int s2)
	{
		dname=s1;
		dcode=s2;
	}
}
class Student extends Department implements college
{
	String s_name,s_course,s_sem;
	void inputStudentDetail()throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter Student name,course,semester");
		s_name=br.readLine();
		s_course=br.readLine();
		s_sem=br.readLine();
	}
	public void printStudentDetail()	//overriding
	{
	System.out.println("College Name\t"+c_name);
    System.out.println("College Code\t"+c_code);
	System.out.println("Department Name\t"+dname);
	System.out.println("Department Code\t"+dcode);
	System.out.println("Student Name\t"+s_name);
	System.out.println("Course\t"+s_course);
	System.out.println("Semester\t"+s_sem);
	}
   public void msg()  //override
   {
	   System.out.println("This is Lucknow");
   }
}
public class Interface2
{
	public static void main(String[] args)throws IOException 
	{
		System.out.println(college.c_name);
		Student stu=new Student();
		stu.inputStudentDetail();
		stu.getDept("CS",1002);
		stu.printStudentDetail();
	}
}
    