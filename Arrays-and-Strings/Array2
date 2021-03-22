/*1.2 Check Permutation: Given two strings, write a method to decide if one is a permutation of the other. 
EDGE CASES: Case sensitive, spaces and size of the character set*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void isPermutation(string str1,string str2){
	int len1=0;
	int len2=0;
	cout<<str1<<endl;
	cout<<str2<<endl;
	len1=str1.size();
	len2=str2.size();
	cout<<"Length of string "<<len1<<endl;
	cout<<"Length of string "<<len2<<endl;
		
	map<char,int> m1;
	map<char,int> m2;
	map<char,int>::iterator it1;
	map<char,int>::iterator it2;	
	int count=0;
	if(len1!=len2){	
		cout<<"Length unequal: Not a permutation"<<endl;
	}
	
	//APPROACH 1:Hashmap		TIME: O(len1+len2)					SPACE: O(len1+len2)
	for(int i=0;i<len1;i++){
		m1[str1[i]]++;
	}
	/*not req*/
	for(int k=0;k<len2;k++){
		m2[str2[k]]++;
	}
	for(it1=m1.begin(),it2=m2.begin();it1!=m1.end(),it2!=m2.end();it1++,it2++){
		if(it1->first!=it2->first){
			count++;
		}
	}

	if(count>0){
		cout<<"Not a permutation"<<endl;
	}
	else{
		cout<<"Is a permutation"<<endl;
	}
}

	//APPROACH 2: Sorting 		TIME: O(nlgn+mlgm)	n:len1,m:len2	SPACE: O(1)
	sort(str1.begin(),str1.end());
	sort(str2.begin(),str2.end());
	if(str1!=str2){
		cout<<"Not a Permutation"<<endl;
	}
	else{
		cout<<"Is a Permutation"<<endl;
	}	

int main(){
	string str1,str2;
	cout<<"Enter String1: "<<endl;
	cin>>str1;
	cout<<"Enter String2: "<<endl;
	cin>>str2;
	isPermutation(str1,str2);
	return 0;
}
