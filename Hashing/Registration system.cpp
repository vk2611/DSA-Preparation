#include<bits/stdc++.h>
#define ll long long int
using namespace std;	

int main(){
	map<string,int>mp;
	ll t;cin>>t;
	while(t--){
		string str;cin>>str;
		if(mp[str]!=0){
			mp[str]++;
			cout<<str<<mp[str]-1<<endl;
		}
		else{
			mp[str]=1;
			cout<<"OK"<<endl;
		}
		
	}	
}
