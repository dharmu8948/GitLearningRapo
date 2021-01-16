//WAP to input the value of principle,rate,time using command line argumentand compute the value of compound interest
class compoundinterest
{
  public static void main(String args[])
  {
    int p,t,r;
	double CI,TA;
	p=Integer.parseInt(args[0]);
	r=Integer.parseInt(args[1]);
	t=Integer.parseInt(args[2]);
	TA=p*Math.pow((1+(r/100)),t);
	CI=TA-p;
	System.out.println("TA is\t"+TA);
	System.out.println("CI is\t"+CI);
  }
 }