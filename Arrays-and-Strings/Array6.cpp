/*1.6 String Compression: Implement a method to perform basic string compression using the counts
of repeated characters. For example, the string aabcccccaaa would become a2b1c5a3. If the "compressed" string would not become smaller than the original 
string, your method should return the original string. You can assume the string has only uppercase and lowercase letters (a - z). */

#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

//APPROACH 1: Brute force 		TIME: O(n+p^2) p:character sequences eg:3[aabcccccaaa]		SPACE:O(n) n: length of new compressed string created

string int_to_str(int x){
	stringstream ss;
	ss<<x;
	return ss.str();
}
string strCompression(string str){
	int len=str.length();
	string result="";
	int consecutiveCount=0;
	
	for(int i=0;i<len;i++){
		consecutiveCount++;
		/* If next character is different than current, append this char to result*/
		if(i+1>=len || str[i]!=str[i+1]){
		//	cout<<"count of "<<str[i]<<": "<<consecutiveCount<<endl;
			result=result+str[i]+int_to_str(consecutiveCount);
			consecutiveCount=0;
		}
		//cout<<result<<endl;
	}
	cout<<"Compressed String: "<<endl;
	return result.length() < str.length() ? result : str;
}

/*APPROACH 2: Instead of creating compressed string and then checking we can check in advance if the compressed string has size less than or not
(avoid creating a string we never used)*/
int countCompression(string str){
		int compressedLen=0;
		int countConsecutive=0;
		for(int i=0;i<str.length();i++){
			countConsecutive++;
			/* If next character is different than current, increase the length.*/ 
			if(i+1>=str.length() || str[i]!=str[i+1]){
				compressedLen=1+countConsecutive;
				cout<<"CLen Count for: "<<str[i]<<" : "<<compressedLen<<endl;
				countConsecutive=0;
			}
		}
		cout<<"CLen: "<<compressedLen<<endl;
		return compressedLen;
}
string compress(string str){
	/* Check final length and return input string if it would be longer. */ 
	int finalLen=countCompression(str);
	string resultant="";
	int countConsecutive=0;
	
	if(finalLen>=str.length()){
		return str;
	}	
	for(int i=0;i<str.length();i++){
		countConsecutive++;
		/* If next character is different than current, append this char to result.*/
		if(i+1>=str.length() || str[i]!=str[i+1]){
			cout<<"count of "<<str[i]<<": "<<countConsecutive<<endl;
			resultant=resultant+str[i]+int_to_str(countConsecutive);
			countConsecutive=0;
		}
	}
	return resultant;
}

int main(){
	//string str="aabbcc";
	string str="abbcccdddd";
	/*a1b2c3d4*/
	string result;
	result=strCompression(str);
	//result=compress(str);
	cout<<"Compressed String: "<<endl;
	cout<<result;
	return 0;
}
