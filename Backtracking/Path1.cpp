#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int cnt=0;
void solve(int i,int j,int n,int m,vector<vector<int>>arr,string ans){
	
	if(i==n-1 and j==m-1){
		cnt++;
		return ;
	}
	if(i>n-1 or j>m-1) return;
	if(arr[i][j]==1) return ;
	
	solve(i+1,j,n,m,arr,ans+"D");
	solve(i,j+1,n,m,arr,ans+"R");
	
}

int main(){
	int n,m;cin>>n>>m;
	vector<vector<int>>arr;
	for(int i=0;i<n;i++){
		vector<int>a;
		for(int j=0;j<m;j++){
			int k;cin>>k;
			a.push_back(k);
		}
		arr.push_back(a);
	}
	solve(0,0,n,m,arr,"");	
	cout<<cnt<<endl;
}
