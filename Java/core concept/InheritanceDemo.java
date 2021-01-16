
//Example 1: One class can only extends to another class. if we are trying to implements with one class to another class
// then we will get compile time error  
/*class A
{
	
}
class B extends A
{
}

// class C implements A   //Error: a class can't implements to another class
//   {
	
//   }


// Example 2: One interface can only extends to another interface. if we are trying to implements with one interface to another
// interface then we will get compile time error
interface I1
{
	
}
interface I2 extends I1
{
	
}
interface I3 implements I1  //CE:
{
	
}



//Example 3: A class can't extends to An interface ,but a class can only implements to an interface 
interface I1
{
	
}
class D implements I1
{
	
}
//     class E extends I1    //CE:It's not allowed
//     {
	
//      }

//  Example 4:An interface doesn't extends or implements to any class

class A
{
	
}
interface I4 extends A      //CE: an interface extendss to any class is Not possible 
{
	
}
//  interface I4 implements A  //CE: an interface implements to any class is Not possible 
//   {
	
//    }


=========================================================================================================================*/
//Example: a class can extends to other class at any times 
class P
{
	void m1()
	{
		
	}
}
class Q extends P
{
	
}
//Example:an interface can extends to other interface at any times
interface I5
{
	void m1();    //interface abstract methods cannot have body
}
interface I6 extends I5
{
	
}
// a class an implements to an interface
class S implements I5 
{
	public void m1()
	{
		
	}
}