/*1.9 String Rotation:Assume you have a method isSubstring which checks if oneword is a substring of another. Given two strings, sl and s2, 
write code to check if s2 is a rotation of sl using only one call to isSubstring (e.g., "waterbottle" is a rotation of"erbottlewat").*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//APPROACH 1: 	TIME:O(n)		SPACE:O(1)
/*return true if s2 is a substring of s1*/
bool isSubstring(string str1, string str2){
	int len1=str1.length();
	int len2=str2.length();
	/* we know len1>len2 */
	for(int i=0;i<=(len1-len2);i++){
		int j;
		for(j=0;j<len2;j++){
			if(str1[i+j]!=str2[j]){
				break;
			}
		}
		if(j==len2){
			cout<<"Index of matching character: "<<i<<endl;
			return true;
		}
	}
	return false;
}

bool isStringRotation(string str1, string str2){
	bool ans;
	string newstr1;
	if(str1.length()==str2.length() && str1.length()>0){
		newstr1=str1+str1;	
		ans=isSubstring(newstr1, str2);
	}
	else{
		return false;
	}
	return ans;	
}

int main(){
	/*waterbottlewaterbottle*/
	string str1="waterbottle";
	string str2="erbottlewat";
	bool result;
	//cin>>str1;
	//cin>>str2;
	result=isStringRotation(str1,str2);
	cout<<result<<endl;
	if(result==1){
		cout<<"Is a Rotation"<<endl;
	}
	else{
		cout<<"Is not a Rotation"<<endl;
	}
	return 0;
}
