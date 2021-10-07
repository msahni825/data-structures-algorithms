class Solution {
public:
    void ff(vector<vector<int>>& image, int sr, int sc, int &newc, int m){
        if(sr<0 || sc<0 || sr>=image.size() || sc>=image[0].size() || image[sr][sc]!=m){
            return;
        }
        image[sr][sc]=newc;
        ff(image,sr+1,sc,newc,m);
        ff(image,sr,sc+1,newc,m);
        ff(image,sr-1,sc,newc,m);
        ff(image,sr,sc-1,newc,m);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        vector<vector<int>> result;
        if(newColor==image[sr][sc]){
            return image;
        }
        ff(image,sr,sc,newColor,image[sr][sc]);
        // for(int i=sr;i<image.size();i++){
        //     for(int j=sc;j<image[0].size();j++){
        //         result[sr][sc]=newColor;
        //     }
        // }
        return result;
    }
};
