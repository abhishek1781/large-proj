#include<iostream>
#include<cstdlib>
using namespace std;
struct node{
	int data;
	struct node* next;
};
struct node* start=NULL;
struct node* create(int d){
	struct node* temp;
	temp=new(struct node);
	temp->data=d;
	temp->next=NULL;
	if(start==NULL){
		start=temp;
	}
	else
	{
		struct node* temp1=start;
		while(temp1->next!=NULL)
		temp1=temp1->next;
		temp1->next=temp;
	}
	return temp;
}
void mid(){
	struct node *p,*q;
	p=start;
	q=start;
	while(p->next!=NULL)
	{
	p=p->next;
	if(p==NULL)
	break;
	p=p->next;
	if(p==NULL)
	break;
	q=q->next;
	}	
	printf("%d",q->data);
}
int main(){
	int n,a;
	cout<<"plz enter size";
	cin>>n;
	cout<<"plz enter numbers";
	while(n--){
		cin>>a;
		create(a);		
	}
	mid();
	}
