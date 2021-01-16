//WAP to input a number with command line argument and its table
class Table
{
  public static void main(String args[])
  {
    int n,i,t;
	n=Integer.parseInt(args[0]);
	for(i=1;i<=10;i++)
	{
	  t=n*i;
	  System.out.println(n+"*"+i+"="+t);
	 }
  }
 }