#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int r;
	int c;
	cin>>r>>c;
	int i=0;
	int j=0;
	int a[100][100];
	int b[][100]={0};
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			a[i][j] = (i+1)*(j+1);
			/* code */
		}
		//cout<<endl;
		/* code */
	}
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout<<a[i][j]<<" ";
			/* code */
		}
		cout<<endl;
		/* code */
	}
	// cout<<"transpose"<<"\n";
	// for (int i = 0; i < c; i++)
	// {
	// 	for (int j = 0; j < r; j++)
	// 	{
	// 		cout<<a[j][i]<<" ";
	// 		/* code */
	// 	}
	// 	cout<<endl;
	// 	/* code */
	// }
	// cout<<"sum of each column"<<"\n";
	// for (int i = 0; i < c; i++)//fix column
	// {
	// 	int sum=0;
	// 	for (int j = 0; j < r; j++)//iterate over each row
	// 	{
	// 		//cout<<a[j][i]<<" ";
	// 		sum = sum + a[j][i];
	// 		/* code */
	// 	}
	// 	cout<<sum<<endl;
	// 	/* code */
	// }
	// cout<<"search value"<<"\n";
	// int data;
	// cin>>data;
	// for (int i = 0; i < r; i++)
	// {
	// 	for (int j = 0; j < c; j++)
	// 	{
	// 		if(a[i][j]==data){
	// 			cout<<"Found at row: "<<i<<" and column: "<<j<<"\n";
	// 			return 0;
	// 		}
	// 		/* code */
	// 	}
	// 	//cout<<endl;
	// 	/* code */
	// }
	// cout<<"NOt Found"<<"\n";

	// cout<<"Wave print"<<"\n";
	// //int end = 
	// for (int i = 0; i < c; i++)
	// {
	// 	if(i%2==0){
	// 		j=0;
	// 		while( j < r)
	// 		{
	// 			cout<<a[j][i]<<" ";
	// 			j++;
	// 		/* code */
	// 		}
	// 	}
	// 	else{
	// 		j=r-1;
	// 		while( j>=0)
	// 		{
	// 			cout<<a[j][i]<<" ";
	// 			j--;
	// 		/* code */
	// 		}

	// 	}
		

	// 	//cout<<endl;
	// 	/* code */
	// }

	cout<<"spiral"<<"\n";
	int sr = 0;
	int er = r-1;
	int sc = 0;
	int ec = c-1;
	while(sr<=er && sc<=ec){
		for (int i = sc; i <= ec; i++)
		{
			cout<<a[sr][i]<<" ";
			/* code */
		}
		sr++;
		for (int i = sr; i <= er; i++)
		{
			cout<<a[i][ec]<<" ";
			/* code */
		}
		ec--;
		if(sr<=er){
			for (int i = ec; i >=sc ; i--)
			{
				cout<<a[er][i]<<" ";
				/* code */
			}
			er--;
		}
		
		if(sc<=ec){
			for (int i = er; i >= sr; i--)
			{
			cout<<a[i][sc]<<" ";
				/* code */
			}
			sc++;
		}
		
	}

	return 0;
}