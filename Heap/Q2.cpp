class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> answer(k);
        priority_queue<vector<int>> maxHp;
        //constructing max heap
        for(auto &p:points){
            int x=p[0];
            int y=p[1];
            maxHp.push({x*x+y*y,x,y});
            if(maxHp.size()>k){
                maxHp.pop();
            }
        }
        for(int i=0;i<k;i++){
            vector<int> top=maxHp.top();
            maxHp.pop();
            answer[i]={top[1],top[2]};
        }
        return answer;
    }
};
/*
1. declaring priority queue(for max heap)
2. maintain a max heap of size k(which has top k smallest elements)
3. TIME: O(NlgK)
4. Space: O(K)
*/
