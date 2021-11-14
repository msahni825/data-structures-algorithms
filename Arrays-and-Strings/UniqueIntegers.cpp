class Solution {
public:
    vector<int> sumZero(int n) {
        int mid=0;
        int k=1;
        vector<int> result;
        result.push_back(0);
        if(n%2){
            //n is odd
            mid=(n-1)/2;
            while(mid--){
                result.push_back(-k);
                result.push_back(k++);
            }
        }
        else{
            //n is even
            mid=n/2;
            result.clear();
            while(mid--){
                result.push_back(-k);
                result.push_back(k++); 
            }
        }
        return result;
    }
};
