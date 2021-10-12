class Solution {
public:
    double myPow(double x, int n) {
        double result=1;
        long long nn=n;
        bool flag=false;
        if(nn<0){
            nn=-1*nn;
            flag=true;
        }
        while(nn>0){
            if(nn%2==1){
                //odd element
                result=result*x;
                nn--;
            }
            x=x*x;
            nn=nn/2;
        }
        if(flag){
            return 1.0*1/result;
        }
        // if(n>0){
        //      while(n--){
        //         result=result*x;
        //     }     
        // }
        // else{
        //     long newn=abs(n);
        //     while(newn--){
        //         result=result*x;
        //     }
        //     result=1/result;
        // }
        return result;
    }
};
