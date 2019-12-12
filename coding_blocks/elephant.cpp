#include<iostream>
using namespace std;


int getWays(int i, int j){
	if(i==0 && j==0){
		return 1;
	}
	int ans = 0;
	
	for(int k = 1;k <= i; k++){
		ans = ans + getWays(i-k, j);
	}
	for (int k = 1; k <=j ; k++)
	{
		ans = ans + getWays(i, j-k);
		/* code */
	}
	return ans;
}
int main(int argc, char const *argv[])
{
	int i;
	int j;
	cin>>i>>j;
	int res;
	res = getWays(i, j);
	
	cout<<res<<"\n";
	return 0;
}