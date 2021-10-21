class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int start=i;
            int c=0;
            while(start<n and nums[start]==0){
                start++;
            }
            int end=start;
            int sn=-1; //index of first negative
            int ln=-1; //index of last negative
            while(end<n and nums[end]!=0){
                if(nums[end]<0){
                    c++;
                    if(sn==-1){
                        sn=end;
                    }
                    ln=end;
                }
                end++;
            }
            if(c%2==0){
                ans=max(ans,end-start);
            }
            else{
                //remove first negative
                if(sn!=-1){
                    ans=max(ans,end-sn-1);
                }
                //remove last negative
                if(ln!=-1){
                    ans=max(ans,ln-start);
                }
                
            }
            i=end;
        }
        return ans;
//        int n=nums.size();
//        int max_prod=1;
//        int curr_prod=1; 
//         int c=0;
//        for(int i=0;i<n;i++){
//            if(nums[i]!=0){
//                 curr_prod=curr_prod*nums[i];
//                 c++;
//            }
//            if(curr_prod<max_prod){
               
//            }
//             max_prod=max(curr_prod,max_prod);
//         }
//       return c;
    }
};
