#include<bits\stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int sum=0,count=0;
	while(n>0){
	if(n%10==6 && count==0){
		sum = sum*10 + 9;
		n = n/10;
		count++;
	}else{
		sum = sum*10 + n%10;
		n = n/10; 
	}	
	}
	
	cout<<sum<<endl;
}