class CharTest
{
public static void main(String[] args)
{
char ch='a';
char c=97;
char d=0XFace;
char e=0777;
char f=65535;
//char g=65536;  out of range
//char h='ab';
//char i=a;
//char j="d";
//char k='\40061';
char l='\n';
char m='\t';
//char n='\m';  illigel escape character
//char o='\4xxxx';
char p='\ubeef';
//char q=0XBeer;  // r is out of range
//char t='';   compile time error ==========>>>character has at least(or at most) single space/letter/digit 
char v=' ';
System.out.println(ch);
System.out.println(c);
System.out.println(d);
System.out.println(e);
System.out.println(f);
//System.out.println(g);
//System.out.println(h);
//System.out.println(i);
//System.out.println(j);
//System.out.println(k);
System.out.println(l);
System.out.println(m);
//System.out.println(n);
//System.out.println(o);
System.out.println(p);
//System.out.println(q);
System.out.println(v);
}
}

