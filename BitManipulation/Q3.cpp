class Solution {
public:
    int bitwiseComplement(int n) {
        int power2s=2;
        int temp=n;
        while(temp>>1){
            temp>>=1;
            power2s<<=1;
        }
        return power2s -n -1;
    }
};
/*
time: O(log(n))
space:O(1)
*/
