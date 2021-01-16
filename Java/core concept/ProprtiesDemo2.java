import java.util.*;  
import java.io.*;  
class Test {  
public static void main(String[] args)throws Exception{  
    FileReader reader=new FileReader("db.properties");  
      
    Properties p=new Properties();  
    p.load(reader);  
	
	String user = p.getProperty("user");
	String password = p.getProperty("password");
      
    System.out.println(p.getProperty("user = "+user));  
    System.out.println(p.getProperty("password = "+password));  
}  
}  