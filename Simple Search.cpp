#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll n;cin>>n;
	vector<ll>a;
	for(ll i=0;i<n;i++){
		ll k;cin>>k;a.push_back(k);
	}
	ll k;cin>>k;
	ll ans;
	for(ll i=0;i<n;i++){
		if(a[i]==k){
			ans=i;
			break;
		}
	}
	cout<<ans<<endl;
}
