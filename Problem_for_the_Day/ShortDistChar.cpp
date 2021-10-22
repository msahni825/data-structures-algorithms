class Solution {
public:
    vector<int> shortestToChar(string s, char ch) {
        vector<int> position;
        vector<int> output;
        int c=0;
        int i=0;
        int index=-1;
        for(int i=0;i<s.size();i++){
            if(s[i]==ch){
                index=i;
                position.push_back(index);
            } 
        }
        for(int i=0;i<s.size();i++){
            int minimum_distance=INT_MAX;
            for(int j=0;j<position.size();j++){
                minimum_distance=min(minimum_distance,abs(i-position[j]));
            }
            output.push_back(minimum_distance);
        }
       //osition.push_back(index);
        // while(i<s.size()){
        //     while(s[i]!=ch){
        //         c++;
        //         i++;
        //         cout<<c<<"\n";
        //     }
        //     i=1;
        //     result.push_back(c);
        // }
        // for(int i=0;i<result.size();i++){
        //    cout<<result[i]<<" "; 
        // }
        return output;
    }
};
