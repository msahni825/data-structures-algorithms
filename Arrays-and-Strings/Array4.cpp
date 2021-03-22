/*1.4 Palindrome Permutation: Given a string, write a function to check if it is a permutation of a palindrome. A palindrome is a word or phrase 
that is the same forwards and backwards
Input: Tact Coa	Output: True (permutations: "taco cat", "atco eta", etc.)*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/* Check that no more than one character has an odd count. */
bool checkMaxOneOdd(map<char,int> freqMap){
	bool foundOdd=false;
	int oddCount=0;
	map<char,int>::iterator it;
	for(it=freqMap.begin();it!=freqMap.end();it++){
		if((it->second)%2==1){
			oddCount++;
		}
		foundOdd=true;
	}
	return (oddCount<=1);
}

//APPROACH 1: Hashtable			TIME: O(n)				SPACE:O(n)
void isPalindromePermutation(string input){
	int len=input.length();
	if(len==0 || len==1){
		cout<<"Is Palindrome Permutation!"<<endl;
	}	
	map<char,int> freqMap;
	//find permuations	O(n!*n) | count how many times each character appears
	for(int i=0;i<len;i++){
		freqMap[input[i]]++;
	}
	//check palindrome |  check that no more than one character has an odd count
	if(checkMaxOneOdd(freqMap)>1){
		cout<<"Not a Palindrome Permutation!"<<endl;
	}		
	else{
		cout<<"Is a Palindrome Permutation!"<<endl;
	}
}


//APPROACH 2: Hashmap eliminated					TIME: O(n)				SPACE:O(1)

/* Map each character to a number. a -> 0, b -> 1, c -> 2, etc.
This is case insensitive. Non-letter characters map to -1. */
int getCharNumber(char c){
	int a=int('a');
	int z=int('z');
	//converting all char to lowercase
	int val=tolower(c);
	cout<<"current mapped value: "<<val<<endl;
	if(a<=val && val<=z){
		return val-a;
	}
	return -1;
}

void isPalindromePermutation(string input){
	bool result;
	int len=input.length();
	int countOdd=0;
	int table[256];
	for(int i=0;i<len;i++){
		int x=getCharNumber(input[i]);
		//input is a valid character
		if(x!=-1){
			table[x]++;
			if(table[x]%2==1){
				//cout<<"Count is odd: "<<table[x]<<endl;
				countOdd++;
			}
			else{
				//cout<<"Count is even: "<<table[x]<<endl;
				countOdd--;
			}
		}
	}
	cout<<"Odd Count is: "<<countOdd<<endl;
	if(countOdd<=1){
		cout<<"Is Palindrome Permutation!"<<endl;
	}
	else{
		cout<<"Not a Palindrome Permutation!"<<endl;
	}
}	
	
//APPROACH 3: Bit vector							TIME:O(n)					SPACE:O(1)
//PTBN: Generating all permutations to check if it is palindrome is not required  	

int main(){
	string input="Tact Coa";
	isPalindromePermutation(input);
	return 0;
}

