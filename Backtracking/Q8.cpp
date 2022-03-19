class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int rep=0;
        cout<<rep^rep<<"\n";
        cout<<rep^1<<"\n";
        cout<<"****";
        for(auto e:nums){
            rep^=e;
        }
        return rep;
    }
};
/*
1. SORTING
time: O(nlgn)
space:O(1)

2. HASH-MAP
time: O(n) 
space:O(n)

3. BIT MANIPULATION
time: O(n)
space:O(1)
**********
position doesn't matter!

(A^A)   =0
(A^B^A) =B
(A^A^B) =B
**********

4. SUM OF ELEMENTS

time: O(n)
space:O(n)
*/
