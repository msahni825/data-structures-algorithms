/*B: Almost Rectangle*/
#include<bits/stdc++.h>
using namespace std;

void printRectangle(char arr[][401],int n){
	cout<<"printing FINAL rectangle!"<<"\n";
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
}
void formRectangle(char arr[][401], int n){
	pair<int,int> p1;
	p1.first=-1;
	p1.second=-1;
	pair<int,int> p2;
	p2.first=-1;
	p2.second=-1;
	vector<string> a;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr[i][j]=='*'){
				if(p1.first==-1){
					p1={i,j};
				}
				else{
					p2={i,j};
				}
			}
		}
	}
	/* p1={1,0}	 	p2={1,2}
	   p3={1,2} 	p4={1,0}*/
	pair<int,int> p3;
	pair<int,int> p4;
	/* 
4	| done
..*.
....
*...
....
5	| done
.....
..*..
.....
.*...
.....
	*/
/*
	2	| done
	.*
	.*
	
	3	| done
	*.*
	...
	...	
	
	4	| to-do
	....
	....
	*...
	*...
	
	2	| to-do
	*.
	.*
		for(int i=0;i<n;i++){
			if(i!=p1.first){
				p3.first=i;
				p3.second=p2.second;
				p4.first=i;
				p4.second=p1.first;
			}
		}

*/
	if(p1.first!=p2.second && p2.first==p2.second){
		p3.first=p1.first;
		p3.second=p1.first;
		
		p4.first=p2.first;
		p4.second=p1.first;	
	}
	else if(p1.first!=p2.second && p1.first==p1.second){
	for(int i=0;i<n;i++){
			if(i!=p1.first){
				p3.first=i;
				p3.second=p1.second;
				p4.first=i;
				p4.second=p2.second;
			}
		}
	}	
	else if(p1.first==p2.second){
		p3.first=p1.first;
		p3.second=p2.second;
		p4.first=p2.first;
		p4.second=p1.second;
	}	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			pair<int,int> p;
			p.first=i;
			p.second=j;
			if(p==p1 || p==p2 || p==p3 || p==p4){
				cout<<"*";
			}
			else{
				cout<<".";
			}
		}
		cout<<"\n";
	}
	printRectangle(arr,n);
}
int main(){
	int t;
	int n;
	cout<<"enter t: "<<"\n";
	cin>>t;
	char arr[401][401];
	while(t--){
		cout<<"enter n: "<<"\n";
		cin>>n;
		cout<<"enter values of rect: "<<"\n";
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>arr[i][j];
			}
		}
		formRectangle(arr,n);
	}
	return 0;
}
