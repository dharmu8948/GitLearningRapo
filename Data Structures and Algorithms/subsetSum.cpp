/*

#include<iostream>
#include<algorithm>
bool subsetSum(int [],int,int);
using namespace std;
//int DP[101][101];
//memeset(DP,-1,sizeof(DP));
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int sum ;
	cin>>sum;
	bool res = subsetSum(a,sum,n);
	if(res)
	cout<<"Subset Sum Existed"<<endl;
	else
	cout<<"Subset Sum not Existed"<<endl;
}
bool subsetSum(int a[],int s,int n){
	if(s==0)
	return 1;
	if(a[n-1]<=s)
	return subsetSum(a,s-a[n-1],n-1)||subsetSum(a,s,n-1);
	return subsetSum(a,s,n-1);
}
*/


//  Tbulaton method

#include<iostream>
#include <cstring>
#include<algorithm>
bool subsetSum(int [],int,int);
using namespace std;
int DP[101][101];
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int sum ;
	cin>>sum;
	bool res = subsetSum(a,sum,n);
	if(res)
	cout<<"Subset Sum Existed"<<endl;
	else
	cout<<"Subset Sum not Existed"<<endl;
}
bool subsetSum(int a[],int s,int n){
	memset(DP,-1,sizeof(DP));
	if(s==0)
	return 1;
	if(DP[n][s]!=-1)
	return DP[n][s];
	if(a[n-1]<=s)
	return DP[n][s]=subsetSum(a,s-a[n-1],n-1)||subsetSum(a,s,n-1);
	return DP[n][s]=subsetSum(a,s,n-1);
}
