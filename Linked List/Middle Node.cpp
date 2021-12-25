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
	while(n--){
		ll val;cin>>val;
		Node *t=new Node();
		t->data=val;
		if(!head){
			head=t;
			tail=t;
		}
		else{
			tail->next=t;
			tail=tail->next;
		}	
	}
	Node *m=head;
	Node *p=head;
	while(m and m->next){
		p=p->next;
		m=m->next->next;		
	}
	cout<<p->data;
}
