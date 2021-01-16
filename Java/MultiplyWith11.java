import java.io.*;
  // very tricky problem
class GFG {
	public static void main (String[] args) throws Exception{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int t=Integer.parseInt(br.readLine());
		while(t>0)
		{
		    t--;
		    String s = br.readLine();
		    StringBuffer b = new StringBuffer();
		    
		    int j=0;
		    for(int i=s.length()-1;i>=0;i--)
		    {   
		        j += (s.charAt(i)-'0')*11;
		        
		        b.append(j%10);
		        j=j/10;
		        
		    }
		    b.append(j);
		    System.out.println(b.reverse());
		}
	}
}