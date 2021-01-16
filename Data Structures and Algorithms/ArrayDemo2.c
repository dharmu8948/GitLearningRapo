/*
#include<stdio.h>
main()
{
	int i,size=5,arr[size];
	for(i=0;i<size;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<size;i++)
	printf("%d ",arr[i]);
}
======================================================================

#include<stdio.h>
int main(){
	int arr[4]={2,4,8,16},i=4,j=0;
	while(i)
	{
		j=arr[i]+i;
		i--;
	//	printf("j=%d\n",j);
	}
	printf("j=%d\n",j);
}
=========================================================================

#include<stdio.h>
int main(){
	int arr[4]={4,2,6,0,5,10},i=0,sum=0;
	while(arr[i])
	{
		sum=sum+arr[i];
		i++;
	}
	printf("sum=%d\n",sum);  //12
}
=========================================================================

#include<stdio.h>
void func(int arr[]);
int main()
{
	int arr[5]={5,10,15,20,25};
	func(arr);
}
void func(int arr[])
{
	int i=5,sum=0;
	while(i>2)
	{
		sum = sum + arr[--i];
	}
		printf("sum=%d\n",sum);   //60
}
==========================================================================

main()
{
	int i,arr[5]={25,30,35,40,45},*p;
	p=arr;
	for(i=0;i<5;i++)
	printf("%d\t%d\t",*(p+i),p[i]);
}
=======================================================================
*/
main()
{
	int i,arr[5]={89,30,35,40,45};
	for(i=0;i<5;i++)
	printf("%d   ",*arr);
}
