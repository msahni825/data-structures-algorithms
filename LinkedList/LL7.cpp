/*Intersection of 2 singly linked lists*/
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
/*list1:3->1->5->9->7->2->1->NULL | list2:4->6->7->2->1->NULL */
void findIntersection(Node* head1,Node* head2){
	Node* ptr1=head1;
	Node* ptr2=head2;
	Node* result=NULL;
	int k=0;
	
	/*find length of list1*/
	int len1=0;
	while(ptr1!=NULL){
		//cout<<"ptr1 loop"<<endl;
		len1++;
		ptr1=ptr1->next;
	}
	cout<<"Length of list1: "<<len1<<endl;
	/*find length of list2*/
	int len2=0;
	while(ptr2!=NULL){
		//cout<<"ptr2 loop"<<endl;
		len2++;
		ptr2=ptr2->next;
	}
	cout<<"Length of list2: "<<len2<<endl;
	cout<<endl;
	
	ptr1=head1;
	ptr2=head2;
	cout<<"Pointer 1: "<<ptr1<<endl;
	cout<<"Pointer 2: "<<ptr2<<endl;
	cout<<endl;
	
	/*equal lengths*/
	if(len1==len2){
		while(ptr1 && ptr2){
			if(ptr1->data==ptr2->data){
				result=ptr1;
				cout<<"Value of intersecting node: "<<result->data<<endl;
				cout<<endl;
				break;
			}
			else{
				ptr1=ptr1->next;
				ptr2=ptr2->next;
			}
		}
	}
	/*unequal lengths
	increment pointer unless lengths get equal*/
	else{
		if(len1>len2){
			k=len1-len2;
			cout<<"Length difference: "<<k<<endl;
			cout<<endl;
			while(k){
				ptr1=ptr1->next;
				k--;
			}
			cout<<"After shifting, ptr1 data: "<<ptr1->data<<endl;
			cout<<"After shifting, ptr2 data: "<<ptr2->data<<endl;
			cout<<endl;
			while(ptr1 && ptr2){
				if(ptr1->data==ptr2->data){
					result=ptr1;
					cout<<"Value of intersecting node: "<<result->data<<endl;
					break;
				}
				else{
					ptr1=ptr1->next;
					ptr2=ptr2->next;	
				}
			}
		}
		else{/*(len2>len1)*/
			k=len2-len1;
			cout<<"Length difference: "<<k<<endl;
			while(k){
				ptr2=ptr2->next;
				k--;
			}
			cout<<ptr1->data;
			cout<<ptr2->data;
			while(ptr1 && ptr2){
				if(ptr1->data==ptr2->data){
					result=ptr1;
					cout<<"Value of intersecting node: "<<result->data<<endl;
				}
				else{
					ptr1=ptr1->next;
					ptr2=ptr2->next;	
				}
			}
		}
	}	
}
int main(){
	Node* head1=NULL;
	Node* second=NULL;
	Node* third=NULL;
	Node* fourth=NULL;
	Node* fifth=NULL;
	Node* sixth=NULL;
	Node* seventh=NULL;
	
	Node* head2=NULL;
	Node* second2=NULL;
	Node* third2=NULL;
	Node* fourth2=NULL;
	Node* fifth2=NULL;
	
	
	head1 = new Node();
	head2 = new Node();
	second = new Node();
	third = new Node();
	fourth = new Node();
	fifth = new Node();
	sixth=new Node();
	seventh=new Node();
	second2=new Node();
	third2=new Node();
	fourth2=new Node();
	fifth2=new Node();
	/*list1: 3->1->5->9->7->2->1->NULL
	list2: 4->6->7->2->1->NULL*/
	head1->data=3;
	head1->next=second;
	
	second->data=1;
	second->next=third;
	
	third->data=5;
	third->next=fourth;
	
	fourth->data=9;
	fourth->next=fifth;
	
	fifth->data=7;
	fifth->next=sixth;
	
	sixth->data=2;
	sixth->next=seventh;
	
	seventh->data=1;
	seventh->next=NULL;
	
	head2->data=4;
	head2->next=second2;
	
	second2->data=6;
	second2->next=third2;
	
	third2->data=7;
	third2->next=fourth2;
	
	fourth2->data=2;
	fourth2->next=fifth2;
	
	fifth2->data=1;
	fifth2->next=NULL;
	
	findIntersection(head1,head2);
	
	return 0;
}
