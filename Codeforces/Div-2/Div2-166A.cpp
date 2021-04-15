/*A. Beautiful Year*/
#include<bits/stdc++.h>
#include<string>
using namespace std;

void findYear(int num){
	/*print min year num strictly larger than y and all its digits are distinct*/
	string str;
	for(int i=num+1;;i++){
		stringstream ss;  
  		ss << i;  
  		ss >> str; 
		/*convert string to set using STL*/
		set<int> distinctnum(str.begin(),str.end());
		if(str.size()==distinctnum.size()){
			cout<<i<<"\n";
			break;	
		}
	}
	/*int d;
	int count=0;
	string ans="";
	int answer;
	vector<int> digits;
	/*while(num>0){
		d=num%10;
		digits.push_back(d);
		num=num/10;
		count++;
	}
	reverse(digits.begin(),digits.end());
	int sz=digits.size();
	if(digits[sz-1]!=9){
		digits[sz-1]+=1;
	}
	cout<<digits[sz-1]<<endl;
	for(int i=0;i<3;i++){
		if(digits[i]==digits[sz-1]){
			cout<<"not distinct digits!"<<endl;
		}
		else{
			for(int i=0;i<digits.size();i++){
				ans+=(char)digits[i];
			}
		}
		cout<<answer<<"\n";
	}*/
}
int main(){
	int num;
	/*1000<num<9000*/
	//cout<<"enter num: "<<"\n";
	cin>>num;
	findYear(num);
	return 0;
}
