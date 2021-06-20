/*
******************  K closest Number using Heap in O(nlogk) time complexity   **********************
Enter the size of Array: 5
Enter the Element of Array..: 5
6
7
8
9
Enter the value of X: 7
Enter the number of k closest Number of X 3
K Closest Number is: 8 6 7

*/

#include<bits\stdc++.h>
using namespace std;
void KClosestToX(int a[],int n,int k,int X){
	priority_queue<pair<int,int>> maxHeap;
	cout<<"K Closest Number is: ";
	for(int i=0;i<n;i++){
		maxHeap.push({abs(a[i]-X),a[i]});
		if(maxHeap.size()>k){
			maxHeap.pop();
		}
	}
	while(maxHeap.size()>0){
		cout<<maxHeap.top().second<<" ";
		maxHeap.pop();
	}
	
}
int main(){
	int n,k,X;
	cout<<"Enter the size of Array: ";
	cin>>n;
	int a[n];
	cout<<"Enter the Element of Array..: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Enter the value of X: ";
	cin>>X;
	cout<<"Enter the number of k closest Number of X ";
	cin>>k;
	KClosestToX(a,n,k,X);
}