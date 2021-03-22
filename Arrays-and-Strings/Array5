/*1.5 One Away: There are three types of edits that can be performed on strings: insert a character,remove a character, or replace a character. 
Given two strings, write a function to check if they are one edit (or zero edits) away.
2-REPLACE:	pale, bake ->  false */

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/* APPROACH-1: 	TIME:O(n) n is the length of shorter string | SPACE:O(1) */
void checkOneEditReplace(string str1,string str2){
	int foundDifference;
	for(int i=0;i<str1.length();i++){
		if(str1[i]!=str2[i]){
			foundDifference++;	
		}
	}
	if(foundDifference>1){
		cout<<"FALSE| Two edit away"<<endl;
	}
	else{
		cout<<"TRUE| One/Zero edit away"<<endl;
	}
}
void checkOneEditID(string str1,string str2){
	int index1=0;
	int index2=0;
	int foundDifference;
	/*0 1 2
	 p l e
	 
	 0 1 2 3
	 p a l e*/
	while(index1<str1.length() && index2<str2.length()){
		if(str1[index1]!=str2[index2]){
			if(index1!=index2){
				foundDifference++;
			}
			index2++;
		}
		else{
			index1++;
			index2++;
		}
	}
	if(foundDifference>0){
		cout<<"FALSE| Two edit away"<<endl;
	}
	else{
		cout<<"TRUE| One/Zero edit away"<<endl;
	}
}
void isOneAway(string str1,string str2){
	if(str1==str2){
		cout<<"Zero edits away!"<<endl;
	}
	else{
		/*pale, bale ->  true*/
		if(str1.length()==str2.length()){
			checkOneEditReplace(str1,str2);
		}
		/*I/D:		ple, pale ->   true*/
		else if(str1.length()+1==str2.length()){
			checkOneEditID(str1,str2);
		}
		/*I/D:		pales, pale -> true*/
		else if(str1.length()==str2.length()+1){
			checkOneEditID(str2,str1);
		}
		/*combining last 2 */
	}
}

int main(){
	string str1,str2;
	cout<<"Enter string 1: "<<endl;
	cin>>str1;
	cout<<"Enter string 2: "<<endl;
	cin>>str2;
	isOneAway(str1,str2);
	return 0;
}
