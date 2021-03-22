/*Implement an algorithm to delete a node in the middle (i.e., any node but the first and last node, not necessarily the exact middle) of a singly linked list, given 
only access to that node.*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* next;
};
void printList(Node *head){
	Node *ptr=head;
	int c=0;
	while(c<10 && ptr){
		cout<<ptr->data<<" ";
		cout<<ptr->next<<endl;
		ptr=ptr->next;
		c++;
	}
	cout<<endl;
}
/*1 2 3 1 4 2*/
void deleteMidNode(Node* refnode){
	/*delete ref node, given access to only that node*/
	/*cant delete last node*/
	Node* ptr=refnode;
	if(ptr->next==NULL){
		cout<<"last node val: "<<ptr->data;
		delete(ptr);
		cout<<"deleted"<<endl;
		ptr=NULL;
	}
	else{
		ptr->data=ptr->next->data;
		ptr->next=ptr->next->next;
	}
	
}

int main(){
	Node* head=NULL;
	Node* second=NULL;
	Node* third=NULL;
	Node* fourth=NULL;
	Node* fifth=NULL;
	Node* sixth=NULL;
	
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
	
	fifth->data=4;
	fifth->next=sixth;
	
	sixth->data=2;
	sixth->next=NULL;
	
	printList(head);
	
	deleteMidNode(third);
	/*will not work for last node | NULL */
	//deleteMidNode(sixth);
	printList(head);
	return 0;
}
