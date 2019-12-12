#include <iostream>
#include<climits>
using namespace std;
int bottomUp(int* coin, int n, int amt){
	int dp[10000];
	dp[0]=0;
	for (int i = 0; i <n; i++)
	{
		dp[coin[i]] = 1;
		/* code */
	}
	//or you can initialise the entire dp array with INT_MAX
	long long int ans =0;
	for (int j = 1; j <=amt;j++)
	{
		ans = 0;//INT_MAX;
		for (int i = 0; i < n; i++)
		{
			if(j-coin[i]>=0){
				ans = ans + 1 + dp[j-coin[i]];
			}
		
		/* code */
		}
		dp[j]=ans%(1000000000 + 7);//dp stores the optimised way to store each amount
		/* code */
	}
	// for (int i = 0; i <=amt; ++i)
	// {
	// 	cout<<dp[i]<<" ";
	// 	/* code */
	// }
	// cout<<"\n";
	
	return dp[amt];
}

int top_down(int* coin, int n, int amt, int* dp){
	if(amt==0){
		dp[amt]=0;
		return amt;
	}
	if(dp[amt]!=0){
		return dp[amt];
	}
	long long int ans = 0;
	for (int i = 0; i < n; i++)
	{
		//cout<<"here";
		if((amt-coin[i])>=0){
			ans = ans + 1 + top_down( coin, n, amt-coin[i], dp);
			//cout<<ans<<" ";
		}
		/* code */
	}
	dp[amt] = ans%(1000000000 + 7);
	return dp[amt];

}

// int main() {
//     int n;
//     cin>>n;
//     int i=0;
//     while(i<n){
//         int a;
//         cin>>a;
//         int coins[100]={0};
//         for(int j=0;j<a;j++){
//             cin>>coins[j];
//         }
//         int amount;
//         cin>>amount;
//         int dp[1000]={0};
//         //cout<<bottomUp(coins, a, amount)<<"\n";
//         cout<<top_down(coins, a, amount, dp)<<"\n";
//         i++;
//     }
// }

int main(int argc, char const *argv[])
{
	int amount;
	cin>>amount;
	int n;
	cin>>n;
	int coins[1000];
	for (int i = 0; i < n; i++)
	{
		cin>>coins[i];
		/* code */
	}
	int dp[1000]={0};
	cout<<bottomUp(coins, n, amount)<<"\n";
	return 0;
}
