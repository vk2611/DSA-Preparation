#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int cnt=0;
bool isSafe(int i,int j,vector<vector<int>>arr,int n){
	//upward
	int x=i-1;
	while(x>=0){
		if(arr[x][j]==1) return false;
		x--;
	}
	x=i-1;
	int y=j-1;
	while(x>=0 and y>=0){
		if(arr[x][y]==1) return false;
		x--;
		y--;
	}
	x=i-1;
	y=j+1;
	while(x>=0 and y<n){
		if(arr[x][y]==1) return false;
		x--;
		y++;
	}
	return true;
}
void print(vector<vector<int>>arr){
	for(int i=0;i<arr.size();i++){
		for(int j=0;j<arr[i].size();j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
void solve(int r,vector<vector<int>>&arr,int n){
	if(r==n){
		cnt++;
		print(arr);
		cout<<endl;
		return ;
	}
	
	for(int c=0;c<n;c++){
		if(isSafe(r,c,arr,n)==true){
			arr[r][c]=1;
			solve(r+1,arr,n);
			arr[r][c]=0;
		}
	}
	
}
int main(){
	int n;cin>>n;
	vector<vector<int>>arr(n,vector<int>(n,0));
	solve(0,arr,n);
	if(cnt==0) cout<<"No Solution Exist"<<endl;
	else {
		cout<<"No of Solution for n "<<n<<":-"<<cnt<<endl;
	}
}
