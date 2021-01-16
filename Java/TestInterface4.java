//program for implimentation of two or more interfaces at a time i,e multiple inheritance using interfaces
interface UGC
{
	String ugc="University Grant Commission";
	void showugc();
}
interface University
{
	String uname="AKTU";
	void showuniversity();
}
interface Department extends UGC,University
{
	String d_name="Computer Science";
	void showDepartment();
}
class Student implements Department
{
	String sname,scourse;
	void getStudent(String name,String course)
	{	
	    sname=name;
		scourse=course;
	}
	public void showugc()   //override
	{
		System.out.println(ugc);
	}
	public void showuniversity()
	{
		System.out.println(uname);
	}
	void putStudent()
	{
		System.out.println("Student Name\t"+sname);
		System.out.println("course\t"+scourse);
	}
	public void showDepartment()
	{
		System.out.println(d_name);
	}
}
class TeatInterface
{
	public static void main(String[] args)
	{
		Student stu=new Student();
		stu.getStudent("Dharmendra Kumar","MCA");
		stu.showugc();
		stu.showuniversity();
		stu.showDepartment();
		stu.putStudent();
	}
}
			