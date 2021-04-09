/*A magic index in an array A [ 0 ••• n -1] is defined to be an index such that A[i] = i. Given a sorted array of distinct integers, write a method to find a magic index,
if one exists, in array A. FOLLOW UP: What if the values are not distinct?*/
#include<bits/stdc++.h>
using namespace std;
/*space: O(1)	|	constant
time: O(lgN)	|	if elements are distinct
time: O(N)		|	modified BINARY SEARCH: search both left & right*/
int findMagicIndex(int arr[],int start,int end){
	if(end<start){
		return -1;
	}
	int mid=start+end/2;
	if(arr[mid]==mid){
		cout<<"magic index: "<<mid<<"\n";
		return mid;
	}
	/*Search left*/
	int leftIndex=min(mid-1,arr[mid]);
	//cout<<"left index: "<<leftIndex<<"\n";
	int left=findMagicIndex(arr,start,leftIndex);
	
	if(left>=0){
		//cout<<"magic index: "<<left<<"\n";
		return left;
	}
	/*Search right*/
	int rightIndex=max(mid+1,arr[mid]);
	int right=findMagicIndex(arr,rightIndex,end);
	
	//cout<<"magic index: "<<right<<"\n";
	return right;
//	else if(arr[mid]<mid){
//		/*recurse on left and right*/
//	}
//	else if(arr[mid]>mid){
//		/*recurse on right and left*/
//	}
}
void findIndex(int arr[]){
	int e=5;
	int s=0;
	findMagicIndex(arr,s,e);
}
int main(){
	int arr[50];
	int n=6;
	cout<<" plz type: 1,1,1,2,3,3 "<<"\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	/*0 1 2 3 4 5
	 1,1,1,2,3,3*/
	findIndex(arr);
	return 0;
}
