class Solution {
public:
    int maxArea(vector<int>& height) {
        int result=0;
        int left=0;
        int maxarea=INT_MIN;
        int right=height.size()-1;
        while(left<right){
            //if(maxarea<): right-- else: left++
            int minheight=min(height[left],height[right]);
            maxarea=max(maxarea,minheight*abs(left-right));
           // result=max(result,maxarea);
            if(height[left]>height[right]){
                right--;
            }
            else if(height[left]<=height[right]){
                left++;
            }
        }
        return maxarea;
    }
};
