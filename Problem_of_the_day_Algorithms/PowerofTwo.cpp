class Solution {
public:
    bool isPowerOfTwo(int n) {
        vector<int> bits;
        if(n==1){
            return true;
        }
        else if(n%2){
            //odd
            return false;
        }
        else{
            int digit;
            //n is even, now check for power of 2
            while(n){
                digit=n%2;
                n=n/2;
                bits.push_back(digit);
            }   
        }
        int onecount=0;
        for(int i=0;i<bits.size();i++){
            cout<<bits[i]<<" ";
            if(bits[i]==1){
                onecount++;
            }
        }
        if(onecount==1){
            return true;
        }
        return false;
    }
};
