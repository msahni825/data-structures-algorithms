// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
        sort(a.begin(),a.end());
        int start=0;
        int end=0;
        long long i;
        long long diff;
        int min_diff=INT_MAX;
        long long curr_min=INT_MIN;
        long long curr_max=INT_MIN;
        for(i=0;i<n-m+1;i++){
            diff=a[i+m-1]-a[i];
            if(diff<min_diff){
                min_diff=diff;
            }
        }
        return min_diff;
    }   
};

// { Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}  // } Driver Code Ends
