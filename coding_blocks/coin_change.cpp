#include<iostream>
#include<climits>
using namespace std;

int findWays(int amt, int coins[], int n){
	if(amt==0){
		return 1;
	}
	if(amt<0){
		return 0;
	}
	int op1 = 0;
	int ct = 0;
	for (int i = 0; i < n; i++)
	{
		if(amt-coins[i]>=0){
			op1 = findWays(amt-coins[i], coins, n);
		}
		else{
			op1 = 0;
		}
		//cout<<op1<<" ";
		if(op1>0){
			ct++;
		}
		
		/* code */
	}
	return ct;

}

int findWays2(int amt,  int i, int coins[], int n){
	if(amt == 0){
		return 1;
	}
	if(i==n){
		return 0;
	}
	int op1 = 0;
	int op2;
	if(amt-coins[i] >= 0){
		op1 = findWays2(amt-coins[i], i+1, coins, n);	
	}	
	op2 = findWays2(amt, i+1, coins, n);
	return op1 + op2;
}

// int main(int argc, char const *argv[])
// {
// 	int amt;
// 	int n;
// 	cin>>amt>>n;
// 	int coins[1000];
// 	for (int i = 0; i < n; i++)
// 	{
// 		cin>>coins[i];
// 		/* code */
// 	}
// 	cout<<findWays(amt, coins, n)<<"\n";
// 	return 0;
// }

int main(int argc, char const *argv[])
{
	int test;
	cin>>test;
	int j=0;
	while(j<test){
		int n;
		cin>>n;
		int arr[1000];
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
			/* code */
		}
		int amt;
		cin>>amt;
		cout<<findWays2(amt, 0, arr, n)<<"\n";
		j++;
	}
	return 0;
}