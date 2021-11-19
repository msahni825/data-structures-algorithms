class Solution {
public:
    int performXOR(vector<int> x_bin, vector<int> y_bin){ 
        int xor_value=0;
        for(int i=0;i<x_bin.size();i++){
                if(x_bin[i]!=y_bin[i]){
                    xor_value++;    
                }
            }
        return xor_value;
    }
    vector<int> convertToBinary(int num){
        vector<int> result;
        while(num>0){
            int val=num%2;
            result.push_back(val);
            num=num/2;
        }
        reverse(result.begin(),result.end());
        return result;
    }
    
    int hammingDistance(int x, int y) {
        int xor_value=0;
        vector<int> x_bin;
        vector<int> y_bin;
        x_bin=convertToBinary(x);
        y_bin=convertToBinary(y);
        if(x_bin.size()==y_bin.size()){
            return performXOR(x_bin,y_bin);
        }
        else if(x_bin.size()>y_bin.size()){
            int diff=x_bin.size()-y_bin.size();
            //append diff zeros to y_bin and perform xor
            reverse(y_bin.begin(),y_bin.end());
            while(diff--){
                y_bin.push_back(0);
            }
            reverse(y_bin.begin(),y_bin.end());
            return performXOR(x_bin,y_bin);
        }
        else{//x_bin.size()<y_bin.size()
            int diff=y_bin.size()-x_bin.size();
            //append diff zeros to x_bin and perform xor
            reverse(x_bin.begin(),x_bin.end());
            while(diff--){
                x_bin.push_back(0);
            }
            reverse(x_bin.begin(),x_bin.end());
            return performXOR(x_bin,y_bin);
        }
        return xor_value;
    }
};
