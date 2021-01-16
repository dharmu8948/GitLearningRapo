//WAP to input employees(Three) name code and basic salary and generate the payslip of employee for given data
import java.io.*;
class Employee
{
int ecode;
int basic;
String ename;
float esal,HRA,TA,DA,LIC,EPF,NETSAL;
void getemp()throws IOException
{
BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
System.out.println("Enter the code,name and salaries and Basic salary of employees :");
ecode=Integer.parseInt(br.readLine());
basic=Integer.parseInt(br.readLine());
ename=br.readLine();
esal=Float.parseFloat(br.readLine());
}
void payslip()throws IOException //user defined
{
  HRA=basic*40/100;
  DA=basic*30/100;
  TA=basic*15/100;
  LIC=basic*17/100;
  EPF=basic*20/100;
  NETSAL=basic+HRA+TA+DA-LIC-EPF;
  System.out.println("emp.Name\t"+ename);
  System.out.println("emp.code\t"+ecode);
  System.out.println("emp.salary\t"+esal);
  System.out.println("Net salary\t"+NETSAL);
  }
}
  class RunEmployee
  {
  public static void main(String[] args)throws IOException
  {
  Employee emp1=new Employee();
   Employee emp2=new Employee();
    Employee emp3=new Employee();
	emp1.getemp();
	emp2.getemp();
	emp3.getemp();
	emp1.payslip();
	emp2.payslip();
	emp3.payslip();
	}
	}