//WAP to demonstration of string Buffer
class Sbuffer
{
	public static void main(String[] args)
 {
	StringBuffer sb1 =new StringBuffer();
	StringBuffer sb2 =new StringBuffer(20);
	StringBuffer sb3 =new StringBuffer("Java is a Plateform Independent");
	sb1.append("Java");
//  sb1.append(7,"hello");
	System.out.println("HashCode of sb1="+sb1.hashCode());
	System.out.println("value of sb1="+sb1);
	sb1.append("Program");
	System.out.println("HashCode of sb1="+sb1.hashCode());
	System.out.println("value of sb1="+sb1);
	System.out.println("Length of sb1="+sb1.length());
	System.out.println("Capacity of sb1="+sb1.capacity());
	sb1.insert(0,"Java is fully object oriented programming language");
	System.out.println("HashCode of sb1="+sb1.hashCode());
	System.out.println("value of sb1="+sb1);
	System.out.println("Capacity of sb1="+sb1.capacity());
	System.out.println("Length of sb2="+sb2.length());
	System.out.println("Capacity of sb2="+sb2.capacity());
	System.out.println("Length of sb3="+sb3.length());
	System.out.println("Capacity of sb3="+sb3.capacity());
 }
}
	



	