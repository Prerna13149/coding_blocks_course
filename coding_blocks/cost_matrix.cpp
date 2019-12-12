#include<iostream>
using namespace std;


int min_cost(int mat[4][4], int i, int j){
	if(i==0 && j==0){
		return mat[i][j];
	}
	if(i==0 && j>0){
		return min_cost(mat, i, j-1) + mat[i][j];
	}
	if(j==0 && i>0){
		return min_cost(mat, i-1, j) + mat[i][j];
	}
	int op1 = min_cost(mat, i-1, j);
	int op2 = min_cost(mat, i, j-1);
	return min(op1, op2) + mat[i][j];
}

int min_cost_bottomup(int mat[4][4], int i, int j){
	int dp[4][4]={0};
	for (int x = 0; x <= i; x++)
	{
		for (int y = 0; y <= j; y++)
		{
			if(x==0 && y==0){
				dp[x][y]=mat[x][y];
			}
			else if(x==0 && y>0){
				dp[x][y] = mat[x][y] + dp[x][y-1];
			}
			else if(y==0 && x>0){
				dp[x][y] = mat[x][y] + dp[x-1][y];
			}
			else{
				dp[x][y] = min(dp[x-1][y], dp[x][y-1]) + mat[x][y]; 
			}
			/* code */
		}
		/* code */
	}
	for (int x = 0; x <= i; x++)
	{
		for (int y = 0; y <= j; y++)
		{
			cout<<dp[x][y]<<" ";
			/* code */
		}
		cout<<"\n";
		/* code */
	}
	return dp[i][j];

}
int main(int argc, char const *argv[])
{
	int x;
	int y;
	int mat2[4][4] = {{1, 2, 5, 1}, {8, 3, 6, 2}, {0, 1, 3, 3}, {4, 1, 7, 2}};
	int mat[100][100]={0};
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{

			mat[i][j] = (i+1)*(j+1);
			cout<<mat[i][j]<<" ";
			/* code */
		}
		cout<<"\n";
		/* code */
	}
	cin>>x>>y;
	cout<<min_cost(mat2, x, y)<<"\n";
	cout<<min_cost_bottomup(mat2, x, y)<<"\n";

	return 0;
}