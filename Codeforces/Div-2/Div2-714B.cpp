/*B: AND Sequences*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ff first;
#define ss second;
#define pb push_back;
#define mp make_pair;

const int nMax = 2*1e5+10;

ll mod_mul(ll a,ll b,ll m){
	a=a%m;
	b=b%m;
	return (a*b);
}
int main(){
	int t;
	cout<<"enter t: "<<"\n";
	cin>>t;
	ll fact[nMax];
	fact[0]=1;
	for(ll i=1;i<nMax;i++){
		fact[i]=mod_mul(fact[i-1],i,MOD);
	}
	while(t--){
		int n;
		cout<<"enter n: "<<"\n";
		cin>>n;
		ll arr[n];
		ll val=0;
		map<ll,ll> m1;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			if(i==0){
				val=arr[i];
			}
			val=val & arr[i];
			m1[arr[i]]++;
		}
		ll ways=1;
		if(m1.find(val) == m1.end() || m1[val]<2){
			cout<<0<<"\n";
			continue;
		}
		ways=mod_mul(ways,m1[val],MOD);
		m1[val]--;
		ways=mod_mul(ways,m1[val],MOD);
		int counter=0;
		for(int i=0;i<n;i++){
			if((val & arr[i])!=val){
				counter=1;
				break;
			}
		}
		if(counter==1){
			cout<<0<<"\n";
			continue;
		}
		cout<<mod_mul(fact[n-2],ways,MOD)<<"\n";
	}
	return 0;
}
