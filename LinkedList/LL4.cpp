/*									Partition list
Write code to partition a linked list around a value x, such that all nodes less than x come
before all nodes greater than or equal to x. If x is contained within the list, the values of x only need
to be after the elements less than x (see below). The partition element x can appear anywhere in the
"right partition"; it does not need to appear between the left and right partitions.*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* next;
};
void printList(Node* head){
	Node* ptr=head;
	while(ptr!=NULL){
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
	cout<<endl;
}
void partitionList(Node* head,int k){
	//map<int,int> m;
	//map<int,int>::iterator it;
	Node* ptr=head;
	
	Node* list1=NULL;
	//list1=new Node();
	
	Node* list2=NULL;
	//list2=new Node();
	
	Node* ptr1;
	Node* ptr2;
	
	//1 2 3 1 4 2
	//cout<<k<<endl;;
	while(ptr!=NULL){
		cout<<"***"<<endl;
		cout<<" curr node val: "<<ptr->data<<" "<<endl;
		
		if(ptr->data<k){
			if(list1==NULL){
				list1=new Node();
				ptr1=list1;
			}
			else{
				list1->next=new Node();
				list1=list1->next;
			}
			list1->data=ptr->data;
		//	list1->next=new Node();
		//	list1=list1->next;

		}
		else{
			if(list2==NULL){
				list2=new Node();
				ptr2=list2;
			}
			else{
				list2->next=new Node();
				list2=list2->next;
			}
			list2->data=ptr->data;
		//	list2->next=new Node();
		//	list2=list2->next;
		}
		
		cout<<"curr ptr: "<<ptr<<endl;
		ptr=ptr->next;
		cout<<"updated ptr: "<<ptr<<endl;
	}
	printList(ptr1);
	printList(ptr2);
	
	while(list1->next!=NULL){
		list1=list1->next;
	}
	list1->next=ptr2;
	cout<<"final list: "<<endl;
	printList(ptr1);
	
	/*for(it=m.begin();it!=m.end();it++){
		newhead->data=it.first;	
	}*/
}

int main(){
	int k=2;
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
	partitionList(head,k);
	
}
