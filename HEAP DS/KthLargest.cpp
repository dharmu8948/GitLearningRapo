/*
***************************        Kth largest using Heap in O(nlogk) time complexity   **********************
*/

#include<bits\stdc++.h>
using namespace std;
int kthLargest(int a[],int n,int k){
	priority_queue<int,vector<int>,greater<int>> minHeap;
	for(int i=0;i<n;i++){
		minHeap.push(a[i]);
		if(minHeap.size()>k){
			minHeap.pop();
		}
	}
	return minHeap.top();
	
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
	cout<<"Enter the kth Largest Number:";
	cin>>k;
	int result = kthLargest(a,n,k);
	cout<<"kth Largest Number is "<<result<<endl;
	
}