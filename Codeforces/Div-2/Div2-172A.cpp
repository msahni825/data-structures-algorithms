/*A. Word Capitalization*/
#include<bits/stdc++.h>
using namespace std;

void wordCapitalize(string s){
	string ans="";
	ans+=toupper(s[0]);
	for(int i=1;i<s.length();i++){
		ans+=s[i];
	}
	for(int i=0;i<ans.length();i++){
		cout<<ans[i];
	}
}
int main(){
	string s;
	cin>>s;
	wordCapitalize(s);
	return 0;
}
