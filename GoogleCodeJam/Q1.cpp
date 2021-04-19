/*Problem:1 	time:O(NlgN)*/
#include<bits/stdc++.h>
using namespace std;

void treatPet(int arr[101],int n,int t){
	int ans=0;
	int currMax=1;
	vector<int> vec;
	for(int i=0;i<n;i++){
		vec.push_back(arr[i]);
	}
	sort(vec.begin(),vec.end());
	if(vec[0]==vec[vec.size()-1]){
		ans=n;
		cout<<ans<<"\n";
		return;
	}
	for(int i=0;i<vec.size()-1;i++){
		if(vec[i]==vec[i+1]){
			ans+=(currMax+currMax);
			//i++;
			//cout<<"vec[i]"<<" "<<vec[i]<<" "<<"vec[i+1]"<<" "<<vec[i+1]<<" "<<"ans: "<<ans<<"\n";
		}
		else if(vec[i]!=vec[i+1]){
			//cout<<"currMax "<<currMax<<"\n";
			currMax+=1;
			ans+=currMax;
			//cout<<"vec[i]"<<" "<<vec[i]<<" "<<"vec[i+1]"<<" "<<vec[i+1]<<" "<<"ans: "<<ans<<"\n";
		}
	}
	cout<<ans<<"\n";
}

int main(){
	int t;
	int n;
	//pet size
	int arr[101];
	cout<<"enter t: "<<"\n";
	cin>>t;
	while(t--){
		cout<<"enter n: "<<"\n";
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		treatPet(arr,n,t);
	}
	return 0;
}
