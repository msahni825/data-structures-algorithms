class Solution {
public:
    int findKthNumber(int m, int n, int k) {
        int result=0;
        int low=0;
        int high=m*n;
        while(low<high){
            int mid=(low+high)/2;
            int count=0;
            for(int i=1;i<=m;i++){
                int val=0;
                if(n < mid/i){
                    val=n;
                }
                else{
                    val=mid/i;
                }
                count+=val;
                //count+=n < mid/i ? n: mid/i; 
            }
            if(count>=k){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};
