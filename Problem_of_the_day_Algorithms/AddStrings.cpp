class Solution {
public:
    string addStrings(string num1, string num2) {
        int sum=0;
        int carry=0;
        string result="";
        int n1=num1.size()-1;
        int n2=num2.size()-1;
        while(n1>=0 && n2>=0){
            int nn=num1[n1]-'0';
            int mm=num2[n2]-'0';
            sum=nn+mm+carry;
            carry=sum/10;
            sum=sum%10;
            result=result+to_string(sum);
            n1--;
            n2--;
        }
        while(n1>=0){
            int nn=num1[n1]-'0';
            sum=nn+carry;
            carry=sum/10;
            sum=sum%10;
            result=result+to_string(sum);
            n1--;
        }
        while(n2>=0){
            int mm=num2[n2]-'0';
            sum=mm+carry;
            carry=sum/10;
            sum=sum%10;
            result=result+to_string(sum);
            n2--;
        }
        reverse(result.begin(),result.end());
        
        cout<<"carry: "<<carry<<"\n";
        if(carry==1){
            result="1"+result;
        }
        
        // if(n1>=n2){
        //     for(int i=n1-1;i>=0;i--){
        //         result=(num1[i]-'0')+(num2[i]-'0');
        //         cout<<result<<"\n";
        //         //if(result<)
        //     }
        // }
        // else{
        //     for(int j=n2-1;j>=0;j--){
        //         result=(num1[j]-'0')+(num2[j]-'0');
        //         cout<<result<<"\n";
        //     }
        // }
        return result;
    }
};
