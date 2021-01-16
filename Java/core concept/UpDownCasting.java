class fruit
{
	
}
class Mango extends fruit
{
	String Color = "Yellow";
}
class Orange extends fruit
{
	String Color = "Yellow";
}
class Apple extends fruit
{
	String Color = "Red";
}
class Person
{
	void eat(fruit f)
	{
		System.out.println(f);
	//	System.out.println(f.color);  //CE: c f static
	    if(f instanceof Apple)
		{
			Apple a = (Apple)f;        //downcasting i,e access child class from parent class
		    System.out.println(a.Color);  //RED
		}
		else if(f instanceof Mango)
		{
			Mango m = (Mango)f;
		    System.out.println(m.Color);  //Yellow
		}
		else if(f instanceof Orange)
		{
			Orange o = (Orange)f;
		    System.out.println(o.Color);  //Yellow
		}
		else
			System.out.println("No Object types matched");
		
	}
}
class FruitDemo
{
	public static void main(String[] args)
	{
		Person p = new Person();
		p.eat(new Apple());
		p.eat(new Mango());
		p.eat(new Orange());
	}
}