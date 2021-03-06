/*1.7 Rotate Matrix: Given an image represented by an NxN matrix, where each pixel in the image is 4 bytes, write a method to rotate the image by 90 degrees. 
Can you do this in place? */
/*[1 2 3	   	[7 4 1
   4 5 6   -->		8 5 2
   7 8 9]	    	9 6 3]
   
  #48 Rotate Image*/
   
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

const int n=3;
//TIME: O(n^2)			SPACE:O(1)		Since we are rotating inplace
void rotateMatrix(vector<vector<int> > input){		
	for(int layer=0;layer<n/2;layer++){
		int first=layer;
		int last=n-1-layer;
		//rotate each layer by n-1 times
		for(int i=first;i<last;i++){
			int offset=i-first;
			//save top
			int top=input[first][i];
			//left->top
			input[first][i]=input[last-offset][first];
			//bottom->left
			input[last-offset][first]=input[last][last-offset];
			//right->bottom
			input[last][last-offset]=input[i][last];
			//top->right
			input[i][last]=top;
		}
	}
	/*LOGIC 2*/
/*	for(int i=0;i<matrix.size()/2;i++){
        swap(matrix[i],matrix[matrix.size()-1-i]);
	}
    for(int i=0;i<matrix.size()-1;i++){
       for(int j=i+1;j<matrix.size();j++){
        	swap(matrix[i][j],matrix[j][i]);
        }
    }*/
	cout<<"Rotated Matrix: "<<endl;
	for(int i=0;i<input.size();i++){
		for(int j=0;j<input[i].size();j++){
			cout<<input[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main(){
	/*[[1 2 3]		[4 5 6]		[7 8 9]]*/
	vector<vector<int> > myVector;

	/* vector<int> (m, 0) means a vector having "m" elements each of value "0".*/	
	vector<int> firstRow(1,1);
	myVector.push_back(firstRow);
	myVector[0].push_back(2);
	myVector[0].push_back(3);
	
	vector<int> secRow(1,4);
	myVector.push_back(secRow);
	myVector[1].push_back(5);
	myVector[1].push_back(6);

	vector<int> thirdRow(1,7);
	myVector.push_back(thirdRow);
	myVector[2].push_back(8);
	myVector[2].push_back(9);
	
	for(int i=0;i<myVector.size();i++){
		for(int j=0;j<myVector[i].size();j++){
			cout<<myVector[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	rotateMatrix(myVector);
	
	return 0;
}
