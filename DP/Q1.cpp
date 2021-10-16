class Solution {
public:
    int fib(int n) {
        int result[31]={0};
        int i=0;
        if(n==0 || n==1){
            return n;
        }
        if(result[n]==0){
            result[n]=fib(n-1)+fib(n-2);   
        }
        return result[n];
    }
};
