/*
******************  nearly sorted array or sort K sorted array using Heap in O(nlogk) time complexity   **********************
*/

#include<bits\stdc++.h>
using namespace std;
void NearlySortedArray(int a[],int n,int k){
	priority_queue<int,vector<int>,greater<int>> minHeap;
	cout<<"Nearly Sorted Array or K Sorted Array is: ";
	for(int i=0;i<n;i++){
		minHeap.push(a[i]);
		if(minHeap.size()>k){
			cout<<minHeap.top()<<" ";
			minHeap.pop();
		}
	}
	while(minHeap.size()>0){
		cout<<minHeap.top()<<" ";
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
	cout<<"Enter the index of k sorted array: ";
	cin>>k;
	NearlySortedArray(a,n,k);
}