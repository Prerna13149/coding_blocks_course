#include<iostream>
using namespace std;

void spiralPattern(int n){
	int sr = 0;
	int er=n-1;
	int sc = 0;
	int ec = n-1;
	char arr[1000][1000];
	int line=0;
	while(sr<=er && sc<=ec){
		if(line%2==0){
			for (int i = sc; i <=ec ; i++)
			{
				arr[sr][i] = 'X';
				/* code */
			}
			sr++;
			for (int i = sr; i <=er ; i++)
			{
				arr[i][ec] = 'X';
				/* code */
			}
			ec--;
			for (int i = ec; i >=0 ; i--)
			{
				arr[er][i] = 'X';
			/* code */
			}
			er--;
			for (int i = er; i >=0 ; i--)
			{
				arr[i][sc] = 'X';
				/* code */
			}
			sc++;
		}
		else{
			for (int i = sc; i <=ec ; i++)
			{
				arr[sr][i] = '0';
			/* code */
			}
			sr++;
			for (int i = sr; i <=er ; i++)
			{
				arr[i][ec] = '0';
			/* code */
			}
			ec--;
			for (int i = ec; i >=0 ; i--)
			{
				arr[er][i] = '0';
			/* code */
			}
			er--;
			for (int i = er; i >=0 ; i--)
			{
				arr[i][sc] = '0';
			/* code */
			}
			sc++;
		}
		line++;

	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout<<arr[i][j];
			/* code */
		}
		cout<<"\n";
		/* code */
	}
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	spiralPattern(n);
	return 0;
}