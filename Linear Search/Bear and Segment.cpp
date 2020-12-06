#include<bits/stdc++.h>
#define ll long long int
using namespace std;	

int main(){
	ll t;cin>>t;while(t--){
		string str,s;cin>>str;
		int b=0;
		for(ll i=0;i<str.size();i++){
			if(str[i]=='1'){
				b=1;
			}
			if(b==1){
				s+=str[i];
			}
		}
		b=0;
		string l;
		for(ll i=s.size()-1;i>=0;i--){
			if(s[i]=='1'){
				b=1;
			}
			if(b==1){
				l+=s[i];
			}
		}
		int y=0;
		if(l.size()==0){
			cout<<"NO"<<endl;
			continue;
		}
		for(ll i=0;i<l.size();i++){
			if(l[i]=='0'){
				y=1;
			}
		}
		if(y==1) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
}
