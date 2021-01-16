

import java.util.*;
class ExceptionHandling
{ 
   public static void main(String[] args)   
   {
	   Scanner sc = new Scanner(System.in);
	   Exception1 e1 = new Exception1();
	   while(true){
	   try
	   {		   
	       System.out.print("Enter the Number: ");
		   e1.setNum(sc.nextInt());
		   int Num=e1.getNum();
		   System.out.println("The Given Number is: "+Num);
	   }
	   catch(ArithmeticException ae)
	   {
		   System.out.println(ae.getMessage());
	   }
	   catch(IllegalArgumentException iea)
	   {
		   System.out.println(iea.getMessage());
	   }
	   catch(IllegalStateException isa)
	   {
		   System.out.println(isa.getMessage());
	   
	   }
	  }   //end of while
   }    // end of main
}    //   end of class 

class Exception1
{
	private int Num;
	public void setNum(int Num)
	{
		if(Num>50)
		{
			throw new IllegalArgumentException("Value must be less than 50");
		}
		else if(Num==0)
		{
			throw new ArithmeticException("Don't pass 0");
		}
		else if(Num<10 || Num>15)
		{
			throw new IllegalStateException("Value Must be between (10,15)");
		}
		else if(Num<0)
		{
			throw new IllegalArgumentException("Negative Number not allowed");
		}
		else
		   this.Num=Num;
	}
	public int getNum()
	{
		return Num;
	}
}