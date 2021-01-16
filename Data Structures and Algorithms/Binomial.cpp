#include<iostream>
using namespace std;
int binomial(int n,int k){
	if(k>n)
	return 0;
	if(k==0||n==0)
	return 1;
	return binomial(n-1,k-1)+binomial(n-1,k);
}
int main(){
	int n,k;
	cin>>n>>k;
	cout<<"Value of C("<<n<<","<<k<<") is: "<<binomial(n,k);
}
