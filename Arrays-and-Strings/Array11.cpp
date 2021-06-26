/*Move all negative numbers to beginning and positive to end with constant extra space
Inplace: ORDER NOT MAINTAINED

Input:  -12, 11, -13, -5, 6, -7, 5, -3, -6
Output: -12 -13 -5 -7 -3 -6 11 6 5
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int left=0;
	int right=n-1;
	while(left<=right){
		if(arr[left]<0 && arr[right]<0){
			left++;
		}
		else if(arr[left]>0 && arr[right]<0){
			//swap
			int temp=arr[left];
			arr[left]=arr[right];
			arr[right]=temp;
			left++;
			right--;
		}
		else if(arr[left]>0 && arr[right]>0){
			right--;
		}
		else{
			left++;
			right--;
		}
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	return 0;
}
