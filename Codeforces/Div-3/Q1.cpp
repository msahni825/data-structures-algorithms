/*A: spy detected*/
#include<bits/stdc++.h>
using namespace std;

int detectOddIndex(int arr[],int len){
	int ans;
	if(arr[0]!=arr[len-1]){
		if(arr[len-1]!=arr[len-2]){
			ans=len;
			cout<<ans<<"\n";
			return ans;
		}
		else{
			ans=1;
		}
	}
	for(int i=0;i<len;i++){
		if(arr[i]!=arr[i+1] && arr[i]!=arr[len-1]){
			ans=i+1;
			cout<<ans;
			cout<<"\n";
			break;
		}
	}	
	return ans;
}
int main(){
	int arr[100];
	int t;
	//cout<<"enter t: "<<"\n";
	cin>>t;
	int len;
	while(t--){
		//cout<<"enter length: "<<"\n";
		cin>>len;
		for(int i=0;i<len;i++){
			cin>>arr[i];
		}
		detectOddIndex(arr,len);
	}
	return 0;
}
