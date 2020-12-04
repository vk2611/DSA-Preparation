#include<bits/stdc++.h>
#define ll long long int
using namespace std;	

int main(){
	ll n;cin>>n;
	vector<ll>a;
	ll s=0,cnt=0;
	for(ll i=0;i<n;i++){
		ll k;cin>>k;a.push_back(k);
	}
	ll max=INT_MIN;
	sort(a.begin(),a.end(),greater<int>());
	for(ll i=0;i<n;i++){
		s+=a[i];
		if(s>=max){
			max=s;
			cnt++;
		}
	}
	cout<<max<<" "<<cnt<<endl; 
}
