/*Make it Divisible by 25
5
100
71345
3259
50555
2050047

0
3
1
3
2 */
//ends with 00,25,50,75
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	long long n;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n=s.length();
		int result=n;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				int val=(s[i]-'0')*10+(s[j]-'0');
				if(val%25==0){
					result=min(result,j-i-1+n-1-j);
				}
			}
		}
		cout<<result<<"\n";
	}
	return 0;
}
