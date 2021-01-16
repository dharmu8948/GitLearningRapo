class NITCollection
{
	//meant for storing/collecting objects 
	private Object[] objArray = new Object(10);
	
	//maintains array objects
	private int index=0;
	
	
	//meant for adding object in collection
	
	public void add(Object obj)
	{
		if(size()==capacity())
		{
			increaseCapacity();
		}
		objArray[index]=ele;
	}
	
	//size means number of objects  we have stored in collection.This number is maintain by index variable so we 
	// can return it
	public int size()
	{
		return index;
	}
	
	//capacity means number of objects  we can have in collection.This number is nothing but length of array 
	
	public int capacity()
	{
		return objArray.length;
	}
	
	//to increase capacity
	
	private void increaseCapacity()
	{
		Object[] tempArray = new Object[capacity()*2];
		for(int i=0;i<objArray.length;i++)
		{
			tempArray[i]=objArray[i];
		}
		objArray=tempArray;
	}
	public void get(int i)
	{
		return objArray;
	}
	public void replace(int i,Object ele)
	{
		objArray[i]=ele;
	}
}