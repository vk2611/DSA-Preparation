#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main(){
	int n,sum;cin>>n>>sum;
	vector<int>a;
	for(int i=0;i<n;i++){
		int t;cin>>t;
		a.push_back(t);
	}
	int f=0;
	sort(a.begin(),a.end());
	for(int i=0;i<n;i++){
		int t=sum-a[i];
		if(binary_search(a.begin()+i,a.end(),t)==true){
			f=1;
			cout<<"found"<<endl;
			break;
		}
	}
	if(!f){
		cout<<"Not found"<<endl;
	}
	
}
