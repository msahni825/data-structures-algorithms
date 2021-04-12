/*A: Arrays & Peaks */
#include<bits/stdc++.h>
using namespace std;

int generatePeaks(int n, int k){
	if(k>(n-1)/2){
		cout<<-1<<"\n";
	}
	else{
		int maxR=n;
		int minL=2;
		vector<int> v1;
		v1.push_back(1);
		set<int> unused;
		for(int i=2;i<=n;i++){
			unused.insert(i);
		}
		int counter=0;
		while(k>0){
			if(maxR<minL){
				counter=1;
				break;
			}
			v1.push_back(maxR);
			unused.erase(maxR);
			maxR--;
			v1.push_back(minL);
			unused.erase(minL);
			minL++;
			k--;
		}
		if(counter==1){
			cout<<-1<<"\n";
		}
		else{
			for(int i=0;i<v1.size();i++){
				cout<<v1[i]<<" ";
			}
			set<int>::iterator it;	
			for(it=unused.begin(); it!=unused.end(); it++){
				cout<< *it <<" ";
			}
			cout<<"\n";
		}
	}
}
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
		//findPermutation(n,k);
		generatePeaks(n,k);
	}	
	return 0;
}
