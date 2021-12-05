class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int value=0;
        if(left==right){
            return right;
        }
        int k=log2(right-left);
        int high=(left >> (k+1)) & (right >> (k+1)) & 1;
        long long h=0x000000007fffffff;
        if(high){
            return (h<<(k+1)) & left & right;
        }
        else{
            return (h<<min(k+2,31)) & left & right;
        }
    }
};
/*
O(1) time
*/
