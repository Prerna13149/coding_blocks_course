#include <iostream>
#include <queue>
#include <cstdlib>

using namespace std;

int topdown_catalan(int n, int dp[]){
	if(n==0){
		dp[0] = 1;
		return dp[n];
	}
	if(dp[n]!=0){
		return dp[n];
	}
	int sum =0;
	for (int i = 1; i <=n; i++)
	{
		sum = sum + (topdown_catalan(i-1, dp) * topdown_catalan(n-i, dp));
		/* code */
	}
	dp[n] = sum;
	return sum;

}
int catalan(int n){//this has overlapping sum, so use dp
	if(n==0){
		return 1;
	}
	int sum =0;
	for (int i = 1; i <=n; i++)
	{
		sum = sum + (catalan(i-1) * catalan(n-i));
		/* code */
	}
	return sum;
}
int main(int argc, char const *argv[])
{
	int nodes;
	cin>>nodes;
	cout<<catalan(nodes)<<"\n";
	int dp[1000];
	for (int i = 0; i <= nodes; i++)
	{
		dp[i]=0;
		/* code */
	}
	cout<<topdown_catalan(nodes, dp)<<"\n";
	return 0;
}