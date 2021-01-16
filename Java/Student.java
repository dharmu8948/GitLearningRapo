//WAP to input nstiudent name roll number and marksof three subject and generate the marksheet of student with total mark,percentage,and division
 import java.io.*;
 class Student
 {
   public static void main(String[] args)throws IOException
   {
     String sname,div;
	 int rno,m1,m2,m3,m4,m5,total;
	 float per;
	 DataInputStream dis=new DataInputStream(System.in);
	 //BufferedReader br=new BufferedReader(dis);
	 System.out.println("Enter student name,Roll Number,and Marks of 5 subjects");
	 sname=dis.readLine();
	 div=dis.readLine();
	 rno=Integer.parseInt(dis.readLine());
	 m1=Integer.parseInt(dis.readLine());
	 m2=Integer.parseInt(dis.readLine());
	 m3=Integer.parseInt(dis.readLine());
	 m4=Integer.parseInt(dis.readLine());
	 m5=Integer.parseInt(dis.readLine());
	 total=m1+m2+m3+m4+m5;
	 per=total/5;
	 if(per>=60)
	   div="First Division";
	 else if(per>=45)
	      div="Second Division";
	  else if(per>=33)
	     div="Third Division";
	  else
	     div="Fail";
		 System.out.println("Student Name\t"+sname);
		 System.out.println("Roll Number\t"+rno);
		 System.out.println("Percentage\t"+per);
		 System.out.println("Division\t"+div);
   }
 }
		 
		 
		 
		 
	  
	 