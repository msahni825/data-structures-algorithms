class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n=points.size();
        if(n<=2){
            return n;
        }
        int ans=2;
        for(int i=0;i<n;i++){
            unordered_map<double,int> mp;
            for(int j=i+1;j<n;j++){
                double a=points[j][0]-points[i][0]; //y
                double b=points[j][1]-points[i][1]; //x
                if(b!=0){
                    mp[a/b]++;
                }
                else{
                    mp[(double)INT_MAX]++;
                }
            }
            for(auto i:mp){
                ans=max(ans,1+i.second);
            }
        }
        return ans;
    }
};
