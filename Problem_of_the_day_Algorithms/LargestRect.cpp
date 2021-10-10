class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        //find max till area is becoming min.
        stack<int> st;
        int maxarea=0;
        int n=heights.size();
        for(int i=0;i<=n;i++){
            while(!st.empty() && (i==n || heights[st.top()]>=heights[i])){
                int ht=heights[st.top()];
                cout<<"ht: "<<ht<<"\n";
                st.pop();
                cout<<"i: "<<i<<"\n";
                int wd=st.empty()?i:(i-st.top()-1);
                cout<<"wd: "<<wd<<"\n";
                //cout<<"**"<<st.top()<<"\n";
                int area=ht*wd;
                cout<<area<<"\n";
                if(area>maxarea){
                    maxarea=area;
                }   
            }
            st.push(i);
        }
        return maxarea;
    }
};
