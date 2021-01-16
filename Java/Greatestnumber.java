class Greatestnumber
{
  public static void main(String[] args)
  { 
     int a,b,c;
	/* a=36;
	 b=45;
	 c=1;*/
	 a=Integer.parseInt(args[0]);
	 b=Integer.parseInt(args[1]);
	 c=Integer.parseInt(args[2]);
	 if(a>b&&a>c)
	   System.out.println("greatest number is :"+a);
	 else if(b>c)
	        System.out.println("greatest numbr is :"+b);
		else
		    System.out.println("greatest number is :"+c);
	}
 }