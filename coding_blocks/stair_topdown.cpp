#include<iostream>
using namespace std;

int ways2stair_k(int n, int k){
	if(n==0 || n==1){//there is one way to reach 0
		return 1;
	}
	if(n<0){
		return 0;
	}
	int ans = 0;
	for (int i = 1; i <= k; i++)
	{
		ans = ans + ways2stair_k(n-i, k);

		/* code */
	}
	//cout<<ans<<"\n";
	return ans;

}

int stair_topdown(int n, int* dp, int k){
	if(n==0 || n==1){//there is one way to reach 0
		dp[n]=1;
		return 1;
	}
	if(n<0){
		return 0;
	}
	if(dp[n]!=-1){
		return dp[n];
	}
	int ans = 0;
	for (int i = 1; i <= k; i++)
	{
		ans = ans + stair_topdown(n-i,dp,k);

		/* code */
	}
	dp[n] = ans;
	return dp[n];

}
int stair_bottomup(int n, int k){
	int dp[10000];
	int ans=0;
	dp[0]=1;
	dp[1]=1;
	for (int i = 2; i <=n ; i++)
	{
		ans = 0;
		for (int step = 1; step <= k; step++)
		{
			if(i-step>=0){
				ans = ans + dp[i-step];
			}
			/* code */
		}
		dp[i] = ans;
		/* code */
	}
	return dp[n];

}

int stair_bottomup_optimize(int n, int k){
	int dp[10000];
	int ans=0;
	dp[0]=1;
	dp[1]=1;
	for (int i = 2; i <=n ; i++)//i= stair
	{
		ans = 0;
		if((i-1-k)>=0){
			dp[i] = 2*dp[i-1] - dp[i-1-k];
		}
		else{
			dp[i] = 2*dp[i-1];
		}
		
		/* code */
	}
	return dp[n];

}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	
	int k;
	int dp[10000];
	for (int i = 0; i <=n; i++)
	{
		dp[i]=-1;
		/* code */
	}
	//int k;
	cin>>k;
	cout<<ways2stair_k(n, k)<<"\n";
	cout<<stair_topdown(n, dp, k)<<"\n";
	cout<<"bottom up: "<<stair_bottomup(n, k)<<"\n";
	cout<<"bottom up optimize: "<<stair_bottomup_optimize(n, k)<<"\n";
	//cin>>k;
	//cout<<ways2stair_k(n, k)<<"\n";

	return 0;
}

