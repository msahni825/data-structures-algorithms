/* sort 0s and 1s

input string 
[0,1,1,1,0,0,1,0,1]   
output string
[0 0 0 0 1 1 1 1 1]	 
   
- Time complexity O(n)
- Space complexity O(1)

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n=9;
	int input[9]={0,1,1,1,0,0,1,0,1};
	for(int i=0;i<9;i++){
		cout<<input[i]<<" ";
	}
	cout<<"\n";
	int left=0;
	int right=n-1;
	while(left<=right){
		if(input[left]>input[right]){
			//swap
			swap(input[left],input[right]);
			left++;
			right--;
		}
		else if(input[left]<input[right]){
			right--;
			left++;
		}
		else if(input[left]==input[right] && input[left]==1){
			right--;
		}
		else{
			left++;
			right--;
		}
	}
	for(int i=0;i<9;i++){
		cout<<input[i]<<" ";
	}
	return 0;
}

