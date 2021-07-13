#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int solve(vector<int>a,int l,int r){
	if(l==r){
		return a[l];
	}
	int m=(l+r)/2;
	int x=solve(a,0,m);
	int y=solve(a,m+1,r);
	return max(x,y);	
}

int findMaxInArray(vector<int>a){
	return solve(a,0,a.size());
}

int main(){
	int n;cin>>n;
	vector<int>a;
	for(int i=0;i<n;i++){
		int k;cin>>k;
		a.push_back(k);
	}
	cout<<findMaxInArray(a)<<endl;
}
