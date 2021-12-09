class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        int len=arr.size();
        if(arr[start]==0){
            return true;
        }
        if(arr[start]==-1){
            return false;
        }
        int leftside=start-arr[start];
        int rightside=start+arr[start];
        arr[start]=-1;
        return rightside=(rightside<len && canReach(arr,rightside)) || (leftside>=0 && canReach(arr,leftside));
    }
};
