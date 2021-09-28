// Time complexity: O(nlgn)
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> sq;
        int curr;
        for(int i=0;i<nums.size();i++){
            curr=nums[i]*nums[i];
            sq.push_back(curr);
        }
        sort(sq.begin(),sq.end());
        return sq;
    }
};

// Time complexity: O(n)
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> answer(nums.size());
        int left=0;
        int right=nums.size()-1;
        int k=nums.size()-1;
        // -4 -1 0 3 10
        while(left<=right){
            if(abs(nums[left])>=abs(nums[right])){
                answer[k]=nums[left]*nums[left];
                left++;
            }
        // 0   1   9  16    100
            else{
                answer[k]=nums[right]*nums[right];
                right--;
            }
            k--;
        }
        return answer;
    }
};
