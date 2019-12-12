#include<iostream>
using namespace std;
int topdown(int n, int *dp){
	if(n==0||n==1){
		dp[n] = n;
		return n;
	}
	if(dp[n]!=-1){
		return dp[n];
	}
	int ans = topdown(n-1, dp) + topdown(n-2, dp);
	dp[n] = ans;
	return ans;
}
int bottomup(int n){
	int dp[10000];
	dp[0]=0;
	dp[1]=1;
	for (int i = 2; i <=n ; i++)
	{
		dp[i] = dp[i-1] + dp[i-2];
	}
	return dp[n];

}
int fib(int n){
	if(n==0||n==1){
		return n;
	}
	return fib(n-1) + fib(n-2);
}


int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int dp[10000];
	for (int i = 0; i <=n; i++)
	{
		dp[i]=-1;
		/* code */
	}
	cout<<topdown(n, dp)<<"\n";
	cout<<"bottomup: "<<bottomup(n)<<"\n";
	//cout<<fib(n)<<"\n";
	return 0;
}