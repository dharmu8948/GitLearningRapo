class ArrayTest1
{
public static void main(String[] args)
{
byte x=20;
int[] t=new int[x];
short y=39;
int[] l=new int[y];
//int[] a=new int[];
int[] b=new int[6];
int[] c=new int[0];
//int[] d=new int[-7];  negative array size exception
int[] e=new int[10];
int[] f=new int['a'];
//int[] g=new int[10l];  c.e.=p.l.p. found:long required:int
//int[] h=new int[2147483647];
//int[] i=new int[2147483648];  integer number too large
//System.out.println(a);
System.out.println(b);
System.out.println(c);
//System.out.println(d);
System.out.println(e);
System.out.println(f);
System.out.println(t);
System.out.println(l);
//System.out.println(g);
//System.out.println(h);
//ystem.out.println(i);
}
}