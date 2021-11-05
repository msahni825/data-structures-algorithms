class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        //Brute force: O(N^2)
        //Optimized App: Two pointer [O(N+M), O(1)]
        /* 4 5 9        |   4->1, 5->1, 9->1
           4 4 8 9 9    |   4->2, 8->1, 9->2*/
        
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        int n1=nums1.size();
        int n2=nums2.size();
        int i=0;
        int j=0;
        while(i<n1 && j<n2){
            if(nums1[i]>nums2[j]){
                j++;
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else if(nums1[i]==nums2[j]){
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        return ans;
//         map<int,int> mp1;
//         map<int,int> mp2;   
//         for(int i=0;i<n1;i++){
//             mp1[nums1[i]]++;
//         }
//         for(int j=0;j<n2;j++){
//             mp2[nums2[j]]++;
//         }    
//         int x=0;
//         int n1=nums1.size();
//         int n2=nums2.size();
//         for(int i=0;i<n1;i++){
//             for(int j=0;j<n2;j++){
//                 if(x<n2 && nums1[i]==nums2[j]){
//                     cout<<"intersection ele: "<<nums2[j]<<"\n";
//                     ans.push_back(nums2[j]);
//                     x++;
//                     break;
//                 }
//             }
//         }
//       return ans;
    }
};
