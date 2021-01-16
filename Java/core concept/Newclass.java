import java.util.*;
class Test3
{
	public static void main(String[] args){
		Scanner scn = new Scanner(System.in);
		int t = scn.nextInt();
		for(int k=0;k<t;k++){
			//int n = scn.nextInt();
			String s = scn.next();
			int count=0;
			int l=0;
			for(int i=1;i<s.length();i++)
			{
				if(s.charAt(i)==s.charAt(l)){
			    count = count+2;
				}
				k=i;
			}
			System.out.println(count);
		}
	}
}
	