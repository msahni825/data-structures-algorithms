/*C: A-B Palindrome*/
#include<bits/stdc++.h>
using namespace std;

/*case left: s[0]=='?' || s[s.size()-1]=='?' */
void constructPalindrome(string s,int a,int b){
	/*4 4 	|	01?????0*/
	int any=0;
	int minL=0;
	int maxR=s.length()-1;
	if(a%2!=0 && b%2!=0){
		/*a: odd | b:odd --> -1*/
		cout<<-1<<"\n";
		return;
	}
	/*a=0,b=1,s=0*/
	if(a==0 && s[0]=='0' || b==0 && s[0]=='1'){
		cout<<-1<<"\n";
		return;
	}
	/*a=1,b=0,s=?*/
	if(a==1 && b==0 && s[0]=='?'){
		s[0]='0';
	}
	if(a==0 && b==1 && s[0]=='?'){
		s[0]='1';
	}
	while(minL<=maxR){
		if(minL==maxR){
			if(s[minL]=='?' && a>0){
				s[minL]='0';
			}
			else if(s[minL]=='?' && b>0){
				s[minL]='1';
			}
		}
		if(s[minL]=='0' && s[maxR]=='1'){
			cout<<-1<<"\n";
			return;
		}
		else if(s[minL]=='0' && s[maxR]=='0'){
			a=a-2;
		}
		else if(s[minL]=='1' && s[maxR]=='1'){
			b=b-2;
		}
		else if(s[minL]=='0' && s[maxR]=='?'){
			s[maxR]='0';
			a=a-1;
		}
		else if(s[minL]=='1' && s[maxR]=='?'){
			s[maxR]='1';
			b=b-1;
		}
		else if(s[minL]=='?' && s[maxR]=='0'){
			s[minL]='0';
			a=a-1;
		}
		else if(s[minL]=='?' && s[maxR]=='1'){
			s[minL]='1';
			b=b-1;
		}
		/*a=2,b=2 | ?00?*/
		else if(s[minL]=='?' && s[maxR]=='?'){
			any++;
			if(a>1){
				s[minL]='0';
				s[maxR]='0';
				a=a-2;
			}
			else if(b>1){
				s[minL]='1';
				s[maxR]='1';
				b=b-2;
			}
			/*check a and b and accordingly add 0s and 1s*/
		}
		minL++;
		maxR--;
	}
	for(int i=0;i<s.length();i++){
		cout<<s[i];
	}
	cout<<"\n";
}
/*
int validPalindrome(string s,int a,int b){
	int ans=-1;
	if(a==1 && b==1){
		cout<<ans<<"\n";
		return ans;
	}
	else if(a%2==1 && b%2==1){
		cout<<ans<<"\n";
		return ans;
	}
	else{
		int size=a+b;
		int qcount=0;
		int zcount=0;
		int ocount=0;
		for(int i=0;i<size;i++){
			if(s[i]=='?'){
				qcount++;
			}
			else if(s[i]=='0'){
				zcount++;
			}
			else if(s[i]=='1'){
				ocount++;
			}
		}
		if(qcount==0){
			cout<<ans<<"\n";
			return ans;
		}
		for(int j=0;j<size;j++){
			if(s[j]==s[size-j-1]){
				continue;	
			}
		}
	}	
}*/
int main()
{
	int t;
	int a;
	int b;
	string s="";
	cout<<"enter t: "<<"\n";
	cin>>t;
	while(t--){
		cout<<"enter a and b: "<<"\n";
		cin>>a;
		cin>>b;
		cout<<"enter s: "<<"\n";
		cin>>s;
	//	validPalindrome(s,a,b);
		constructPalindrome(s,a,b);
	}
	return 0;
}
