/*
import java.util.regex.*;
class RegExDemo
{
public static void main(String[] args)
{
int count=0;
Pattern p=Pattern.compile("ab");
Matcher m =p.matcher("abbabbba");
while(m.find())
{
count++;
System.out.println(m.start()+"......."+m.end()+"......."+m.group());
}
System.out.println("The total number of occurances:="+count);
}
}
==============================================================================================
Example 2 
import java.util.regex.*;
class RegExDemo
{
public static void main(String[] args)
{
Pattern p=Pattern.compile("[abc]");
Matcher m =p.matcher("a3b#k@9z");
while(m.find())
{
System.out.println(m.start()+"............"+m.group());
}
}
}
=====================================================================================================
Example 3
import java.util.regex.*;
class RegExDemo
{
public static void main(String[] args)
{
Pattern p=Pattern.compile("[^abc]");
Matcher m =p.matcher("a3b#k@9z");
while(m.find())
{
System.out.println(m.start()+"............"+m.group());
}
}
}
==========================================================================================================
Example 4
import java.util.regex.*;
class RegExDemo
{
public static void main(String[] args)
{
Pattern p=Pattern.compile("[a-z]");
Matcher m =p.matcher("a3b#k@9z");
while(m.find())
{
System.out.println(m.start()+"............"+m.group());
}
}
}
=========================================================================================================
Example 5
import java.util.regex.*;
class RegExDemo
{
public static void main(String[] args)
{
Pattern p=Pattern.compile("[0-9]");
Matcher m =p.matcher("a3b#k@9z");
while(m.find())
{
System.out.println(m.start()+"............"+m.group());
}
}
}
===============================================================================================
Example 6 
import java.util.regex.*;
class RegExDemo
{
public static void main(String[] args)
{
Pattern p=Pattern.compile("[a-zA-Z0-9]");
Matcher m =p.matcher("a3b#k@9z");
while(m.find())
{
System.out.println(m.start()+"............"+m.group());
}
}
}
========================================================================================================
Example 7
import java.util.regex.*;
class RegExDemo
{
public static void main(String[] args)
{
Pattern p=Pattern.compile("[^a-zA-Z0-9]");
Matcher m =p.matcher("a3b#k@9z");
while(m.find())
{
System.out.println(m.start()+"............"+m.group());
}
}
}
===============================================================================================
Example 8
import java.util.regex.*;
class RegExDemo
{
public static void main(String[] args)
{
Pattern p=Pattern.compile("[\\s]"); //it can also write as Pattern p=Pattern.compile("\\s");
Matcher m =p.matcher("a7b k@9z");
while(m.find())
{
System.out.println(m.start()+"............"+m.group());
}
}
}
======================================================================================================
Example 9
import java.util.regex.*;
class RegExDemo
{
public static void main(String[] args)
{
Pattern p=Pattern.compile("[\\S]");
Matcher m =p.matcher("a7b k@9z");
while(m.find())
{
System.out.println(m.start()+"............"+m.group());
}
}
}
=============================================================================================================
Example 10
import java.util.regex.*;
class RegExDemo
{
public static void main(String[] args)
{
Pattern p=Pattern.compile("[\\d]");
Matcher m =p.matcher("a7b k@9z");
while(m.find())
{
System.out.println(m.start()+"............"+m.group());
}
}
}
===============================================================================================================
Example 11
import java.util.regex.*;
class RegExDemo
{
public static void main(String[] args)
{
Pattern p=Pattern.compile("[\\D]"); //it can also write as Pattern p=Pattern.compile("\\D");
Matcher m =p.matcher("a7b k@9z");
while(m.find())
{
System.out.println(m.start()+"............"+m.group());
}
}
}
=========================================================================================================
Example 12
import java.util.regex.*;
class RegExDemo
{
public static void main(String[] args)
{
Pattern p=Pattern.compile("\\w");
Matcher m =p.matcher("a7b k@9z");
while(m.find())
{
System.out.println(m.start()+"............"+m.group());
}
}
}
====================================================================================================
Example 13 
import java.util.regex.*;
class RegExDemo
{
public static void main(String[] args)
{
Pattern p=Pattern.compile("\\W");
Matcher m =p.matcher("a7b k@9z");
while(m.find())
{
System.out.println(m.start()+"............"+m.group());
}
}
}
==================================================================================================
Example 14
import java.util.regex.*;
class RegExDemo
{
public static void main(String[] args)
{
Pattern p=Pattern.compile(".");
Matcher m =p.matcher("a7b k@9z");
while(m.find())
{
System.out.println(m.start()+"............"+m.group());
}
}
} 
=======================================================================================================
Example 15
import java.util.regex.*;
class RegExDemo
{
public static void main(String[] args)
{
Pattern p=Pattern.compile("a");
Matcher m =p.matcher("abaabaaab");
while(m.find())
{
System.out.println(m.start()+"............"+m.group());
}
}
} 
====================================================================================================
Example 16 
import java.util.regex.*;
class RegExDemo
{
public static void main(String[] args)
{
Pattern p=Pattern.compile("a+");
Matcher m =p.matcher("abaabaaab");
while(m.find())
{
System.out.println(m.start()+"............"+m.group());
}
}
} 
======================================================================================================
Example 17
import java.util.regex.*;
class RegExDemo
{
public static void main(String[] args)
{
Pattern p=Pattern.compile("a*");
Matcher m =p.matcher("abaabaaab");
while(m.find())
{
System.out.println(m.start()+"............"+m.group());
}
}
} 
=================================================================================================
Example 18 
import java.util.regex.*;
class RegExDemo
{
public static void main(String[] args)
{
Pattern p=Pattern.compile("a?");
Matcher m =p.matcher("abaabaaab");
while(m.find())
{
System.out.println(m.start()+"............"+m.group());
}
}
} 
====================================================================================================
Example 19 
//Pattern class split() 
import java.util.regex.*;
class RegExDemo
{
public static void main(String[] args)
{
Pattern p=Pattern.compile("\\s");
String[] s =p.split("Durga Software Solutions");
for(String s1:s)
{
	System.out.println(s1);
}
}
} 
===============================================================================================================
Example 20 
import java.util.regex.*;
class RegExDemo
{
public static void main(String[] args)
{
Pattern p=Pattern.compile("\\.");
String[] s =p.split("www.durgajobs.com");
for(String s1:s)
{
	System.out.println(s1);
}
}
} 
======================================================================================================
Example 21 
//String class split()
import java.util.regex.*;
class RegExDemo
{
public static void main(String[] args)
{
String s="Durga Software Solutions";
String[] s1 =s.split("\\s");
for(String s2:s1)
{
	System.out.println(s2);
}
}
}
===============================================================================================
Example 22 
//StringTokenizer
import java.util.regex.*;
class RegExDemo
{
public static void main(String[] args)
{
StringTokenizer st=new StringTokenizer("Durga Software Solutions");
//String[] s1 =s.split("\\s");
while(st.hasMoreToken())
{
	System.out.println(st.nextToken());
}
}
}
======================================================================================================
Example 23*/
//validation of Mobile number
import java.util.regex.*;
class RegExDemo
{
public static void main(String[] args)
{
Pattern p=Pattern.compile("(0/91)?[6-9][0-9]{9}");
Matcher m =p.matcher(args[0]);
if(m.find()&& (m.group().equals(args[0])))
{
System.out.println("Valid Mobile Number");
}
else{
	System.out.println("Invalid Mobile Number");
	
}
}
} 