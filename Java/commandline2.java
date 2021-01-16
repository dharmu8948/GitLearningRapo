//program to demonstration of command line input
class commandline2
{
  public static void main(String[] args)
   {
      int i;
	  for(i=0;i<args.length;i++)
	     System.out.println("Name"+(i+1)+"\t"+args[i]);
	}
 }