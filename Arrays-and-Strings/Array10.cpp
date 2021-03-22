/*				MAXIMUM SUBARRAY
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.

Input: nums = [1]
Output: 1	*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*TIME: O(n) |  SPACE: O(1)*/
void maxSubarray(int arr[],int s){
	int maxSum=INT_MIN;
	int currMax=0;
	if(s==1){
		cout<<"Max sum: "<<endl;
		cout<<arr[0];
	}
	for(int i=0;i<s;i++){
		currMax=max(arr[i],(arr[i]+currMax));
		if(maxSum<currMax){
			maxSum=currMax;
		}
	}
	cout<<"Max Sum: "<<" "<<maxSum<<endl;		
}

int main(){
	int s;
	cout<<"Enter size of array: "<<endl;
	cin>>s;
	int arr[s+1];
	cout<<"Enetr elements: "<<endl;
	for(int i=0;i<s;i++){
		cin>>arr[i];
	}
	maxSubarray(arr,s);
	return 0;
}
