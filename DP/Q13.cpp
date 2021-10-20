// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    string longestPalin (string S) {
        // code here
        string result="";
        int n=S.size();
        int start=0;
        bool table[n][n];
        memset(table,0,sizeof(table));
        int maxlen=1;
        //all substrings of len=1 are palindrome
        for(int i=0;i<n;++i){
            table[i][i]=true;
        }
        //check substrings of len=2
        for(int i=0;i<n-1;++i){
            if(S[i]==S[i+1]){
                table[i][i+1]=true;
                start=i;
                maxlen=2;
            }
        }
       //check for len>2 ; k is the length of substring
       for(int k=3;k<=n;++k){
           //fixing the starting index
           for(int i=0;i<n-k+1;++i){
               //getting the end index of substring from start index=i and len=k
               int j=i+k-1;
               /*checking for substring from ith index to jth index iff str[i+1] to str[j-1] 
               is a palindrome*/
               if(table[i+1][j-1] && S[i]==S[j]){
                   table[i][j]=true;
                   if(k>maxlen){
                       start=i;
                       maxlen=k;
                   }
               }
           }
       }
       //return length of LPS: maxlen
       int low=start;
       int high=start+maxlen-1;
       for(int i=low;i<=high;++i){
           result=result+S[i];
       }
       return result;
    }
};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends
