// { Driver Code Starts
// C++ program to find minimum swaps required
// to club all elements less than or equals
// to k together
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution
{
public:
    int minSwap(int arr[], int n, int k) {
        // Complete the function
       // int min_swaps=0;
        int min_count=0;
        for(int i=0;i<n;i++){
            if(arr[i]<=k){
                min_count++;
            }
        }
            int b=0;
            for(int i=0;i<min_count;i++){
                if(arr[i]>k){
                    ++b;
                }
            }
       int min_swaps=b;
        for(int i=0, j=min_count;j<n; ++i,++j){
            if(arr[i]>k){
                --b;
            }
            if(arr[j]>k){
                ++b;
            }
            min_swaps=min(min_swaps,b);
        }
        return min_swaps;
    }
};


// { Driver Code Starts.

// Driver code
int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        Solution ob;
        cout << ob.minSwap(arr, n, k) << "\n";
    }
	return 0;
}
  // } Driver Code Ends
