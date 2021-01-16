//implimentation of multiple inheritance using interface
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
class Student implements UGC,University
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
}
class TestInterface
{
	public static void main(String[] args)
	{
		Student stu=new Student();
		stu.getStudent("Dharmendra Kumar","MCA");
		stu.showugc();
		stu.showuniversity();
		stu.putStudent();
	}
}
			