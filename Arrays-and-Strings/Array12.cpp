/*https://www.geeksforgeeks.org/find-winner-election-votes-represented-candidate-names/

Input: votes[] = {"john", "johnny", "jackie", "johnny", "john", "jackie", "jamie", "jamie", "john", "johnny", "jamie", "johnny", "john"};
Output : John
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<string> input;
	string str;
	for(int i=0;i<13;i++){
		cin>>str;
		input.push_back(str);
	}
	map<string,int> mp;
	map<string,int>::iterator itr;
	
	for(int i=0;i<input.size();i++){
		mp[input[i]]++;
		/*if(mp.find(input[i])!=mp.end()){
			mp[input[i]]++;
		}
		else{
			mp.insert({input[i],1});
		}*/
	}
	int max_idx=-1;
	string res="";
	for(itr=mp.begin();itr!=mp.end();itr++){
		cout<<itr->first<<" "<<itr->second<<"\n";
		if(itr->second>max_idx){
			max_idx=itr->second;
			res=itr->first;
		}		
//		else if(itr->second==max_idx){
//			if(itr->first.size()>mp[max_idx].size()){
//				res=mp[max_idx];
//				cout<<"ans: "<<res<<"\n"
//			}
//		}
	}
	cout<<"ans: "<<res<<"\n";
	return 0;
}
