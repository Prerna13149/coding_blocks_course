#include<iostream>
using namespace std;
int get_max(int wts[], int profit[], int i, int n1, int capacity){
	if(i==n1){
		return 0;
	}
	if(capacity==0){
		return 0;
	}
	int ans1=0;
	if(wts[i]<=capacity){//can insert only when it is less than capacity
		ans1 = profit[i] + get_max(wts, profit, i+1, n1, capacity-wts[i]);
	}
	
	int ans2 = get_max(wts, profit, i+1, n1, capacity);
	return max(ans1, ans2);
}

int bottomup(int wts[], int profit[], int i, int n, int capacity){
	int dp[n+1][capacity+1]={0};
	for (int x = 0; x <= capacity; x++)
	{
		dp[0][x]=0;
		/* code */
	}
	for (int y = 0; y <= n; y++)
	{
		dp[y][0]=0;
		/* code */
	}
	int inc=0;
	int exc=0;
	for (int x = 1; x <= capacity; x++)
	{
		for (int y = 1; y <= n; y++)
		{
			if(wts[y]<=x){
				inc = profit[y]+ dp[y-1][x-wts[y]];
			}
			exc = dp[y-1][x];
			dp[y][x] = max(inc, exc);
			/* code */
		}
		/* code */
	}
	return dp[n][capacity];

}

int main(int argc, char const *argv[])
{
	// int wts[]={2,2,3,1};
	// int profit[]={10, 20, 10, 15};
	int wts[]={7,4,4};
	int profit[]={15, 8, 8};
	int capacity;
	cin>>capacity;
	cout<<get_max(wts, profit, 0, 3, capacity)<<"\n";
	cout<<bottomup(wts, profit, 0, 3, capacity)<<"\n";

	return 0;
}