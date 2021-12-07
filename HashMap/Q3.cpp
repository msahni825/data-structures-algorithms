class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int> res;
        res[n]=1;
        while(true){
            long long int result=0;
            while(n!=0){
                int d=n%10;
                n=n/10;
                result+=pow(d,2);
            }
            if(result==1){
                return true;
            }
            if(res[result]==0){
                res[result]++;
            }
            else{
                return false;
            }
            n=result;
        }
        return false;
    }
};
