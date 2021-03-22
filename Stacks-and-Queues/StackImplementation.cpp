/*Implementing stack using ARRAYS*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
class Stack{
	int top;
	public:
		int a[MAX];
		bool push(int e);
		int pop();
		int peek();
		bool isEmpty();
};

	bool Stack::isEmpty(){
		return (top<0);
	}
	bool Stack::push(int e){
		//top: index of top element
		if(top>=(MAX-1)){
			cout<<"Stack Overflow";
			return false;
		}	
		else{
			a[++top]=e;
			cout<<e<<"Pushed on stack"<<endl;
			return true;
		}
	}
	int Stack::pop(){
		if(top<0){
			cout<<"Stack is empty"<<endl;
		}
		else{
			//top--;
			int x=a[top--];
			return x;
		}
	}
	int Stack::peek(){
		if(top<0){
			cout<<"Stack is empty"<<endl;
		}
		else{
			int x=a[top];
			return x;
		}
	}

int main(){
	//Stack<int> s=new Stack<int>();
	class Stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	cout<<s.pop()<<"is popped"<<endl;
	cout<<s.pop()<<"is popped"<<endl;
	cout<<"Stack is Empty: ";
	cout<<s.isEmpty()<<endl;
	int ele=s.peek();
	cout<<ele<<"Top of Stack"<<endl;

	return 0;	
}
