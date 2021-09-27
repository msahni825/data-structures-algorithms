// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

//int max value: 2^31-1

class Solution {
public:
    int firstBadVersion(int n) {
        //  ans=0;
        int low=0;
        int high=n;
        int mid;
        while(low<high){
            mid=(low+(high-low)/2);
            if(isBadVersion(mid)){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        if(isBadVersion(low)){
            return low;
        }
        else{
            return high;
        }
    }
};
