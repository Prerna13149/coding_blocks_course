#include<iostream>
using namespace std;
int fib(int n){
	if(n==0||n==1){
		return n;
	}
	return fib(n-1)+fib(n-2);
}

int fib_topdown(int n, int dp[]){
	if(n==0||n==1){
		dp[n]=n;
		return n;
	}
	if(dp[n]!=-1){
		return dp[n];
	}
	int ans = fib_topdown(n-1, dp) + fib_topdown(n-2, dp);
	dp[n] = ans;
	return ans;
}
int fib_bottomup(int n){
	int dp[1000];
	dp[0] = 0;
	dp[1] = 1;
	for(int i=2;i<=n;i++){
		dp[i] = dp[i-1] + dp[i-2];
	}
	return dp[n];
}
int main(){
	int n;
	cin>>n;
	cout<<"Fibonacci recursive: "<<fib(n)<<"\n";
	int dp[10000];
	for(int i=0;i<=n;i++){
		dp[i]=-1;
	}
	cout<<"Fibonacci topdown: "<<fib_topdown(n, dp)<<"\n";
	// for(int i=0;i<=n;i++){
	// 	cout<<dp[i]<<" ";
	// }
	// cout<<"\n";
	cout<<"Fibonacci bottomup: "<<fib_bottomup(n)<<"\n";
	return 0;
}