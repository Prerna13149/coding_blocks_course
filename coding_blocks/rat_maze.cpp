/*
RAT IN A MAZE
You are given an N*M grid. Each cell (i,j) in the grid is either blocked, or empty. The rat can move from position (i,j), down or right on the grid.
Initially rat is on the position (1,1). It wants to reach position (N,M). Find the rightmost path through which, rat can reach this position. A path is rightmost, if the rat is at position (i,j), it will always move to (i,j+1), if there exists a path from (i,j+1) to (N,M).


Input Format:
First line contains 2 integers, N and M, denoting the rows and columns in the grid. Next N line contains. M characters each. An 'X' in position (i,j) denotes that the cell is blocked and ans 'O' denotes that the cell is empty.

Constraints:
1<=N,M<=1000
GRID(i,j)='X' or 'O'

Output Format:
If a solution exists: Print N lines, containing M integers each. A 1 at a position (i,j) denotes that the (i,j)th cell is covered in the path and a 0 denotes that the cell is not covered in the path.
If solution doesn't exist, just print "-1".

Sample Input:
5 4
OXOO
OOOX
OOXO
XOOO
XXOO
Sample Output:
1 0 0 0 
1 1 0 0 
0 1 0 0 
0 1 1 1 
0 0 0 1 
*/

#include<iostream>
using namespace std;

bool ratinamaze(char maze[10][10], int soln[10][10], int i, int j, int m, int n){
	if(i==(m-1) && j==(n-1)){
		soln[i][j] = 1;
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout<<soln[i][j]<<" ";
				/* code */
			}
			cout<<"\n";
			/* code */
		}
		cout<<"\n";
		return false;
	}
	soln[i][j] = 1;//standing on that matrix;

	if(j+1<m && maze[i][j+1]!='X'){
		bool kyaRightJaSaktiHoon = ratinamaze(maze, soln, i, j+1, m, n );
		if(kyaRightJaSaktiHoon){
			return true;
		}
	}
	if(i+1<n && maze[i+1][j]!='X'){
		bool kyaNeecheJaSaktiHoon = ratinamaze(maze, soln, i+1, j, m, n);
		if(kyaNeecheJaSaktiHoon){
			return true;
		}
	}
	
	soln[i][j] = 0;
	return false;
}

int main(int argc, char const *argv[])
{
	char maze[10][10] = {"0000", "00XX", "0000", "XX00"};
	int soln[10][10]={0};
	ratinamaze(maze, soln, 0, 0, 4, 4);
	return 0;
}