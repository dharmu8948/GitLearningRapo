
//*******************************************************************************/
// sliding window problem
// Maximum Sum Subarray of Size K || Sliding Window
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findMaxOfWindowSizeK(int a[],int n,int k){
    int i=0,j=0,sum=0,mx = INT_MIN;
    while(j<n){
        sum = sum +a[j];
        if((j-i+1)<k){
             j++;
        }
      
        else if((j-i+1)==k){
           mx = max(mx,sum);
           sum = sum -a[i];
           j++;
           i++;
        }
        
    }
    return mx;
}

int main()
{
    int n,win_size;
    cin>>n>>win_size;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int result = findMaxOfWindowSizeK(a,n,win_size);
    cout<<"Sum of MAximum subarray is: "<<result<<endl;
    return 0;
}
