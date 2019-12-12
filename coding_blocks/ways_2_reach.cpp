#include<iostream>
using namespace std;
int way2reach(int i, int j){
	int dp[100][100]={0};
	for(int x=0;x<=i;x++){
		for(int y=0;y<=j;y++){
			if(x==0 && y==0){
				dp[x][y]=1;
			}
			else if(x==0 && y>0){
				dp[x][y] = 1;
			}
			else if(y==0 && x>0){
				dp[x][y] = 1;
			}
			else{
				dp[x][y] = dp[x-1][y] + dp[x][y-1];
			}
		}
	}
	return dp[i][j];
}
int elephant(int i, int j){
	int dp[100][100] = {0};
	for(int x=0;x<=i;x++){
		for(int y=0;y<=j;y++){
			if(x==0 && y==0){
				dp[x][y]=1;
			}
			else if(x==0 && y>0){
				int k = y-1;
				while(k>=0){
					dp[x][y] = dp[x][y] + dp[x][k];
					k--;
				}
				
			}
			else if(y==0 && x>0){
				int k = x-1;
				while(k>=0){
					dp[x][y] = dp[x][y] + dp[k][y];
					k--;
				}
			}
			else{
				int k = y-1;
				while(k>=0){
					dp[x][y] = dp[x][y] + dp[x][k];
					k--;
				}
				k = x-1;
				while(k>=0){
					dp[x][y] = dp[x][y] + dp[k][y];
					k--;
				}

				//dp[x][y] = dp[x-1][y] + dp[x][y-1];
			}
		}
	}
	for(int x=0;x<=i;x++){
		for(int y=0;y<=j;y++){
			cout<<dp[x][y]<<" ";
		}
		cout<<"\n";
	}
	return dp[i][j];

}
int main(){
	int x;
	int y;
	cin>>x>>y;
	cout<<way2reach(x, y)<<"\n";
	cout<<elephant(x, y)<<"\n";
}