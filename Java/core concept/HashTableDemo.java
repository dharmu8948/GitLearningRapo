
/*
Hashtable in Java:
======================
This class implements a hash table, which maps keys to values. Any non-null object can be used as a key or as a value.
To successfully store and retrieve objects from a hashtable, the objects used as keys must implement the hashCode method 
and the equals method.

It is similar to HashMap, but is synchronised.
Hashtable stores key/value pair in hash table.
In Hashtable we specify an object that is used as a key, and the value we want to associate to that key. 
The key is then hashed, and the resulting hash code is used as the index at which the value is stored within the table.
Constructors:

Hashtable(): This is the default constructor.
===========
Hashtable(int size): This creates a hash table that has initial size specified by size.
==================
Hashtable(int size, float fillRatio): This version creates a hash table that has initial size specified 
=====================================
by size and fill ratio specified by fillRatio. fill ratio: Basically it determines how full hash table can be 
before it is resized upward.and its Value lie between 0.0 to 1.0
Hashtable(Map m): This creates a hash table that is initialised with the elements in m.
================
Methods:

void clear() : method clears the hashtable so that it contains no keys.
==============
    Syntax : public void clear()
     Returns : NA
    Exception : NA
Object clone() : used to create a shallow copy of this hashtable.
===============
    Syntax : public Object clone()
    Returns :method call returns a clone of the hashtable.
    Exception : NA
*/


// Java code illustrating clear() and clone() methods 
import java.util.*; 
class HashTableDemo { 
    public static void main(String[] arg) 
    { 
        // creating a hash table 
        Hashtable h = new Hashtable(); 
  
        Hashtable<Integer, String> h1 = 
                      new Hashtable<Integer, String>(); 
  
        h.put(3, "Geeks"); 
        h.put(2, "forGeeks"); 
        h.put(1, "isBest"); 
  
        // create a clone or shallow copy of hash table h 
        h1 =(Hashtable)h.clone(); 
  
        // checking clone h1 
        System.out.println("values in clone: " + h1); 
  
        // clear hash table h 
        h.clear(); 
  
        // checking hash table h 
        System.out.println("after clearing: " + h); 
    } 
} 


