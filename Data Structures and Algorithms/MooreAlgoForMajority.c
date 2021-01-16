#include<stdio.h>
int main(){
	int n;
	printf("Enter the no. of Elements..: ");
	scanf("%d",&n);
	int i,a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	int major=0, count=1;
	for(i=1;i<n;i++){
		if(a[major]==a[i])
		count++;
		else
		count--;
		if(count==0){
			major=i;
			count=1;
		}
	}
	count=0;
	for(i=0;i<n;i++){
		if(a[major]==a[i])
		count++;
	}
	if(count>n/2)
	printf("Majority Element is:  %d",a[major]);
	else
	printf("No majority elements existed.");
}
