#include<iostream>
#include<climits>
using namespace std;

int minStep(int n){
	if(n==1){
		return 0;
	}
	int opt1 = 1 + minStep(n-1);
	int opt2 = INT_MAX;
	int opt3 = INT_MAX;
	if(n%2==0){
		opt2 = 1 + minStep(n/2);
	}
	if(n%3==0){
		opt3 = 1 + minStep(n/3);
	}
	return min(opt1, min(opt2, opt3));

}
int minStep_topdown(int n, int * dp){
	if(n==1){
		dp[n]=0;
		return 0;
	}
	if(dp[n]!=-1){
		return dp[n];
	}
	int opt1 = 1 + minStep_topdown(n-1, dp);
	int opt2 = INT_MAX;
	int opt3 = INT_MAX;
	if(n%2==0){
		opt2 = 1 + minStep_topdown(n/2, dp);
	}
	if(n%3==0){
		opt3 = 1 + minStep_topdown(n/3, dp);
	}
	int ans = min(opt1, min(opt2, opt3));
	dp[n] = ans;
	return dp[n];
}
int minStep_bottomup(int n){
	int dp[10000];
	//dp[0]=0;
	dp[1]=0;
	//int i=2;
	for (int i = 2; i <=n; i++)
	{
		int op1 = 1 + dp[i-1];
		int op2 = INT_MAX;
		int op3 = INT_MAX;
		if(i%2==0){
			op2 = 1 + dp[i/2];
		}
		if(i%3==0){
			op3 = 1 + dp[i/3];
		}
		dp[i] = min(op1, min(op2, op3));
		/* code */
	}
	return dp[n];
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	cout<<minStep(n)<<"\n";
	int dp[100000];
	for (int i = 0; i <=n; i++)
	{
		dp[i] = -1;
		/* code */
	}
	cout<<"top down: "<<minStep_topdown(n, dp)<<"\n";
	cout<<"bottom up: "<<minStep_bottomup(n)<<"\n";
	return 0;
}