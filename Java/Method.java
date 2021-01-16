//WAP to impliment java method
class Method
{
  //Constructor method
 Method()
 {
 System.out.println("Constructor Method is called when an object of its class is Created");
 }
 //main method where program execution begins
 public static void main(String[] args)
 {
 staticMethod();
 Method ob=new Method();
 //ob.Method();
 ob.nonstaticMethod();
 }
 static void staticMethod()
 {
 System.out.println("Static Method can be called without creating Object");
 }
 void nonstaticMethod()
 {
 System.out.println("non static method method must be called when create an object");
 }
 }