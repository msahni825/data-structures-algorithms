// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
     //Your code here
    //   map<int,int> mp;
    //   map<int,int>::iterator it;
    unordered_set<int> s;
    int result=0;
      for(int i=0;i<N;i++){
        s.insert(arr[i]);
      }
      for(int i=0;i<N;i++){
          if(s.find(arr[i]-1)==s.end()){
              int j=arr[i];
              while(s.find(j)!=s.end()){
                  j++;
              }
            result=max(result,j-arr[i]);
          }
      }
    //   int answer=0;
    //   for(it=mp.begin();it!=mp.end();it++){
    //     if(it.second){
    //         answer++;
    //     }  
    //     else{
    //         answer=0;
    //     }
    //  }
      return result;
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends
