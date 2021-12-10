class Solution {
public:
    int numTilings(int n) {
        int modulo=pow(10,9)+7;
        int ans=0;
        if(n<3){
            return n;
        }
        vector<long> domino(n+1,0);
        vector<long> tromino(n+1,0);
        domino[0]=0;
        domino[1]=1;
        domino[2]=2;
        tromino[0]=0;
        tromino[1]=1;
        tromino[2]=2;
        
        for(int i=3;i<=n;i++){
            domino[i]=(domino[i-1]+domino[i-2]+2*tromino[i-2]) % modulo;
            tromino[i]=(tromino[i-1]+domino[i-1]) % modulo;
        }
        return domino[n];
    }
};
