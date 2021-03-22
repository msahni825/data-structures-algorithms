/*1.8 Zero Matrix: Write an algorithm such that if an element in an MxN matrix is 0, its entire row and column are set to 0. */

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//APPROACH-1:Brute force	TIME:O(NM)	|   SPACE:O(NM) 	
const int m=3;
const int n=3;
//nullify rows
/*	void nullifyRow(int input[][n],int row){
		for(int j=0;j<sizeof(input[0]);j++){
			input[row][j]=0;
		}
	}*/
//nullify columns
/*	void nullifyColumn(int input[m][n], int col){
		for(int i=0;i<sizeof(input);i++){
			input[i][col]=0;	
		}
	}*/
	
//Approach-2: Using row/column to keep track of the cell, using first row/column as a flag | 	TIME:O(NM) 	SPACE: O(1)
void zeroMatrix(int input[m][n]){
	int row=m; 		//row
	int col=n; 		//column
	/*array of 0/1 for all rows & col*/
	bool hasFirstRowZero=false;
	bool hasFirstColZero=false;
	
	for(int i=0;i<col;i++){
		if(input[0][i]==0){
			hasFirstRowZero=true;
			break;
		}
	}
	for(int i=0;i<col;i++){
		if(input[i][0]==0){
			hasFirstColZero=true;
			break;	
		}
	}
	/*if a particular cell is zero, complete row and col is zero so, set the row and col --> 0*/
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(input[i][j]==0){
				input[i][0]=0;
				input[0][j]=0;
			}
		}
	}
	/*if either row/col is zero set the row and col --> 0*/
	for(int i=1;i<row;i++){
		for(int j=1;j<col;j++){
			if(input[i][0]==0 || input[0][j]==0){
				input[i][j]=0;
			}
		}
	}
	/* complete row is made zero | 01,02,03 */
	if(hasFirstRowZero){
		for(int i=0;i<col;i++){
			input[0][i]=0;
		}
	}
	/* complete column is made zero | 10,20,30 */
	if(hasFirstColZero){
		for(int i=0;i<row;i++){
			input[i][0]=0;
		}
	}
	/*output*/
	cout<<"Final Output: "<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<input[i][j]<<" ** ";
		}
		cout<<endl;
	}	 
}
//Approach-3: Bit vector	|		TIME:O(NM)		SPACE:O(N)		Using a bit-vector decreases space by a factor 8

int main(){
	/*int input[m][n];
	int m=3;
	int n=3;
	cin>>m;
	cin>>n;*/
	cout<<"Input matrix"<<endl;
	int input[3][3]={{1,1,1},{1,0,1},{1,1,1}};
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<input[i][j]<<" ";	
		}
		cout<<endl;
	}
	zeroMatrix(input);
	return 0;
}
