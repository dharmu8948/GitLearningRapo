typedef long double ld;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define N 2005
#define shreyans ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll fastpow(ll n,ll r){
	if(r==0)return 1;
	if(r==1)return n;
	ll hr=fastpow(n,r/2);
	if(r&1)return (((hr*hr))*n);
	else return (hr*hr);
}
ll inv(ll n){return fastpow(n,mod-2);}
ll multmod(ll n, ll m){
	return ((n%mod)*(m%mod))%mod;
}
ll addmod(ll n, ll m){
	return ((n%mod)+(m%mod))%mod;
}
ll submod(ll n, ll m){
	return ((n%mod)-(m%mod) + mod)%mod;
}
ll divmod(ll n, ll m){
	ll deno = inv(m);
	return multmod(n,deno);
}
ll StoI(string s){
	stringstream shrey(s);
	ll x=0;
	shrey >> x;
	return x;
}
string ItoS(ll n){
	stringstream shrey;
	shrey << n;
	string ans;
	shrey >> ans;
	return ans;
} 
ll pr[1000010];
void prime(){
	pr[0]=1;pr[1]=1;
	for(ll i=2;i<=sqrt(1000010);i++){
		for(ll j=2*i;j<=1000010;j+=i){
			pr[j]=1;
		}
	}
}
ll a[10000005];
int main(){
	//shreyans
	
	
	ll t;cin>>t;
	while(t--){
		ll n;cin>>n;
		for(ll i=0;i<n;i++)cin>>a[i];
		ll l,r;cin>>l>>r;
		//multimap<ll,ll>m;
		ll k=0,ans=0,cnt=0;
		for(ll i=0;i<n;i++){
			if(i<=cnt && i!=0){
				if(i>l && i<=r){
					ll d = a[i];
					ll bits = __builtin_popcount(d);
					d = d | fastpow(2,bits);
					//cout<<a[i]<<" "<<d<<" "<<k<< "\n"; 
					ans = ans xor d;
				}
				continue;
			}
			ans = ans xor a[i];
			ll c = fastpow(2,k);
			cnt = i+c;
			k++;
		}
		cout<<ans<<"\n";			
	}	
	return 0;
}
