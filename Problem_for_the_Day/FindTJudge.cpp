class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        //int n=trust.size();
        vector<int> deg(n+1);
        for(int i=0;i<trust.size();i++){
            deg[trust[i][0]]--; //in degree
            deg[trust[i][1]]++; //out degree
        }
        for(int i=1;i<=n;i++){
            if(deg[i]==n-1){
                return i;
            }
        }
        return -1;
    }
};
