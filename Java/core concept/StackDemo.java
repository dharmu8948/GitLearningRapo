import java.util.*;
class StackDemo
{
	public static void main(String[] args)
	{
		// It is a child class of Vector .It is specially Designed class for LIFO order
		Stack s = new Stack();
		s.push("A");
		s.push("B");
		s.push("C");
		s.push("D");
		s.push("E");
		s.push("F");
		s.push("G");
		s.push("H");
		System.out.println(s); //[A, B, C, D, E, F, G, H]
		
		
		//to search an element
		System.out.println(s.search("A"));   // 8 Bcoz it follows LIFO
		//if search elements is not available then it returns -1
		System.out.println(s.search("a"));  // -1
		System.out.println();
		
		
		//Object pop() is used To remove and return top element
		System.out.print("Remove and Return the Element from stack:  "+s.pop());  //H
		System.out.println("------>"+s);  //[A, B, C, D, E, F, G]
		System.out.println();
		
		//Object peek() is used to return top of the stack without removal
		System.out.println(s.peek());  // G
		
		//boolean empty() is used to returning true if the stack is empty
		System.out.println(s.isEmpty());
	}
}