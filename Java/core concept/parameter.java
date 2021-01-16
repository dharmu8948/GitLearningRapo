class Parameter{
void m1(float x){
System.out.println("m1-float: "+x);
}
void m1(int x){
System.out.println("m1-int: "+x);
}
public static void main(String[] args) {
Parameter t = new Parameter();
t.m1(100);
}
}