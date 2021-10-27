/*B. Borze*/
#include<bits/stdc++.h>
using namespace std;

void decodeBorze(string s){
	string ans="";
	/*.-.--
	 --.
	 -..-.--*/
	/*for(int i=0;i<s.length();i++){
		cout<<s[i]<<endl;
	}*/
	for(int i=0;i<s.length();i++){
		if(s[i]=='.'){
			//cout<<"i"<<endl;
			ans+='0';
		}
		else if(s[i]=='-' && s[i+1]=='.'){
			//cout<<"am"<<endl;
			ans+='1';
			i+=1;
		}
		else if(s[i]=='-' && s[i+1]=='-'){
			//cout<<"strong"<<endl;
			ans+='2';
			i+=1;
		}
	}
	cout<<ans<<endl;
}
int main(){
	string s;
//	cout<<"enter s: "<<endl;
	cin>>s;
	decodeBorze(s);
	return 0;
}
