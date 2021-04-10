/*Robot in a grid*/
#include<bits/stdc++.h>
using namespace std;
#define r 3
#define c 4
/*brute force: O(2^r+c) |  r+c steps & 2 choices to make at each step 
OPTIMIZED: time and space complexity: O(rc) */
void printMatrix(bool maze[r][c]){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<maze[i][j]<<" ";
		}
		cout<<"\n";
	}
}
void printPath(vector<pair<int,int> > path){
	for(int i=0;i<path.size();i++){
		cout<<path[i].first<<" ";
		cout<<path[i].second<<" ";
	}
	cout<<"\n";
}
bool getPath1(bool maze[r][c], int row, int col, vector<pair<int,int> > path, map<pair<int,int>,bool> cache ){
	//cout<<"maze value: "<<maze[r-1][c-1];
	cout<<"\n";
	if(row<0 || col<0){
		cout<<"out of bounds!"<<"\n";
		return 0;
	}
	/*Point p(row,col)*/
	pair<int,int> p;
	if(cache.find(p)!=cache.end()){
		/*key is present*/
		return 1;
	}
	bool isatOrigin = (row==0) && (col==0);
	bool success=1;
	/*if there's a path from start to my current location, add my location*/
	if(isatOrigin || getPath1(maze,row,col-1,path,cache) || getPath1(maze,row-1,col,path,cache)){
		path.push_back(p);
		success=1;
	}
	cache.insert({p,success});
	printPath(path);
	return success;
}

/*pair<int,int> :: Point(row,col)*/
vector<pair<int,int> > getPath(bool maze[r][c]) 
{
	if(maze==NULL){
		cout<<" NA "<<"\n";
	}
	vector<pair<int,int> > path;
	map<pair<int,int>,bool> cache;
	int lastrow=r-1;
	int lastcol=c-1;
	if(getPath1(maze,lastrow,lastcol,path,cache)){
		printPath(path);
		return path;
	}	
}
int main(){
	bool maze[r][c]={{1,1,1,1},
					 {1,1,1,1},
					 {1,1,1,1}};
	printMatrix(maze);	
	getPath(maze);
	return 0;
}
