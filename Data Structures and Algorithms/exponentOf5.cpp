#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n;
	cin>>n;
	int sum=0,flag=0,res=1,i;

int k=n;
if(n<=99)
i=n/5;
else if(n>99 && n<=999)
i=n/25;
else if(n>999 && n<=9999)
i=n/125;
else if(n>9999 && n<=99999)
i=n/625;
else
i=n/3125;
	for(;i>=0;i--){
		res=pow(5,i);
		if(res>n)
		continue;
		else{
		sum = sum + res;
		if(sum==k){
			flag=1;
			cout<<"PASSED";
			break;
		}
		if(sum>k)
		sum = sum-res;
	}
	}
	if(flag==0)
	cout<<"FAILED";
	
}

/*


Test Number Output
31            PASSED
26            PASSED
130           PASSED
35            FAILED

394376        FAILED
421875        FAILED
390625        PASSED
781250        FAILED
484377        FAILED   

*/ 
