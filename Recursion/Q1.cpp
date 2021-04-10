
/*Power Set: return all subsets of a set*/
#include<bits/stdc++.h>
using namespace std;
/*time and space complexity: O(n*2^n) | 2^n subsets
soln#1:	recursion
n=2 | {a1,a2} | P2={},{a1},{a2},{a1,a2}
n=3 | {a1,a2,a3} | P3={},{a1},{a2},{a3},{a1,a2},{a2,a3},{a1,a3},{a1,a2,a3}
P2+a3=P3 | {},{a1},{a2},{a1,a2}| {a3},{a1,a3},{a2,a3},{a1,a2,a3}
1 2 3: "",1,2,3,12,123,13,23*/

void getSubsets(string str,int index=-1,string curr=""){
	/*n=3 | subsets of power set=8*/
	int n=str.length();
	if(index==n){
		return;
	}
	cout<<curr<<"\n";
	for(int i=index+1;i<n;i++){
		curr+=str[i];
		getSubsets(str,i,curr);
		/*once all subsets beginning with intial "curr" are printed,
		remove last char to consider a different prefix of subsets*/
		curr.erase(curr.size()-1);
	}
	return;
}
/*soln#2:  combinatorics | example-> set:[a,b,c]
000:""
001:a
010:b
011:ab
100:c
101:ac
110:bc
111:abc*/

int main(){
	int n=3;
	//vector<int> input={1,2,3};
	string str="123";
	getSubsets(str);
	return 0;
}
