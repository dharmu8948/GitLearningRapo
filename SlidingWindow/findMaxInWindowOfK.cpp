
#include <iostream>
#include<bits/stdc++.h>

using namespace std;
void findMAx(int arr[],int n,int k){
    std::list<int> l;
    vector<int> ans;
    int i=0,j=0,mx = INT_MIN;
    while(j<n){
        while(l.size()>0 && l.back()<arr[j])
        l.pop_back();
        l.push_back(arr[j]);
        
        if((j-i+1)<k)
        j++;
        if((j-i+1)==k){
            ans.push_back(l.front());
            if(l.front()==arr[i])
            l.pop_front();
            i++;
            j++;
        }
    }
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
}

int main()
{
    std::vector<int> v;
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    findMAx(a,n,k);
}
