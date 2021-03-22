/*Implement an algorithm to find the kth to last element of a singly linked list*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *next;
};
void printList(Node *head){
	Node *ptr=head;
	while(ptr){
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
	cout<<endl;
}
/*1 2 3 1 2 2*/
void kthToLast(Node* head,int k){
	/*1st approach: find n,length of LL then move n-k pointers | TIME:O(n) | SPACE:O(1)*/
	Node *ptr=head;
	if(k==0){
		printList(head);
	}
	if(k<0){
		cout<<"k value underflow! "<<endl;
	}
	else{
		while(k>0){
		cout<<ptr->data<<" ";
		ptr=ptr->next;
		k--;
	}
	cout<<"kth element in list: "<<ptr->data<<endl;
	}
}
/*2nd approach: two pointer approach*/
void kthToLastIterative(Node* head,int k){
	/*pointer 1 & 2*/
	Node *p1=head;
	Node *p2=head;
	for(int i=0;i<k;i++){
		if(p1==NULL){
			cout<<"Pointer is null!";
		}
		p1=p1->next;
	}
	while(p1!=NULL){
		p1=p1->next;
		p2=p2->next;
		//cout<<p2->data<<" ";
	}
	cout<<endl;
	//cout<<p2->data<<endl;
	cout<<"kth to last element: "<<p2->data<<endl;
}
/*3rd approach
void kthToLastRecursive(Node* head,int k){
	
}*/
int main(){
	int k=4;
	
	Node *head=NULL;
	Node *second=NULL;
	Node *third=NULL;
	Node *fourth=NULL;
	Node *fifth=NULL;
	Node *sixth=NULL;
	
	head = new Node();
	second = new Node();
	third = new Node();
	fourth = new Node();
	fifth = new Node();
	sixth = new Node();
	
	head->data=1;
	head->next=second;
	
	second->data=2;
	second->next=third;
	
	third->data=3;
	third->next=fourth;
	
	fourth->data=1;
	fourth->next=fifth;
	
	fifth->data=2;
	fifth->next=sixth;
	
	sixth->data=2;
	sixth->next=NULL;
	
	printList(head);
	
	int len=0;
	Node *ptr=head;
	while(ptr!=NULL){
		len=len+1;
		ptr=ptr->next;
	}
	/*6-3=3*/
	int pos=len-k;
	//kthToLast(head,pos);
	kthToLastIterative(head,k);
	return 0;
}
