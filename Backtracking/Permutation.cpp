#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(string str,int i){
	if(i==str.size()){
		cout<<str<<endl;
		return ;
	}
	for(int j=i;j<str.size();j++){
		swap(str[i],str[j]);
		solve(str,i+1);
		swap(str[i],str[j]);
	}
}

int main(){
	string str;
	cin>>str;
	solve(str,0);
}
