#include<iostream>
#include<algorithm>
int a[4][4];
using namespace std;
int main(){
int n,m,x,y;
//   n node and m edge

cin>>n>>m;
for(int i=1;i<=m;i++){
	cin>>x>>y;
	a[x][y]=1;
}
for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
		cout<<a[i][j]<<" ";
	}
	cout<<endl;
}

}

