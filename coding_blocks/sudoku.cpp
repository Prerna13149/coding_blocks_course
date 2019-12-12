#include<iostream>
#include<cmath>
using namespace std;
bool isSafeToPut(int mat[9][9], int n, int i, int j, int num){
	for (int k = 0; k < 9; k++)
	{
		if(mat[i][k] || mat[k][j]){
			return false;
		}
		/* code */
	}
	n = sqrt(n);
	s_i = (i/n)*n;
	s_j = (j/n)*n;
	for (int k = s_i; k <(s_i+n); k++)
	{
		for (int l = s_j; l <(s_j+n); l++)
		{
			if(mat[k][l]==num){
				return false;
			}
			/* code */
		}
		/* code */
	}
	return true;


}
bool fillSudoku(int mat[9][9], int n, int i, int j){
	if(i==n){
		for (int k = 0; k < n; k++)
		{
			for (int l = 0; l <n ; l++)
			{
				cout<<mat[k][l]<<" ";
				/* code */
			}
			cout<<"\n";
			/* code */
		}
		return true;
	}
	if(j==n){
		fillSudoku(mat, n, i+1, 0);
	}
	for (int k = 1; k < 9; k++)
	{
		if(isSafeToPut(mat, n, i, j, num)){
			mat[i][j] = k;
			bool kyaAgeRakhtSakte = fillSudoku(mat, n, i, j+1);
			if(kyaAgeRakhtSakte){
				return true;
			}
		}
		/* code */
	}
	mat[i][j] = 0;
	return false;
}


int main(int argc, char const *argv[])
{
	int mat[9][9]={{5,3,0,0,7,0,0,0,0}, {6,0,0,1,9,5,0,0,0}, {0,9,8,0,0,0,0,6,0}, 
	{8,0,0,0,6,0,0,0,3}, {4,0,0,8,0,3,0,0,1}, {7,0,0,0,2,0,0,0,6}, {0,6,0,0,0,0,2,8,0},{}};
	fillSudoku(mat, n, i, j);
	return 0;
}