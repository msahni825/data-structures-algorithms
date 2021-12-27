class Solution {
public:
    int findComplement(int num) {
        vector<int> bits;
        int ans=0;
        while(num!=0){
            int bit=num%2;
            bits.push_back(bit);
            num=num/2;
        }
        for(int i=0;i<bits.size();i++){
            if(bits[i]==1){
                bits[i]=0;
            }
            else{
                bits[i]=1;
            }
        }
            for(int i=bits.size()-1;i>=0;i--){
                ans=ans*2+bits[i];
            }  
        return ans;
    }
};
