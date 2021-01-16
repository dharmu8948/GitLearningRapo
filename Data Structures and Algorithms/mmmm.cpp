#include<stdio.h>
main()
{
	int num,i,j;
	scanf("%d",&num);
	int a[num];
	for(i=0;i<num;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<num;i++){
		if(a[i]>=38){
			j=(a[i]/5 +1)*5;
		    if((j-a[i])<3)
			printf("%d\n",j);
			else
			printf("%d\n",a[i]);
		}
		else
		printf("%d\n",a[i]);
	}
}
