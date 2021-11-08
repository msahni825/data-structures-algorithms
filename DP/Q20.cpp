class Solution {
public:
    int numTrees(int n) {
        
        if(n==0){
            return 1;
        }
        if(n==1 || n==2){
            return n;
        }
        int arr[n+1];       
        arr[0]=1;
        arr[1]=1;
        arr[2]=2;
        for(int i=3;i<=n;i++){
            int answer=0;
            int x=i;
            for(int j=0;j<x;j++){
                int first=j;
                int second=x-j-1;
                answer+=arr[first]*arr[second];
                
            }
            arr[i]=answer;
        }
        return arr[n];
    }
};
