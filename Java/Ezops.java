
abstract class a
{
	int i;
	abstract void display();
}
class Ezops extends A{
	int j;
	void display(){
		System.out.println(j);
	}
}
class Abstract_demo{
	public static void main(String[] args){
		Ezops e = new Ezops();
		e.j=1;
		e.display();
		
	}
}
