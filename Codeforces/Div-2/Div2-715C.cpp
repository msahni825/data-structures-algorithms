/*C. The Sports Festival*/
#include <functional>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;	
const int MAX = 2e3+5;
ll mem[MAX][MAX];
ll arr[MAX];

#define MAX(a, b) max(a, b)
#define MIN(a, b) min(a, b)

ll minDiscrepancies(int l,int r){
	/*1 6 3 3 6 3 |  ans: 11
	
	dp(l,r)=sr-sl+min(dp(l+1,r),dp(l,r-1))	
    ans: dp(1,n)	
	time:O(n^2)	*/
	if(mem[l][r]!=-1){
		return mem[l][r];
	}	 
	if(l==r){
		return 0;
	}
	return mem[l][r]=arr[r]-arr[l]+MIN(minDiscrepancies(l+1,r),minDiscrepancies(l,r-1));
}

void minDValue(ll arr[],int n){
	vector<ll> vec;
	ll ans=0;
	ll maxx=0;
	ll minn=INT_MAX;
		
	if(n==1){
		cout<<0<<endl;
		return;
	}
	for(int i=0;i<n;i++){
		vec.push_back(arr[i]);
	}
//	sort(arr.begin(),arr.end(),std::greater<ll>());
	for(int i=0;i<vec.size();i++){
		maxx=MAX(vec[0],vec[i+1]);
		minn=MIN(vec[0],vec[i+1]);
		ans+=(maxx-minn);
	}
	cout<<"ans: "<<ans<<endl;
}

int main(){
	int n;
	int ans=0;
	cin>>n;
//	ll arr[2005];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	//minDValue(arr,n);
	sort(arr,arr+n);
	memset(mem,-1,sizeof mem);
	ans=minDiscrepancies(0,n-1);
	cout<<ans<<"\n";
	
}
