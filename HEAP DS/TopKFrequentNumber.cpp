/*
******************  Top K Frequent Number using Heap in O(nlogk) time complexity   **********************
Enter the size of Array: 7
Enter the Element of Array..: 1
1
1
3
2
2
4
Enter the number of Top k Frequent Number 2
Top K Freaquent Number is : 2 1

*/

#include<bits\stdc++.h>
using namespace std;
void TopKFrequentNumber(int a[],int n,int k){
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minHeap;
	
	unordered_map<int,int> mp;
	for(int i=0;i<n;i++){
	mp[a[i]]++;
	}
	for(auto i=mp.begin();i!=mp.end();i++){
		minHeap.push({i->second,i->first});
		if(minHeap.size()>k)
		minHeap.pop();
	}
	cout<<"Top K Freaquent Number is : ";
	while(minHeap.size()>0){
		cout<<minHeap.top().second<<" ";
		minHeap.pop();
	}
	
	
}
int main(){
	int n,k;
	cout<<"Enter the size of Array: ";
	cin>>n;
	int a[n];
	cout<<"Enter the Element of Array..: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Enter the number of Top k Frequent Number ";
	cin>>k;
	TopKFrequentNumber(a,n,k);
}