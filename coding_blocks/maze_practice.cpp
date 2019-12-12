#include<iostream>
using namespace std;

bool ratinamaze(char maze[1000][1000], int soln[1000][1000], int i, int j, int m, int n){
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
		return true;
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
	char maze[1000][1000];
	int soln[1000][1000]={0};
	int r,c;
	cin>>r>>c;
	cout<<r<<c;
	cin.get();
	for (int i = 0; i < r; i++) {
	    /* code */
	    for (int j = 0; j < c; j++) {
	        /* code */
	        cin>>maze[i][j];
	    }
	    //cout<<"\n";
	}
	ratinamaze(maze, soln, 0, 0, r, c);
	return 0;
}