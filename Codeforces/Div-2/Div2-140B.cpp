/*B. Effective Approach
2
1 2
1	//query 1, find 1
1
o/p: 1 2
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	long long v_ans=0;
	long long p_ans=0;
	cin>>n;
	int input[n];
	for(int i=0;i<n;i++){
		cin>>input[i];
	}
	int q;
	cin>>q;
	int queries[q];
	for(int j=0;j<q;j++){
		cin>>queries[j];
	}
	int arr[100000];	//index array that stores the index of elements in input[i]
	for(int i=0;i<n;i++){
		arr[input[i]]=i+1;
	}
	for(int j=0;j<q;j++){
		v_ans+=arr[queries[j]];
		p_ans+=n-arr[queries[j]]+1;
	}
	cout<<v_ans<<" "<<p_ans<<"\n";
	return 0;	
}


