
/*A: Arrays & Peaks */
#include<bits/stdc++.h>
using namespace std;

int findPermutation(int n,int k){
	vector<int> ans;
	int temp=0;
	
	if(n==k || n<k){
		cout<<"-1"<<"\n";
		return -1;
	}
	if(n<3 && k>0){
		cout<<"-1"<<"\n";
		return -1;
	}
	/*create original array*/
	else if(k<=n/2){
		//cout<<"n: "<<n<<" k: "<<k<<"\n";
		for(int i=1;i<=n;i++){
			/*1 2 3 4 5
			  2 4 1 5 3*/
			ans.push_back(i);
		}
		/*permute original array*/
		for(int i=ans.size()-1;i>0;i--){
			if(k>0){
				temp=ans[i-1];
				ans[i-1]=ans[i];
				ans[i]=temp;
				i--;
				k--;	
			}
		}
		/*print the final array*/
		//cout<<"final array: "<<"\n";
		for(int i=0;i<ans.size();i++){
			cout<<ans[i]<<" ";
		}
		cout<<"\n";	
	}
}
int main(){
	int t;
	int n;
	int k;
	//cout<<"enter t: "<<"\n";
	cin>>t;
	while(t--){
		//cout<<"enter n & then k: "<<"\n";
		cin>>n;
		cin>>k;
		findPermutation(n,k);
	}	
	return 0;
}
