/*
//                    using array
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int m,n,x,y,i,j;
	cin>>n>>m;
	int a[n][m];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
		a[i][j]=0;
	}
	
	for(i=1;i<=m;i++){
		cin>>x>>y;
		a[x][y]=1;
		// undirected graph
		// a[y][x]=1 also
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
		cout<<a[i][j]<<" ";
		cout<<"\n";
	}
	
}

*/

//                                      using adjacancy list(vector in cpp)

//  in less time complexity
#include<iostream>
#include<vector>
using namespace std;
vector <int> v[5];
int main(){
	int n,m,x,y,i,j;
	cin>>n>>m;
	for(i=1;i<=n;i++){
		cin>>x>>y;
		v[x].push_back(y);
		// for undirected graph
		// v[y].push_back(x) also
	}
	for(i=0;i<n;i++){
		cout<<i<<"->";
		for(j=0;j<v[i].size();j++){
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
}
