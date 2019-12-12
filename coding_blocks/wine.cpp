#include<iostream>
#include<climits>
using namespace std;

int wine_profit(int *wine, int n, int day, int start, int end){
	if(start>end){
		return 0;
	}
	int op1 = wine[start]*day + wine_profit(wine, n, day+1, start+1, end);
	int op2 = wine[end]*day + wine_profit(wine, n, day+1, start, end-1);
	return max(op1, op2);
}

int wine_profit_topdown(int *wine, int day, int start, int end, int dp[100][100]){
	if(start>end){
		dp[start][end]=0;
		return 0;
	}
	if(dp[start][end]!=-1){
		return dp[start][end];
	}
	int op1 = wine[start]*day + wine_profit_topdown(wine, day+1, start+1, end, dp);
	int op2 = wine[end]*day + wine_profit_topdown(wine,day+1, start, end-1, dp);
	dp[start][end] = max(op1, op2);
	return dp[start][end];
}

int wine_profit_bottomup(int *wine, int n){
	int dp[100][100]={0};
	int len = n;//len=day
	int day = n;
	for (int i = 0; i < len; i++)
	{
		dp[i][i] = wine[i]*len;
		/* code */
	}
	day--;
	for (int len = 2; len <=n ; len++)
	{
		int i=0;
		int maxi = n-len;
		while(i<=maxi){
			int j=i+len-1;
			int op1 = wine[i]*day + dp[i+1][j];
	 		int op2 = wine[j]*day + dp[i][j-1];
	 		dp[i][j] = max(op1, op2);
	 		i++;
		}
		day--;
		/* code */
	}
	return dp[0][n-1];
}

int main(int argc, char const *argv[])
{
	int wine[5] = {2, 3, 5, 1, 4};
	int n = 5;
	int day=1;
	cout<<wine_profit(wine, n, day, 0, 4)<<"\n";
	int dp[100][100];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			/* code */
			dp[i][j] = 0;
		}
		
		/* code */
	}
	//cout<<wine_profit_topdown(wine, day, 0, 4, dp)<<"\n";
	cout<<wine_profit_bottomup(wine, 5)<<"\n";
	return 0;
}