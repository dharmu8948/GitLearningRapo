#include<stdio.h>
void swapElements(int a[], int n);
int main()
{
	int n,i,a[20];
/*	printf("Enter the number of array");
	scanf("%d",&n);
	printf("Enter the Elements:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	swapElements(a[20],n);
	for(i=0;i<n;i++)
	printf("%d",a[i]);  */
	cin<<n;
	for(i=0;i<n;i++)
	cin<<a[i];
	swapElements(a[20],n);
	for(i=0;i<n;i++)
	cout<<a[i];
	
}
void swapElements(int a[], int n){
	int i;
    for(i=0;i<n-2;i++)
    {
        swap(a[i],a[i+2]);
    }
}
