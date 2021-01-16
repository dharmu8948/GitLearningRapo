#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
int maxSlidingWindow(int [],int ,int);
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	//window size
	int k;
	cin>>k;
	int res=maxSlidingWndow(a,n,k);
	cout<<res<<endl;
}
int maxSlidingWindow(int arr[],int n,int k){
	int i=0,j=0,sum=0;
	int maximum=INT_MIN;
	while(j<n){
		sum=sum+a[j];
		if((j-i+1)<k)
		j++;
		if((j-i+1)==k){
			maximum = max(maximum,sum);
			sum = sum-a[i];
			j++;
			i++;
		}
	}
	return maximum;
} 
