// reverse the Stack using Recursion.
#include<bits/stdc++.h>
#define ll long long int
using namespace std;


void bp(stack<int>&a,int x){
	if(a.empty()){
		a.push(x);
		return ;
	}
	int ans=a.top();
	a.pop();
	bp(a,x);
	a.push(ans);
}
void solve(stack<int>&a){
	if(a.empty()) return;
	
	int x=a.top();
	a.pop();
	solve(a);
	bp(a,x);
}
void print(stack<int>a){
	while(!a.empty()){
		int x=a.top();
		cout<<x<<" ";
		a.pop();
	}
	cout<<endl;
}
int main(){
	stack<int>t;;
	for(int i=0;i<10;i++){
		t.push(i);
	}
	print(t);
	solve(t);
	print(t);
}
