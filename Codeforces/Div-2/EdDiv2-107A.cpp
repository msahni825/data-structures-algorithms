/*A: Review Site*/
#include<bits/stdc++.h>
using namespace std;

void countUpvotes(int arr[],int n){
	int sum=0;
	for(int i=0;i<n;i++){
		if(arr[i]!=2){
			sum++;
		}
	}
	cout<<sum<<"\n";
//	cout<<"final upvotes: "<<t1count<<"\n";
}
int main(){
	int arr[51];
	int t;
	int n;
	//cout<<"enter t: "<<"\n";
	cin>>t;
	while(t--){
		//cout<<"enter n: "<<"\n";
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		countUpvotes(arr,n);
	}
	return 0;
}
