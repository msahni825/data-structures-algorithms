class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        vector<vector<int>> result;
        int f=firstList.size();
        int s=secondList.size();
        int i=0;
        int j=0;
            while(i<f && j<s){
                int front=max(firstList[i][0],secondList[j][0]);
                int back=min(firstList[i][1],secondList[j][1]);
                if(back-front>=0){  //find overlapping
                    result.push_back({front,back});
                }
                if(firstList[i][1]<secondList[j][1]){
                    i++;
                }
                else{
                    j++;
                }
            }
        return result;
    }
};
