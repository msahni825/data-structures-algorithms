class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //creating MIN HEAP for priority queue
        priority_queue<int,vector<int>,greater<int>> pq;    //descending order
        for(int i=0;i<k;i++){
         //   cout<<"ele:"<<nums[i]<<"\n";
            pq.push(nums[i]);
        }
        for(int i=k;i<nums.size();i++){
            if(nums[i]>=pq.top()){
                pq.pop();
                pq.push(nums[i]);
              //  cout<<"top:"<<pq.top()<<"\n";
            }
        }
        return pq.top();
    }
};
