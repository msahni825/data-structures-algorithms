// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> nextPermutation(int n, vector<int> nums){
        // code here
        int index=-1;
        //int n=nums.size();
        for(int i=n-1;i>0;i--){
            if(nums[i-1]<nums[i]){
                index=i;
                break;
            }
        }
        if(index==-1){
            reverse(nums.begin(),nums.end());
        }
        else{
            int prev=index;
            for(int i=index+1;i<n;i++){
                if(nums[i]>nums[index-1] && nums[i]<=nums[prev]){
                    prev=i;
                }
            }
            swap(nums[index-1],nums[prev]);
            reverse(nums.begin()+index,nums.end());
        }
        // int c=0;
        // int index=0;
        // for(int i=N-1;i>0;i--){
        //     if(arr[i]>arr[i-1]){
        //         index=i;
        //         break;
        //     }
        //     else{
        //         c++;
        //     }
        // }
        // if(c==N){
        //     reverse(arr.begin(),arr.end());
        //     return arr;
        //     }
        // else{
        //         int prev=index;
        //         // for(int i=index;i<N;i++){
        //         //     demo.push_back(arr[i]);
        //         // }
        //         //reverse(demo.begin(),demo.end());
        //         for(int j=index+1;j<N;j++){
        //             if(arr[j]>arr[index-1] && arr[j]<=arr[prev]){
        //                 prev=j;
        //             }
        //         }
        //         swap(arr[index-1],arr[prev]);
        //         reverse(arr.begin()+index,arr.end());
        //         // for(int i=0;i<N;i++){
        //         //     if(i==idx){
        //         //         swap(result[idx],result[idx-1]);
        //         //     }
        //         // }
        //       //  cout<<"idx value: "<<idx<<"\n";
        //      //   swap(result[idx-1],result[idx]);
        // }
        return nums;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}  // } Driver Code Ends
