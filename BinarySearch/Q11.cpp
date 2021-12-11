class Solution {
public:
    int modulo=pow(10,9)+7;
    
    int nthMagicalNumber(int n, int a, int b) {
        int lcm= (a*b)/__gcd(a,b);
        long long int left=min(a,b);
        long long int right=n*1LL*min(a,b);
        long long int ans=0;
        while(left<=right){
            long long int mid = (left + (right-left)/2);
            long long int position_check = mid/b + mid/a - mid/lcm ;
            if(position_check < n) 
                left = mid +1;
            else{
                ans=mid%modulo;
                right=mid-1;
            }    
        }
        return ans;
    }
};
/*
n=4(4th magical #)
a=2
b=3
magical #s: 2,3,4,6

n=5
a=2
b=4
magical #s: 2,4,6,8,10

n=3
a=6
b=4
magical #s: 4,6,8
*/
