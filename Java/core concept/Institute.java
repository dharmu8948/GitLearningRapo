class Institute
{
	public static void main(String[] args)
	{
		//creating objects and instances
		System.out.println("Creating 1st Student Objects");
		Student s1 = new Student();
		s1.Name = "Mr. Hari Krishna";
		s1.rollno = 101;
		s1.course = "B.Tech.";
		s1.College = "Hyderabad University";
		s1.Address = "Hyderabad";
		s1.fees = 50000;
		
		
		System.out.println("Creating 2st Student Objects");
		Student s2 = new Student();
		s2.Name = "Mr.Dharmendra Kumar";
		s2.rollno = 102;
		s2.course = "MCA";
		s2.College = "IET Lucknow";
		s2.Address = "Lucknow";
		s2.fees = 39775;
		
		
		
		System.out.println("Creating 3rd Student Objects");
		Student s3 = new Student();
		s3.Name = "Mr.Harshit Kumar";
		s3.rollno = 103;
		s3.course = "MCA";
		s3.College = "IET Lucknow";
		s3.Address = "Lucknow";
		s3.fees = 39775;
		
		System.out.println("1st object Values : ");
		System.out.println();
		System.out.println("Name        : "+s1.Name);
		System.out.println("Roll Number : "+s1.rollno);
		System.out.println("Course      : "+s1.course);
		System.out.println("College Name : "+s1.College);
		System.out.println("Address      : "+s1.Address);
		System.out.println("Fees         : "+s1.fees);
		System.out.println();
		
		System.out.println("2nd object Values : ");
		System.out.println();
		System.out.println("Name        : "+s2.Name);
		System.out.println("Roll Number : "+s2.rollno);
		System.out.println("Course      : "+s2.course);
		System.out.println("College Name : "+s2.College);
		System.out.println("Address      : "+s2.Address);
		System.out.println("Fees         : "+s2.fees);
		System.out.println();
		
		
		
		System.out.println("3rd object Values : ");
		System.out.println();
		System.out.println("Name        : "+s3.Name);
		System.out.println("Roll Number : "+s3.rollno);
		System.out.println("Course      : "+s3.course);
		System.out.println("College Name : "+s3.College);
		System.out.println("Address      : "+s3.Address);
		System.out.println("Fees         : "+s3.fees);
		System.out.println();
	}
}