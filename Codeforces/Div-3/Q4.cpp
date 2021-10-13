/*A. Elections

5
0 0 0
10 75 15
13 13 17
1000 0 0
0 1000000000 0

output
1 1 1
66 0 61
5 5 0
0 1001 1001
1000000001 0 1000000001
*/
#include<bits/stdc++.h>
using namespace std;

#define long long ll

int main(){
	int t;
	cin>>t;
	int a,b,c;
	int max=INT_MIN;
	vector<int> result;
	while(t--){
		cin>>a;
		cin>>b;
		cin>>c;
		result.clear();
		//find max of a,b,c
		if(a>=b && a>=c){
			max=a;
		}
		if(b>=a && b>=c){
			max=b;
		}
		if(c>=a && c>=b){
			max=c;
		}
		//cout<<"max: "<<max<<"\n";
		if(max==a && max==b && max==c){
			result.push_back(max+1);
			result.push_back(max+1);
			result.push_back(max+1);
			//cout<<"hey"<<"\n";
		}
		else if(max==a){
			//max=a
			result.push_back(0);
			result.push_back(max-b+1);
			result.push_back(max-c+1);
		}
		else if(max==b){
			//max=b
			result.push_back(max-a+1);
			result.push_back(0);
			result.push_back(max-c+1);
		}
		else if(max==c){
			//max=c
			result.push_back(max-a+1);
			result.push_back(max-b+1);
			result.push_back(0);
		}
		for(int i=0;i<3;i++){
			cout<<result[i]<<" ";
		}
 	}
	return 0;
}
