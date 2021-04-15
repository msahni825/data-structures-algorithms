/*B. Queue at the School*/
#include<bits/stdc++.h>
using namespace std;

void formQueue(int n,int t,string s){
	/*BGGBG*/
	/*failed:
	BBGBGBGB -> GGBGBBBB
	*/
	vector<int> indices;
	//string pseudo;
	for(int i=0;i<n;i++){
		//pseudo[i]=s[i];
		if(s[i]=='B' &&s[i+1]=='G'){
			indices.push_back(i);
		}
	}
	while(t--){
		for(int i=0;i<n;i++){
			if(s[i]=='B' && s[i+1]=='G'){
				s[i]='G';
				s[i+1]='B';
				i=i+2;
			}
			else{
				continue;
			}
		}
	}
/*	while(t--){
		for(int j=0;j<indices.size();j++){
			s[indices[j]]='G';
			s[indices[j]+1]='B';
		}
	}
*/
	for(int i=0;i<s.size();i++){
		cout<<s[i];
	}
}
int main(){
	int n;
	int t;
	string s;
	//cout<<"enter n & t: "<<"\n";
	cin>>n;
	cin>>t;
	//cout<<"enter s: "<<"\n";
	cin>>s;
	formQueue(n,t,s);
	return 0;
}
