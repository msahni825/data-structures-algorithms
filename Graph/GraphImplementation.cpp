/*Implementing Graphs using adjacency list*/
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//an array of lists is used
void addEdge(vector<int > adjlist[],int u,int v){
	adjlist[u].push_back(v);
	adjlist[v].push_back(u);	
}

void printGraph(vector<int > adjlist[],int vertex){
	for(int v=0;v<vertex;v++){
		cout<<"Adjacency list of vertex"<<v<<endl<<"head";
		//error
		for(int i=0;i<adjlist[v].size();i++){
			cout<<"->"<<adjlist[v][i];
		}
		cout<<endl;
	}
}

int main(){
	int vertex=5;
	vector<int > adjlist[vertex];
	addEdge(adjlist,0,1);
	addEdge(adjlist,0,4);
	addEdge(adjlist,1,2);
	addEdge(adjlist,1,3);
	addEdge(adjlist,1,4);
	addEdge(adjlist,2,3);
	addEdge(adjlist,3,4);
	
	printGraph(adjlist,vertex);
	
	return 0;
}
