// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

// A : given string to search
// B : vector of available strings

class Solution
{
public:
    int dictPresent(string w, vector<string> &B){
        for(int i=0;i<B.size();i++){
            if(B[i].compare(w)==0){
                return true;
            }
        }
        return false;
    }
    int wordBreak(string A, vector<string> &B) {
        //code here
        int sz=A.size();
        if(sz==0){
            return true;
        }
        bool wb[sz+1];
        memset(wb,0,sizeof(wb));
        for(int i=1;i<=sz;i++){
            if(wb[i]==false && dictPresent(A.substr(0,i),B)){
                wb[i]=true;
            }
            if(wb[i]==true){
                if(i==sz){
                    return true;
                }
                for(int j=i+1;j<=sz;j++){
                    if(wb[j]==false && dictPresent(A.substr(i,j-i),B)){
                        wb[j]=true;
                    }
                    if(j==sz && wb[j]==true){
                        return true;
                    }
                }
            }
        }
       return false; 
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
}
  // } Driver Code Ends
