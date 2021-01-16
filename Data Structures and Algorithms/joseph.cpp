#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int JosephProb(int n,int k){
	if(n==1)
	return n;
	return (JosephProb(n-1,k)+k-1)%n+1;
}
int main(){
	int n,k;
	cin>>n>>k;
	int res = JosephProb(n,k);
	cout<<res<<endl;
	return 0;
}

