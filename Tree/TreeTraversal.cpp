/*Implementing Trees using linked list */
//#include<iostream>
//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//	
//	return 0;
//}

/*Implementing Trees */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node* left;
	struct Node* right;
	Node(int val){
		data=val;
		left=NULL;
		right=NULL;
	}
};
void inorder(Node* root){
	/*left-root-right*/
	if(root!=NULL){
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}
//	cout<<endl;
}
void preorder(Node* root){
	/*root-left-right*/
	if(root!=NULL){
		cout<<root->data<<" ";
		preorder(root->left);
		preorder(root->right);
	}
//	cout<<endl;
}
void postorder(Node* root){
	/*left-right-root*/
	if(root!=NULL){
		postorder(root->left);
		postorder(root->right);
		cout<<root->data<<" ";
	}
//	cout<<endl;
}

int main(){
	struct Node* root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	cout<<"Inorder"<<" ";
	inorder(root);
	cout<<endl;
	cout<<"Preorder"<<" ";
	preorder(root);
	cout<<endl;
	cout<<"Postorder"<<" ";
	postorder(root);
	cout<<endl;
	cout<<" All Order traversals implemented!"<<endl;
	
	return 0;
}
