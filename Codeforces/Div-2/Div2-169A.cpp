/*A. Lunch Rush*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	long long sz=1000000000;
	int n;
	int k;
	cin>>n;
	cin>>k;
	int val=0;
	vector<int> fi;
	vector<int> ti;	
	vector<int> fun;
	int f;
	int t;
	for(int i=0;i<n;i++){
		cin>>f;
		fi.push_back(f);
		cin>>t;
		ti.push_back(t);
//		cin>>fi[i];
//		cin>>ti[i];
	}
	for(int i=0;i<n;i++){
		if(ti[i]>=k){
			val=(fi[i]-(ti[i]-k));
		}
		else{
			val=fi[i];
		}
		//cout<<"val: "<<val<<"\n";
		fun.push_back(val);
	}
	int maxval=INT_MIN;
	for(int i=0;i<fun.size();i++){
		if(fun[i]>maxval){
			maxval=fun[i];
		}
	}
	cout<<maxval<<"\n";
	return 0;
}
