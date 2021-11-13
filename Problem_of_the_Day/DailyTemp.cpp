class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result;
        stack<pair<int,int>> stk;
        int n=temperatures.size();
        //start from the end of the array
        for(int i=n-1;i>-1;){
            if(stk.empty()){
                result.push_back(0);
                stk.push({temperatures[i],i});
                i--;
            }
            else if(stk.top().first>temperatures[i]){
                int diff=stk.top().second-i;
                result.push_back(diff);
                stk.push({temperatures[i],i});
                i--;
            }
            else{
                //dont do i--
                stk.pop();   
            }
        }
        reverse(result.begin(),result.end());
        return result;
    }
};
