/*
Printing spiral pattern

Input - 7
Output : 

0000000
0XXXXX0
0X000X0
0X0X0X0
0X000X0
0XXXXX0
0000000

*/
#include<iostream>
using namespace std;
void printSpiral(int n){
	int line = 1;
	int n1 = (n+1)/2;
	int sr=0;
	int sc=0;
	int er  = n-1;
	int ec = n-1;
	char arr[1000][1000];
	while(line <= n1){
		if(line%2 == 0){
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
			if(sr<=er){
				for (int i = ec; i >=sc ; i--)
				{
					arr[er][i] = 'X';
			/* code */
				}
				er--;
			}
			if(sc<=ec){
				for (int i = er; i >=sr ; i--)
				{
					arr[i][sc] = 'X';
				/* code */
				}
				sc++;
			}
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
			if(sr<=er){
				for (int i = ec; i >=sc ; i--)
				{
					arr[er][i] = '0';
			/* code */
				}
				er--;
			}
			if(sc<=ec){
				for (int i = er; i >=sr ; i--)
				{
					arr[i][sc] = '0';
			/* code */
				}
				sc++;
			}
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
	printSpiral(n);
	return 0;
}