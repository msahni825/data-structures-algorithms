/*1.3 URLify: Write a method to replace all spaces in a string with '%20'. You may assume that the string has sufficient space at the end to hold the 
additional characters, and that you are given the "true" length of the string*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void calcUrlify(string inputstr, int trueLen){
	//calculate no of spaces
	int spaceCount;
	//string resultstr="                    ";
	for(int i=0;i<trueLen;i++){
		if(inputstr[i]==' '){
			spaceCount++;
		}
	}
	cout<<endl;
	cout<<"space count is: "<<spaceCount;
	cout<<endl;
	//find new length of string: index, 1 space also removed so, *2
	int index;
	index=trueLen+spaceCount*2;
	cout<<"new index is: "<<index<<endl;
	//end the array
	if(trueLen<inputstr.length()){
		inputstr[trueLen]='\0';
	}
	//starting from backwards
	for(int j=trueLen-1;j>=0;j--){
		if(inputstr[j]==' '){
			//double quotes for string, single quotes for char
			inputstr[index-1]='0';
			inputstr[index-2]='2';
			inputstr[index-3]='%';
			index=index-3;	
			cout<<index<<endl;
		}
		else{
			inputstr[index-1]=inputstr[j];	
			index--;
		}
	}
	cout<<"Final String is: "<<inputstr<<endl;	
}

int main(){
	int trueLen=13;
	string inputstr="Mr John Smith     ";
	string resultstr;
	cout<<"Input string is: "<<inputstr<<endl;
	cout<<"True length is: "<<trueLen<<endl;
	calcUrlify(inputstr,trueLen);
	return 0;
}
