#include<bits/stdc++.h>
#define ll long long int
using namespace std;	

int main(){
		string str;
		map<char,int>mp;
		getline(cin,str);
		for(ll i=0;i<str.size();i++){
			mp[str[i]]++;
		}
		ll max=INT_MIN;
		char ans;
		for(auto m:mp){
			if(m.second>max){
				ans=m.first;
				max=m.second;
			}
		}

		cout<<ans<<" "<<max<<endl;
}
	
