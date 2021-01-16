#include<iostream>
using namespace std;
#include<vector>
#include<queue>
vector <int> v[5];
int visited[5];
void bfs(int source);
int main(){
	int n,m,x,y,i;
	cin>>n>>m;
	for(i=1;i<=m;i++){
		cin>>x>>y;
		v[x].push_back(y);
	}
//	for(i=0;i<n;i++){
		for(i=0;i<n;i++){
			if(visited[i]==0)
			bfs(i);
		}
//	}
}
void bfs(int source){
	int i;
	queue<int> q;
	q.push(source);
	visited[source]=1;
	while(!q.empty()){
		//what is the front of queue
		int current = q.front();
		q.pop();
		cout<<current<<" ";
		for(i=0;i<v[current].size();i++){
			int child = v[current][i];
			//child = 2
			if(visited[child]==0){
				q.push(child);
				visited[child]=1;
			}
		}
	}
	cout<<endl;
}
