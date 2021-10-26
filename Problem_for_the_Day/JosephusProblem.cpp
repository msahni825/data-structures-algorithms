class Solution {
public:
    int findTheWinner(int n, int k) {
        int result=0;
        if(n==1){
            return 1;
        }
        else{
            result=findTheWinner(n-1,k);
            int ans=((result+k-1)%n)+1;
            return ans;
        }
    //    return ans;
    }
};
