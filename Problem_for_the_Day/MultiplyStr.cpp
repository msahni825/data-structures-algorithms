class Solution {
public:
    string multiply(string A, string B) {
        int s1=A.size();
        int s2=B.size();
        int product=1;
        int carry=0;
        vector<int> ans((s1+s2),0);
        for(int i=s1-1;i>=0;i--){
            for(int j=s2-1;j>=0;j--){
                product=(A[i]-'0')*(B[j]-'0');
                int sum=product+ans[i+j+1];
                ans[i+j]+=sum/10;
                ans[i+j+1]=sum%10;    
            }
        }
        //convert vector to string
        string s="";
        for(int i=0;i<(s1+s2);i++){
            if(s.length()!=0 || ans[i]!=0){
                s+=(ans[i]+'0');
            }
        }
        if(s.length()==0){
            return "0";
        }
        return s;
	}
};
