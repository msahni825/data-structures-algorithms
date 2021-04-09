/*Triple Step: A child is running up a staircase with n steps and can hop either 1 step, 2 steps, or 3
steps at a time. Implement a method to count how many possible ways the child can run up the stairs.

EX: 	n=4 	[1,1,1,1] | [1,3] | [3,1] | [2,2] | [1,2,1] | [2,1,1] | [1,1,2] 		o/p: 6
EX:		n=3		[1,1,1] | [2,1] | [1,2] | [3] 											o/p: 4

Input: 	n	
Output:	count*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*Memoized approach*/
int countStepsMemo(int n,int memo[]);

int countSteps(int n){
	int memo[n+1];
	for(int i=0;i<=n;i++){
		memo[i]=-1;
	}
	return countStepsMemo(n,memo);	
}
int countStepsMemo(int n, int memo[]){
	if(n<0){
		return 0;
	}
	else if(n==0){
		return 1;
	}
	else if(memo[n]>-1){
		cout<<"last value in memo: "<<memo[n]<<endl;
		return memo[n];
	}
	else{
		memo[n]=countStepsMemo(n-1,memo)+countStepsMemo(n-2,memo)+countStepsMemo(n-3,memo);
	}
	return memo[n];
}
/*Brute force approach*/
//int countSteps(int n){
//	int result=0;
//	if(n<0){
//		return 0;
//	}
//	else if(n==0 || n==1){
//		return 1;
//	}
//	else{
//		result=countSteps(n-1)+countSteps(n-2)+countSteps(n-3);
//	}
//	return result;
//}

int main(){
	int count=0;
	int n;
	cout<<"Enter count value: "<<endl;
	cin>>n;
	count=countSteps(n);
	cout<<"Final count value: "<<endl;
	cout<<count;
	
	return 0;
}
