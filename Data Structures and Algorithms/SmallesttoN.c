#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[20];
	int i=0,j,k;
	for(k=0;k<20;k++)
	a[k]=-1;
	while(n>0 ){
	 a[i++]=n%10;
	 n /= 10;	
	}
	int l=0;
	for(i=0;i<n;i++)
	if(a[i]!=-1)
	l++;
	else
	break;
	printf("%d",l);
	for(i=0,j=l-1;i<l/2;i++,j--){
		if(a[i]!=-1){
		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}else
	break;
	}
	for(i=1;i<l;i++){
		for(j=1;j<l-i-1;j++){
			if(a[j]>a[j+1] &&a[i]!=-1){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	int temp = a[1];
	a[1] = a[2];
	a[2] = temp;
	for(i=0;i<l;i++)
	if(i!=-1)
	printf("%d",a[i]);
	else
	break;
}
