/*A. Word*/
#include<bits/stdc++.h>
using namespace std;

void changeWordCase(string s){
	int lowercount=0;
	int uppercount=0;
	string ans="";
	for(int i=0;i<s.length();i++){
		/*A-Z:65-90  | a-z:97-122 */
		//if(65<=s[i]<=90){
		if(isupper(s[i])){
			uppercount++;
		}
		//else if(97<=s[i]<=122){
		else if(islower(s[i])){
			lowercount++;
		}
	}
//	cout<<"uppercount: "<<uppercount<<"\n";
//	cout<<"lowercount: "<<lowercount<<"\n";
	if(uppercount==lowercount){
		/*convert: lowercase*/
		for(int i=0;i<s.length();i++){
			ans+=tolower(s[i]);
		}
	}
	else if(uppercount>lowercount){
		/*convert: uppercase*/
		for(int i=0;i<s.length();i++){
			ans+=toupper(s[i]);
		}
	}
	else if(uppercount<lowercount){
		/*convert: lowercase*/
		for(int i=0;i<s.length();i++){
			ans+=tolower(s[i]);
		}
	}
	for(int i=0;i<ans.length();i++){
			cout<<ans[i];
	}
}
int main(){
	string s;
	cin>>s;
	changeWordCase(s);
	return 0;
}
