/*A. Beautiful Matrix*/
#include<bits/stdc++.h>
using namespace std;

void constructBMatrix(int matrix[6][6],int n){
	pair<int,int> p1;
	pair<int,int> p2;
	p2.first=3;
	p2.second=3;
	int ans=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(matrix[i][j]==1){
//				cout<<i<<endl;
//				cout<<j<<endl;
				p1.first=i;
				p1.second=j;
			}
		}
	}
	ans=(abs(p1.first-p2.first))+(abs(p1.second-p2.second));
	cout<<ans<<"\n";
}
int main(){
	int n=5;
	int matrix[6][6];
	//cout<<"enter 5*5 matrix: "<<"\n";
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>matrix[i][j];
		}
	}
	constructBMatrix(matrix,n);
	return 0;
}
