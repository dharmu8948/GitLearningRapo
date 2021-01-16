//custom collection
//here we implement internal algorithm to increase capacity of Array Object

class CustomCollection
{
	private Object[] objArray = new Object[10];
	private int elementCount=0;
	
	public void add(Object obj)
	{
		if(elementCount==objArray.length)
		{
			increaseCapacity();
		}
		objArray[elementCount]=obj;
		elementCount++;
	}
	public void increaseCapacity()
	{
		int newCapacity=objArray.length*2;         // newCapacity increase the capacity is double
		Object[] nextArray = new Object[newCapacity]; //create array with double capacity
		for(int i=0;i<objArray.length;i++)
		{
			nextArray[i] = objArray[i];  //copy elements
		}
		objArray=nextArray;  //to remove objArray reference
	}
}

class CustomCollectionDemo
{
	public static void main(String[] args)
	{
		CustomCollection col = new CustomCollection();
		col.add("a");
		col.add("b");
		col.add(5);
		col.add(6.8);    // hetrogeneous as well as homogeneous elements added no problem
		col.add("a");   //duplicate object
		col.add(null);
		col.add(null);    //duplicate object
		col.add(8);
		col.add(9);
		col.add("c");
		
		//11th element added then increaseCapacity method calls
		col.add("d");
	}
}
		
		