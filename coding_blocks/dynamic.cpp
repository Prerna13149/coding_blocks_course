#include<iostream>
using namespace std;

int* arrayAdd(){
	int *a = new int[5];
	a[0] = 5;
	return a;
}

int main(int argc, char const *argv[])
{
	int *a = new int;//memory allocated in heap
	*a = 10;
	cout<<*a<<"\n";


	int n;
	cin>>n;
	int *b = new int[n];//memory in heap for array - accesses RAM
	*(b+5)=20;
	cout<<b[5]<<"\n";
	delete []b;//deleting the dynammic memory b
	delete a;
	b = NULL;//assigning the pointers to NULL
	//cout<<b[0]<<"\n";//will give seg fault. If pointer points to NULL, you cannot access it's data
	// int *c = arrayAdd();
	// cout<<c[0]<<"\n";

	//2D array
	cout<<"2D array"<<"\n";
	int r;
	int c;
	cin>>r>>c;
	int **arr = new int*[r];
	for (int k = 0; k <=r ; k++)
	{
		arr[k] = new int[c];
		/* code */
	}

	for (int i = 0; i <= r; i++)
	{
		for (int j = 0; j <= c; j++)
		{
			arr[i][j] = i*j;
			/* code */
		}
		/* code */
	}
	for (int i = 0; i <= r; i++)
	{
		for (int j = 0; j <= c; j++)
		{
			cout<<arr[i][j]<<" ";
			/* code */
		}
		cout<<"\n";
		/* code */
	}
	for (int k = 0; k <=r ; k++)
	{
		delete []arr[k];
		/* code */
	}
	delete []arr;
	arr = NULL;
	return 0;
}