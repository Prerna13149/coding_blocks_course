#include<iostream>
#include<climits>

using namespace std;
void getMaxColSum(int a[][1000], int r, int c){
	int sum_max = INT_MIN;
	for (int i = 0; i < c; i++)
	{
		int sum = 0;
		for (int j = 0; j < r; j++)
		{
			sum = sum + a[j][i];
			/* code */
		}
		//cout<<sum<<" ";
		if(sum>sum_max){
			sum_max = sum;
		}
		/* code */
	}
	cout<<sum_max<<"\n";
}

void getMaxRowSum(int a[][1000], int r, int c){
	int sum_max = INT_MIN;
	for (int i = 0; i < r; i++)
	{
		int sum = 0;
		for (int j = 0; j < c; j++)
		{
			sum = sum + a[i][j];
			/* code */
		}
		//cout<<sum<<" ";
		if(sum>sum_max){
			sum_max = sum;
		}
		/* code */
	}
	cout<<sum_max<<"\n";
}


int main(int argc, char const *argv[])
{
	int r;
	int c;
	cin>>r>>c;
	int a[1000][1000];
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin>>a[i][j];
			/* code */
		}
		/* code */
	}
	getMaxColSum(a, r, c);
	getMaxRowSum(a, r, c);
	return 0;
}