#include<iostream>
#include<climits>
using namespace std;

int getMin(int n){
	if(n==1){
		return 0;
	}
	int op1 = 1 + getMin(n-1);
	int op2 = INT_MAX;
	int op3 = INT_MAX;
	if(n%2==0){
		op2 = 1 + getMin(n/2);
	}
	if(n%3==0){
		op3 = 1+ getMin(n/3);
	}
	int ans = min(op1, min(op2, op3));
	return ans;
}
int getMin_topdown(int n, int dp[]){
	if(n==1){
		dp[n]=0;
		return 0;
	}
	if(dp[n]!=-1){
		return dp[n];
	}
	int op1 = 1 + getMin_topdown(n-1, dp);
	int op2 = INT_MAX;
	int op3 = INT_MAX;
	if(n%2==0){
		op2 = 1 + getMin_topdown(n/2, dp);
	}
	if(n%3==0){
		op3 = 1+ getMin_topdown(n/3, dp);
	}
	int ans = min(op1, min(op2, op3));
	dp[n] = ans;
	return ans;
}

int getMin_bottomup(int n){
	int dp[10000]={0};
	dp[0] = 0;
	dp[1] = 0;
	int op1 = INT_MAX;
	int op2 = INT_MAX;
	int op3 = INT_MAX;
	for(int i=2;i<=n;i++){
		op1 = 1 + dp[i-1];
		if(i%2==0){
			op2 = 1 + dp[i/2];
		}
		if(i%3==0){
			op3 = 1 + dp[i/3];
		}
		int ans = min(op1, min(op2, op3));
		dp[i] = ans;
	}
	// for (int i = 0; i <=n; i++)
	// {
	// 	cout<<dp[i]<<" ";
	// 	/* code */
	// }
	return dp[n];
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	cout<<"recursive minstep: "<<getMin(n)<<"\n";
	/* code */
	int dp[1000];
	for (int i = 0; i <= n; i++)
	{
		dp[i] = -1;
		/* code */
	}
	cout<<"topdown minstep: "<<getMin_topdown(n, dp)<<"\n";
	// for (int i = 0; i <=n; i++)
	// {
	// 	cout<<dp[i]<<" ";
	// 	/* code */
	// }
	cout<<"bottomup minstep: "<<getMin_bottomup(n)<<"\n";

	return 0;
}