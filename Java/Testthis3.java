 //Implimentation of "this" keywords
 class person
 {
	 String ename;
	 int eage;
	 float esal;
	 person(String name,int age,float sal)
	 {
		 this(age,sal);
		 ename=name;
		 System.out.println("Name is initialized");
	 }
	 person(int age,float sal)
	 {
		 this(sal);
		 eage=age;
	     System.out.println("Age is initialized");
	 }
	 person(float sal)
	 {
		 this.esal=sal;
		 System.out.println("Salary is initialized");
	 }
	 void showdata()
	 {
		 System.out.println("Name\t"+ename);
		  System.out.println("Age\t"+eage);
		   System.out.println("Salary\t"+esal);
	 }
}
class Testthis3
{
	public static void main(String[] args)
	{
	   person p = new person("dharmendra",22,1000);
	   p.showdata();
	}
}
 