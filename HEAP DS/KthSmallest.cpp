/*
***************************        Kth smallest using Heap in O(nlogk) time complexity   **********************
*/

#include<bits\stdc++.h>
using namespace std;
int kthLargest(int a[],int n,int k){
	priority_queue<int> maxHeap;
	for(int i=0;i<n;i++){
		maxHeap.push(a[i]);
		if(maxHeap.size()>k){
			maxHeap.pop();
		}
	}
	return maxHeap.top();
	
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
	cout<<"Enter the kth Smallest Number:";
	cin>>k;
	int result = kthLargest(a,n,k);
	cout<<"kth Smallest Number is "<<result<<endl;
	
}