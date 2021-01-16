class Limits
{
	public static void main(String[] args)
	{
		System.out.println(Short.MIN_VALUE);   //-32768
		System.out.println(Short.MAX_VALUE);   //32767
		System.out.println(Float.MIN_VALUE);
		System.out.println(Float.MAX_VALUE);
		System.out.println((int)Character.MIN_VALUE);   // 0
		System.out.println((int)Character.MIN_VALUE);    // 0
		
		//     type casting is applicable only for primitive datatypes but not object to primitive;
		
	//	String s="100"; 
	//	byte b = (byte)s; //CE: incompatible types: String cannot be converted to byte
	//    byte b= 10;
	//	String s=(String)b;//CE: incompatible types: byte cannot be converted to String
	    
	}
}