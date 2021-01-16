#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i,a[n],j,count;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++){
		count=1;
		if(a[i]!=-1){
			for(j=i+1;j<n;j++){
				if(a[i]==a[j]){
					count++;
					a[j]=-1;
				}
			}
			if(count>1)
			printf("%d %d\n",a[i],count);
		}
	}
}
