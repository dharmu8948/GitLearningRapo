import java.util.*;
class SumOfComplex
{
	int real,img;
	SumOfComplex(double r,double i)
	{
       this.real =r;
       this.img = i;
	}
public static SumOfComplex sum(	SumOfComplex c1,SumOfComplex c2)
{
	SumOfComplex sum = new SumOfComplex(0,0);
	this.real = c1.real + c2.real;
	this.img = c1.img + c2.img;
	return sum;
}
public static void main(String[] args)
{
	SumOfComplex c1 = new SumOfComplex(5.5,4);
	SumOfComplex c2 = new SumOfComplex(1.5,2.5);
	SumOfComplex temp = sum(c1,c2);
	System.out.println("Sum is :   "+temp.real+"+"temp.img+"i");