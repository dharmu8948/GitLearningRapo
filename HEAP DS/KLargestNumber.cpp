/*
***************************        K largest in array using Heap in O(nlogk) time complexity   **********************
*/

#include<bits\stdc++.h>
using namespace std;
void kLargestArray(int a[],int n,int k){
	priority_queue<int,vector<int>,greater<int>> minHeap;
	for(int i=0;i<n;i++){
		minHeap.push(a[i]);
		if(minHeap.size()>k){
			minHeap.pop();
		}
	}
	cout<<"K Largest Elements is:  ";
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
	cout<<"Enter the number of k Largest Number:";
	cin>>k;
	kLargestArray(a,n,k);
}