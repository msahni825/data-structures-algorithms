class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t answer=0;
        for(int i=0;i<32;i++){
            //right shift answer 32 times 
            answer=answer<<1;
            if(n & 1){
                answer++;
            }
            n=n>>1;
        }
        return answer;
    }
};
