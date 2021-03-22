/*Queue Implementation*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define C 1000
class Queue{
	int element;
	int front;
	int rear;
	//int C;	
	public:
		int q[C];
		bool enqueue(int e);
		void dequeue();
		void queueFront();
		bool isEmpty();
		void display();
};
bool Queue::enqueue(int e){
	if(rear==C){
		cout<<"Queue is Full!"<<endl;
		return false;
	}
	else{
		q[rear]=e;
		cout<<"Enqueued "<<e<<endl;
		rear++;
		return true;
	}
}
void Queue::dequeue(){
	if(front==rear){
		cout<<"Queue is Empty"<<endl;
	}
	else{
		/*shift elements till front*/
		for(int i=0;i<rear-1;i++){
			q[i]=q[i+1];
		}
		rear--;
	}
}
void Queue::queueFront(){
	if(front==rear){
		cout<<"Queue is Empty"<<endl;
	}
	else{
		cout<<"Front element is: "<<q[front]<<endl;
	}
}
/*bool Queue::isEmpty(){
}*/
void Queue::display(){
	if(front==rear){
		cout<<"Queue is Empty"<<endl;
	}
	else{
		/*traverse front to rear and print elements*/
		for(int i=front;i<rear;i++){
			cout<<"-->"<<q[i];
		}
		cout<<endl;
	}
}
int main(){
	class Queue q;
	/*add at back*/
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);
	/*pop from front*/
	q.dequeue();
	q.dequeue();
	/*queue front*/
	q.queueFront();
	cout<<"Final queue after 4 add and 2 delete: "<<endl;
	q.display();
	
	return 0;
}
