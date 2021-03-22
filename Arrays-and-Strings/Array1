/*1.1 Is Unique: Implement an algorithm to determine if a string has all unique characters. What if you cannot use additional data structures?
EDGE CASES: ASCII vs Unicode */

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isUnique(string input){
	
	bool result=true;
	int len=input.length();
	cout<<len<<endl;
	map<char,int> m;
	/*WORKING*/
	if(len==0 || len==1){
		cout<<"Length is Trivial";
		return true;
	}
	if(len>128){
		return false;
	}
	if(len>1){
		//APPROACH 1: Sorting 						TIME: O(nlgn)	SPACE:O(1)
		sort(input.begin(),input.end());
		for(int i=0;i<len-1;i++){
			cout<<input[i]<<" ";
			cout<<input[i+1]<<endl;
			if(input[i]==input[i+1]){
				cout<<"Input is not unique!";
				return false;
				break;
			}
		}
		//APPROACH 2: Hashmap						TIME: O(n)		SPACE:O(n)
		/*array*/
		for(int i=0;i<len;i++){
			m[input[i]]++;
		}
		//itearte over hasmap
		map<char,int>::iterator it;
		for(it=m.begin();it!=m.end();it++){
			if(it->second>1){
				cout<<"Input is not unique!";
				return false;
				break; 
			}
		}
		//APPROACH 3: Bit vector/boolean array		TIME: O(n)		SPACE:O(1)

		cout<<"Input is unique: "<<result;
		return result;
	}
}

int main(){
	cout<<"Enter string: ";
	string input;
	cin>>input;
	isUnique(input);
	return 0;	
}

