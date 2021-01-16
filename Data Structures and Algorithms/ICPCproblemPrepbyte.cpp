#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
long long int ans = 1;
void solve(long long int v,long long int val,long long int cur){
	//cout << v << " " << val << " " << cur << "\n";
	if(!v) val%=mod,cur%=mod,ans *= val,ans %= mod,ans *= cur,ans %= mod;
	else{
		long long int ncur = 0;
		ncur = cur*10 + (v%10);
		int vf = (v%10);
		v /= 10;
		if(cur)
		solve(v,val*cur,vf);
		solve(v,val,ncur);
	}
}

int main() {
	int t;
	cin >> t;
	while(t--){
		long long int f;
		cin >> f;
		ans = 1;
		long long int z = 0;
		while(f) z *= 10,z += (f%10),f /= 10;
		solve(z,1,0);
		cout << ans << "\n";
	}
	return 0;
}
