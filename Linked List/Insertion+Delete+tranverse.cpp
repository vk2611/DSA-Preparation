
#include<bits/stdc++.h>
#define ll long long int
using namespace std;


struct Node{
	int data;
	Node *next;
};
int main(){
	int n;cin>>n;
	Node *head=NULL;
	Node *tail=NULL;
	for(int i=0;i<n;i++){
		ll val;cin>>val;
		Node *t=new Node();
		t->data=val;
		if(head==NULL){
			head=t;
			tail=t;
		}
		else{
			tail->next=t;
			tail=tail->next;
		}
	}
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
	
}
