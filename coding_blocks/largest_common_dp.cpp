#include<iostream>
#include<cstring>
using namespace std;

int bottomup(char ch1[100], char ch2[100], int i, int j){
	int dp[100][100];
	int len1 = strlen(ch1);
	int len2 = strlen(ch1);
	dp[0][0] = 0;
	for (int x = 0; x <=len1 ; x++)
	{
		dp[0][x] = 0;
		/* code */
	}
	for (int x = 0; x <=len2 ; x++)
	{
		dp[x][0] = 0;
		/* code */
	}
	for (int x= 1; x <= len1; x++)
	{
		for (int y = 1; y <= len2; y++)
		{
		// 	if(ch1[x]=='\0' && ch2[y]=='\0'){
		// 		dp[x][y] = 0;
		// //return 0;
		// 		}
			
			if(ch1[x-1]==ch2[y-1]){
				dp[x][y] = 1 + dp[x-1][y-1];
			}
			else{
				dp[x][y] = max(dp[x-1][y], dp[x][y-1]);
			}
			/* code */
		}
		/* code */
	}
	
	return dp[len1][len2];
}

int main(int argc, char const *argv[])
{
	char ch1[100] = "abcde";
	char ch2[100] = "abcfd";
	cout<<bottomup(ch1, ch2, 0,0)<<"\n";
	return 0;
}