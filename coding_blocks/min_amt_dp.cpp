#include<iostream>
#include<climits>
using namespace std;

int getCount(int amt, int coins[], int n){
	if(amt==0){
		return 0;
	}
	int min = INT_MAX;
	int op;
	for (int i = 0; i < n; i++)
	{	
		if(amt-coins[i]>=0){
			op = 1 + getCount(amt-coins[i], coins, n);
		}
		
		if(op < min){
			min = op;
		}
		/* code */
	}
	return min;

}
int getCount_topdown(int amt, int coins[], int n, int dp[]){
	if(amt==0){
		dp[amt] = 0;
		return 0;
	}
	if(dp[amt]!=-1){
		return dp[amt];
	}
	int min = INT_MAX;
	int op;
	for (int i = 0; i < n; i++)
	{	
		if(amt-coins[i]>=0){
			op = 1 + getCount_topdown(amt-coins[i], coins, n, dp);
		}
		
		if(op < min){
			min = op;
		}
		/* code */
	}
	dp[amt] = min;
	return dp[amt];
}
int getCount_bottomup(int amt, int coins[], int n){
	int dp[1000]={0};
	dp[0] = 0;
	dp[1] = 1;
	//int min;
	int op1;
	for (int i = 0; i <n; i++)
	{
		dp[coins[i]] = 1;
		/* code */
	}
	for (int i = 2; i <=amt ; i++)
	{
		//min = INT_MAX;
		op1 = INT_MAX;
		for (int j = 0; j < n; j++)
		{
			
			if(amt-coins[j]>=0){
				op1 = min(op1, 1 + dp[amt-coins[j]]);
			}
			
			/* code */
		}
		dp[i] = op1;
		/* code */
	}
	for (int i = 0; i <=amt; i++)
	{
		cout<<dp[i]<<" ";
		/* code */
	}
	return dp[amt];
}

int main(int argc, char const *argv[])
{
	int coins[]={1, 7, 10};
	int amt = 15;
	cout<<"Min no. of coins needed to create amount: "<<getCount(amt, coins, 3)<<"\n";
	/* code */
	int dp[1000];
	for (int i = 0; i <= amt; i++)
	{
		dp[i]=-1;
		/* code */
	}
	cout<<"Min no. of coins needed to create amount using topdown: "<<getCount_topdown(amt, coins, 3, dp)<<"\n";
	cout<<"Min no. of coins needed to create amount using bottomup: "<<getCount_bottomup(amt, coins, 3)<<"\n";
	return 0;
}