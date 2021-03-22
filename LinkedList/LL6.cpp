/*Palindrome: Implement a function to check if a linked list is a palindrome*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* next;
};
void printList(Node* head){
	Node* ptr=head;
	while(ptr){
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
	cout<<endl;
}
void isEqual(Node* reverselist, Node* originallist){	
	while(reverselist!=NULL && originallist!=NULL){
		if(reverselist->data!=reverselist->data){
			cout<<"Not a palindrome"<<endl;
			//return false;
		}
		reverselist->next;
		originallist->next;
	}
}

/*0->1->2->1->0->NULL | reverse the list and compare*/
Node* isPalindrome(Node* head){
	/*ITERATIVE: intialize 3 pointers*/
	int c=0;
	Node* ptr=head;
	Node* curr=head;
	Node* prev=NULL;
	Node* n=NULL;
	/*0/1 length list*/
	if(curr==NULL || curr->next==NULL){
		cout<<"Is palindrome "<<endl;
	}
	else{
		/*reverse the list: iterate the list*/
		while(curr!=NULL){
			/*NULL--0->1*/
			/*NULL<-0<-1*/
			/*before changing the curr's next save curr's next */
			n=curr->next;
			curr->next=prev;
			/*move prev and curr 1 step forward*/
			prev=curr;
			curr=n;	
		}
		head=prev;
		cout<<"Reversed LL: "<<endl;
		printList(prev);
		printList(ptr);
		/*compare the lists*/
		cout<<"Check palindrome"<<endl;
		return prev;
		//isEqual(prev,ptr);		
	}
}

int main(){
	Node* head=NULL;
	Node* second=NULL;
	Node* third=NULL;
	Node* fourth=NULL;
	Node* fifth=NULL;
	
	head = new Node();
	second = new Node();
	third = new Node();
	fourth = new Node();
	fifth = new Node();
	
	head->data=3;
	head->next=second;
	
	second->data=1;
	second->next=third;
	
	third->data=2;
	third->next=fourth;
		
	fourth->data=5;
	fourth->next=fifth;
	
	fifth->data=3;
	fifth->next=NULL;
	
	Node* rhead;
	
	cout<<"Initial List is: "<<endl;
	printList(head);
	rhead=isPalindrome(head);
	printList(rhead);
	
	Node* p1=rhead;
	Node* p2=head;
	cout<<"Print list head: "<<endl;
	printList(head);	
	cout<<endl;
	cout<<endl;
	cout<<p1->data<<endl;
	cout<<p2->data<<endl;
	cout<<endl;
	
	while(p1 && p2){
		cout<<"hey"<<endl;
		if(p1->data!=p2->data){
			cout<<"NO"<<endl;
			break;
		}
		else{
			cout<<"else"<<endl;
			p1=p1->next;
			p2=p2->next;
		}
		cout<<endl;
		cout<<p1->data<<endl;
		cout<<p1<<endl;
		cout<<p2<<endl;
		cout<<p2->data<<endl;
		cout<<endl;
	}
	
	return 0;
}	
