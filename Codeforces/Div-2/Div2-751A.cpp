/*A. Two Subsequences
3
fc
aaaa
thebrightboiler

O/P:
c f
a aaa
b therightboiler
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string a="";
		string out_a="";
		string out_b="";
		string pseudo_a="";
		cin>>a;
		pseudo_a=a;
		int index=0;
		sort(pseudo_a.begin(),pseudo_a.end());
		char first=pseudo_a[0];
		out_a=out_a+first;
		
		for(int i=0;i<a.size();i++){
			if(a[i]==first){
				index=i;
				break;
			}
		}
		a.erase(index,1);
		out_b=a;
		cout<<out_a<<" "<<out_b<<"\n";
	}
	return 0;
}
