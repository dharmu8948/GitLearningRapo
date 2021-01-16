#include <bits/stdc++.h>
using namespace std;
int cnt=0;
void dfs(int i,vector<vector<int>> &graph,vector<int>&visited)
{
        visited[i]=1;
        cnt++;
        for(auto x:graph[i])
        {
                if(visited[x]==1)
                    continue;
                dfs(x,graph,visited);
        }

}
int main()
{
  int n;
  cin>>n;
  vector<vector<int>>graph(n);
  int e;
  cin>>e;
  for(int i=1;i<=e;i++)
  {
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
        
  }
  long long ans=0;
  vector<int>visited(n);
    vector<long long>temp;
  for(int i=0;i<n;i++)
  {
        if(visited[i]==1)
            continue;
        dfs(i,graph,visited);
        temp.push_back(cnt);
        cnt=0;
  }
  long long sum=0;
  for(auto x:temp)
        sum+=x;
  int n1=temp.size();
  for(int i=0;i<n1-1;i++)
  {
        sum-=temp[i];
        ans+=temp[i]*sum;
 }     
  cout<<ans;
  return 0;
}
