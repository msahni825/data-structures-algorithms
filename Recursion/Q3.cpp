/*Recursive Multiply: Write a recursive function to multiply two positive integers without using the
*operator.You can use addition, subtraction, and bit shifting, but you should minimize the number
of those operations.*/
/*8*7=(8+8+8+8)+(8+8)+(8)
	111000 */

/*soln#1:	O(n^2)  | visualize as grid*/
int minProdhelper1(int smaller,int bigger){
	if(smaller==0){
		return 0;
	}
	else if(smaller==1){
		return bigger;
	}
	//divide by 2
	int s=smaller>>1;
	//compute half if even double it, if uneven compute otehr half
	int side1=minProdhelper1(s,bigger);
	int side2=side1;
	if(smaller%2==1){
		side2=minProdhelper1(smaller-s,bigger);
	}
	return side1+side2;
}
int minProduct1(int a,int b){
	int bigger=a<b?b:a;
	int smaller=a<b?a:b;
	return minProdhelper1(smaller,bigger);
}


/*soln#2: 	O(n)    | using memoization*/
int minProdhelper2(int smaller,int bigger,int memo[]){
	if(smaller==0){
		return 0;
	}
	else if(smaller==1){
		return bigger;
	}
	else if(memo[smaller]>0){
		return memo[smaller];
	}
	int s=smaller>>1;
	int side1=minProdhelper2(s,bigger,memo);
	int side2=side1;
	if(smaller%2==1){
		side2=minProdhelper2(smaller-s,bigger,memo);
	}
	/*sum and cache*/
	memo[smaller]=side1+side2;
	return memo[smaller];
}
int minProduct2(int a,int b){
	int bigger=a<b?b:a;
	int smaller=a<b?a:b;
	int memo[smaller+1];
	return minProdhelper2(smaller,bigger,memo);
}
/*soln#3:	O(lgs)  | s:smaller of the 2 numbers */
int minProdhelper3(int smaller,int bigger){
	if(smaller==0){
		return 0;
	}
	else if(smaller==1){
		return bigger;
	}
	int s=smaller>>1;
	int halfProd=minProdhelper3(s,bigger);
	if(smaller%2==0){
		return halfProd+halfProd;
	}
	else{
		return halfProd+halfProd+bigger;
	}
}
int minProduct3(int a,int b){
	int bigger=a<b?b:a;
	int smaller=a<b?a:b;
	return minProdhelper3(smaller,bigger);
}
#include<bits/stdc++.h>
using namespace std;

int main(){
	int a;
	int b;
	int ans=0;
	cout<<"enter a and b: "<<endl;
	cin>>a;
	cin>>b;
	//ans=minProduct1(a,b);
	//cout<<ans;
	//ans=minProduct2(a,b);
	//cout<<ans;
	ans=minProduct3(a,b);
	cout<<ans;
	
	return 0;
}
