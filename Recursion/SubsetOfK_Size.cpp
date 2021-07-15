#include<bits/stdc++.h>
#define ll long long int
using namespace std;

vector<vector<int>>ans;

void print(vector<int>temp){
	for(int i=0;i<temp.size();i++){
		cout<<temp[i]<<" ";
	}
	cout<<endl;
}
void solve(vector<int>a,int i,int k,vector<int>temp){
	if(temp.size()==k){
		print(temp);
		return ;
	}
	for(int j=i;j<a.size();j++){
		temp.push_back(a[j]);
		solve(a,j+1,k,temp);
		temp.pop_back();
	}
}
int main(){
	int n;cin>>n;
	int k;cin>>k;
	vector<int>a,temp;
	for(int i=1;i<=n;i++){
		int j;cin>>j;
		a.push_back(j);
	}
	solve(a,0,k,temp);
	
}
