class Foreachloop
{
public static void main(String[] args)
{
int[] x={10,20,30,40};
for(int x1:x)
{
System.out.println(x1);
}
}
}
========================================================================================================================================
class Foreachloop
{
public static void main(String[] args)
{
int[][] x={{10,20,30},{40,50}};
for(int[] x1:x)
{
for(int x2:x1)
{
System.out.println(x2);
}
}
}
}
========================================================================================================================================
class Foreachloop
{
public static void main(String[] args)
{
int[] x={{10,20},{30,40},{50,60},{70,80}};
for(int[][] x1:x)
{
for(int[] x2:x1)
{
for(int x3:x2)
{
System.out.println(x3);
}
}
}
}
}
========================================================================================================================================
class Foreachloop
{
public static void main(String[] args)
{
int[] x={10,20,30,40,50};
for(int i=x.length-1;i>=0;i--)
{
System.out.println(x[i]);
}
}
}
