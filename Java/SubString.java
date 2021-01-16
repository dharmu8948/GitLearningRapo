import java.util.*;
 class SubString
 {
 public static void main(String[] args)
 {
	 LinkedList<String> l=new LinkedList<String>();
	 Scanner sc=new Scanner(System.in);
	 String s=sc.next(),s1=sc.next();
	 int x=s.length(),y=s1.length(),flag=0,flag1=0;
	  for(int i=0;i<y;i++)
	  {
		  l.add(""+s1.charAt(i));
	  }
	  for(int i=0;i<x;i++)
	  {
		  flag=0;
		  String c=""+s.charAt(i);
		   for(int j=0;j<y;j++)
		   {
			   if(c.equals(l.get(j)))
			   {
				   flag=1;
				   l.remove(j);
				   y--;
				   break;
			   }
		   }
		   if(flag==0)
		   {
			  break;
		   }
		   if(i==(x-1) && flag==1)
		   {
			   flag1=1;
			   break;
		   }
	  }
	  if(flag1==1)
	  {
		  System.out.println(true);
	  }
	  else{
		  System.out.println(false);
	  }
  
 }
 }