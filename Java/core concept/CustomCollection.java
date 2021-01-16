//custom collection
//here we implement internal algorithm to increase capacity of Array Object

class CustomCollection
{
	private Object[] objArray = new Object[10];
	private int elementCount=0;
	
	
	// add Object ==>> it means adding objects at the end of the collection
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
	public int size()  //availabe object
	{
		return elementCount;
	}
	public int capacity()    //total capacity
	{
		return objArray.length;
	}
	//for retrieving objects
	public Object get(int index)
	{
		if(index<0||index>=size())   // to check index in range of size or not
			throw new IndexOutOfBoundsException(index);
		else
		return objArray[index];
	}
	
	// Assign given object with given index location newly existing obj is replced with newly given array
	public void replace(int index,Object obj)
	{
		if(index<0 || index>=size())
		{
			throw new IndexOutOfBoundsException(""+index);
		}
		else
			objArray[index]=obj;
	}
	
	
	
	// Algorith for removing Object
	//1) move elements one location to Left from given index+1 to size()-1
	//2)In size()-1 location store null
	//3)decrease size() by 1
	public void remove(int index)
	{
		if(index<0 || index>=size())
		{
			throw new IndexOutOfBoundsException(""+index);
		}
		while(index<size()-1)
		{
			objArray[index] = objArray[index+1];
			index++;
		}
 		objArray[index]=null;
		elementCount--;
	}
	
	//inserting Object==>>It means storing new object in the middle of existing object
	//     Algorithm :
	//     ===========
	//1)Move elements one location to Right from the given size()-1 to given index
	//2) insert given element in given index
	//3) increase size() by 1
	public void insert(int index,Object obj)
	{
		//case 1:is index lies between 0 to size()-1 or not ?
		if(index<0 || index>size())  
		{
			throw new IndexOutOfBoundsException(""+index);
		}
		
		//case 2: also is size()== capacity() then there is no space to insert and move the element so first increase
		//        the capacity
		if(size()==capacity())
		{
			increaseCapacity();
		}
		
		// now moving the element and inserting the element
		for(int i=size()-1;i>=index;i--)
		{
			objArray[i+1] = objArray[i];
		}
 		objArray[index]=obj;
		elementCount++;
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
		
		
		System.out.println(col);
		System.out.println("Total size of Array: "+col.capacity());   //20
		System.out.println("Total availabe elements: "+col.size());   // 11
		System.out.println();
		
		//retrieving object
		Object obj = col.get(1);
		System.out.println("Retrived Object is: "+obj);
		
	//	 obj = col.get(22);
	//	System.out.println("Retrived Object is: "+obj); //  java.lang.IndexOutOfBoundsException
		
		// replacing with new object within the size
		col.replace(3,"P");
		System.out.println(col);
		System.out.println();
		
		
		// replacing with new object with out of size
	//	col.replace(25,"P");
	//	System.out.println(col);  // RE: java.lang.IndexOutOfBoundsException
	    System.out.println();
	
	
	
		//remove object within the range of given index
		col.remove(5);
		System.out.print("After Removing Object is: "+col);
		System.out.println();
		
		//remove object within the out of range of given index
	//	col.remove(15);
	//	System.out.print("After Removing Object is: "+col);
		System.out.println();
		
		//insert object within the range of given index
		col.insert(2,"L");
		System.out.print("After Inserting Object is: "+col);
		System.out.println();
		
		//insert object within the out of range of given index
	//	col.insert(18,"z");
	//	System.out.print("After Removing Object is: "+col);  // java.lang.IndexOutOfBoundsException
		System.out.println();
		
	}
	
}
		
		