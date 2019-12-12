#include<iostream>
#include<climits>
using namespace std;

int getCurrency(int amt, int *coin, int n){
	if(amt==0){
		return amt;
	}
	int ans = INT_MAX;
	for (int i = 0; i <n; i++)
	{
		if((amt-coin[i])>=0){
			ans = min(ans, 1 + getCurrency(amt-coin[i], coin, n));
		}
		/* code */
	}
	return ans;
}

int top_down(int amt, int* coin, int n, int* dp){
	if(amt==0){
		dp[amt]=0;
		return amt;
	}
	if(dp[amt]!=-1){
		return dp[amt];
	}
	int ans = INT_MAX;
	for (int i = 0; i < n; i++)
	{
		if((amt-coin[i])>=0){
			ans = min(ans, 1 + top_down(amt-coin[i], coin, n, dp));
		}
		/* code */
	}
	dp[amt] = ans;
	return dp[amt];

}

int bottomUp(int amt, int* coin, int n){
	int dp[10000];
	dp[0]=0;
	for (int i = 0; i <n; i++)
	{
		dp[coin[i]] = 1;
		/* code */
	}
	//or you can initialise the entire dp array with INT_MAX
	int ans = INT_MAX;
	for (int j = 1; j <=amt;j++)
	{
		ans = INT_MAX;
		for (int i = 0; i < n; i++)
		{
			if(j-coin[i]>=0){
				ans = min(ans, 1 + dp[j-coin[i]]);
			}
		
		/* code */
		}
		dp[j]=ans;//dp stores the optimised way to store each amount
		/* code */
	}
	for (int i = 0; i <=amt; ++i)
	{
		cout<<dp[i]<<" ";
		/* code */
	}
	cout<<"\n";
	
	return dp[amt];
}
int bottom_up_class(int amount, int* coin, int n){
	int dp[1000];
	for (int i = 0; i <=amount; i++)
	{
		dp[i]=INT_MAX;
		/* code */
	}
	dp[0]=0;
	int ans =INT_MAX;
	for (int i = 1; i <=amount; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if(i-coin[j]>=0){
				dp[i] = min(dp[i], 1 + dp[i-coin[j]]);
			}
			/* code */
		}
		//dp[i] = ans;
		/* code */
	}
	return dp[amount];
}

int main(int argc, char const *argv[])
{
	int arr[]={1, 7, 10};
	int n = sizeof(arr)/sizeof(int);
	int amount;
	cin>>amount;
	cout<<getCurrency(amount, arr, n)<<"\n";
	int dp[10000];
	for (int i = 0; i <= amount; i++)
	{
		dp[i]=-1;
		/* code */
	}
	cout<<top_down(amount, arr, n, dp)<<"\n";
	cout<<"bottom up: "<<bottomUp(amount, arr, n)<<"\n";
	cout<<"bottom up class: "<<bottom_up_class(amount, arr, n)<<"\n";
	return 0;
}
//2,3,5