// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
	//int dp[1000][1000];
		int LongestRepeatingSubsequence(string str){
		    // Code here
		    int n=str.length();
		    int dp[n+1][n+1];
		    
		    for(int i=0;i<=n;i++){
		        for(int j=0;j<=n;j++){
		            dp[i][j]=0;
		        }
		    }
		    for(int i=1;i<=n;i++){
		        for(int j=1;j<=n;j++){
		            if(str[i-1]==str[j-1] && i!=j){
		                dp[i][j]=1+dp[i-1][j-1];
		            }
		            else{
		                dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
		            }
		        }
		    }
		    return dp[n][n];
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends
