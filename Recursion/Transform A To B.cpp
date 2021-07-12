#include<bits/stdc++.h>
#define ll long long int
using namespace std;

vector<ll>ans;
int m=INT_MAX;

void solve(ll a,ll b,vector<ll>t){
	if(a>=b){
		if(a==b){
			if(t.size()<m){
				m=t.size();
				ans=t;
			}
		}
		return ;
	}
	t.push_back(a*2);
	solve(a*2,b,t);
	t.pop_back();
	t.push_back(a*10+1);
	solve(a*10+1,b,t);
}

int main(){
	ll a,b;cin>>a>>b;
	vector<ll>t;
	solve(a,b,t);
	if(ans.size()==0){
		cout<<"NO"<<endl;
	}
	else{
		cout<<"YES"<<endl;
		cout<<m+1<<endl;
		cout<<a<<" ";
		for(int i=0;i<ans.size();i++){
			cout<<ans[i]<<" ";
		}
	}
}
