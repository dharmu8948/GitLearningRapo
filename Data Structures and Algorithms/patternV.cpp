#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
  //write your code here
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
    int k=i;
    for(int j=1;j<2*n;j++){
      if(j<=i||j>=2*n-i)
      {if(j<n)
      cout<<j;
      else
        cout<<k--;
      }
       else
    cout<<" ";
    }
    cout<<"\n";
  }
  
  return 0;
}
