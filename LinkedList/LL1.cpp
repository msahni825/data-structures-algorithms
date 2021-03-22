/*Write code to remove duplicates from an unsorted linked list.*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *next;
};
/*1 2 3 1 2 2*/
void printList(Node *head){
	Node *ptr=head;
	while(ptr!=NULL){
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
	cout<<endl;
}
/*FOLLOW UP: without extra space | TIME:O(n^2) | SPACE: O(1)*/
void removeDup2(Node *head){
	/*2 pointer approach: current which traverses the LL & runner that checks for all subsequent nodes for duplicates*/
	Node *runner=new Node();
	Node *current=new Node();
	current=head;
	while(current!=NULL){
		runner=current;
		while(runner->next!=NULL){
			if(runner->next->data==current->data){
				runner->next=runner->next->next;
			}
			else{
				runner=runner->next;
			}
		}
		current=current->next;
	}
	cout<<"List without duplicates: "<<endl;
	printList(head);
}
/*TIME: O(n) | SPACE: O(n)*/
void removeDup(Node *head){
	int freq=1;
	map<int,int> m;
	map<int,int>::iterator it;
	int key;
	Node *ptr=head;
	//LinkedList *n=ptr->next;
	Node *prev=new Node();
	prev->next=ptr;
	while(ptr!=NULL){
		cout<<prev->data<<"  is prev  "<<ptr->data<<endl;
		if(m.find(ptr->data)!=m.end()){
			/*remove curr node*/
			prev->next=ptr->next;
			cout<<"duplicate detected"<<" "<<ptr->data<<endl;
		}
		else{
			m.insert({ptr->data,freq});
			prev=prev->next;
		}
		ptr=ptr->next;
		//prev=prev->next;
	}
	cout<<"List without duplicates: "<<endl;
	printList(head);
}
int main(){
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
	//removeDup(head);
	removeDup2(head);
	return 0;
	
}
