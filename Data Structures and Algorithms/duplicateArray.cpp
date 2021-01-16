/*

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int i;
	for(i=0;i<n-1;i++){
		if(a[i]==a[i+1])
		i++;
		else
		cout<<a[i]<<" ";
	}
	if(i==n-1 && a[n-2]!=a[n-1])
	cout<<a[n-1]<<endl;
}

*/

// using priority_queue
#include<bits/stdc++.h>
#include<queue>
#include<iostream>
void distinct(int a[],int n){
	priority_queue<int ,vector<int>,greatest<int>> minH;
	for(int i=0;i<n;i++)
	minH.push(a[i]);
	while(minH.size()>0){
		int p = minH.top();
	    minH.pop();
		if(p!=minH.top())
		cout<<p<<" ";
		minH.pop();
	}
}
using namespace std;
int main(){
		int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	distinct(a,n);
	
}

