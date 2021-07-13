#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int solve(int a,int b){
	if(b==1) return a;
	if(b%2==0){
		int t=solve(a,b/2);
		return t*t;	
	}
	else{
		int t=solve(a,b/2);
		return t*t*a;
	}
}
int main(){
	int a,b;cin>>a>>b;
	cout<<solve(a,b);
}
