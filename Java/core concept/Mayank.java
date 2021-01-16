import java.util.*;
public class Mayank{
	public static String[] getCustomer(String city){
String[][] customer	= new String[5][3];
customer[0][0]="102";customer[0][1]="Krithick";
customer[0][2]="Bangalore";customer[1][0]="105";
customer[1][1]="Prabhu";customer[1][2]="Chennai";
customer[2][0]="252";customer[2][1]="Chandrav";
customer[2][2]="Delhi";customer[3][0]="205";
customer[3][1]="Kiran";customer[3][2]="Mumbai";
customer[4][0]="202";
customer[4][1]="Shravan";customer[4][2]="Pune";
String[] match = new String[3];
String []no_match=null;
for(int i=0;i<5;i++){
	if(customer[i][2].equalsIgnoreCase(city)){
		match[0]=customer[i][0];
		match[1]=customer[i][1];
		match[2]=customer[i][2];
		return match;
	}
}
return no_match;
	}
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		String city_name = sc.nextLine();
		String[] output = getCustomer(city_name);
		for(int i=0;i<output.length;i++){
			System.out.println(output[i]+" ");
		}
	}
}
		