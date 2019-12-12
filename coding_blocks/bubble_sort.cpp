#include<iostream>
using namespace std;

// int main(int argc, char const *argv[])
// {
// 	int N;
// 	cin>>N;
// 	int arr[1000000];
// 	for (int i = 0; i < N; i++)
// 	{
// 		cin>>arr[i];
// 		/* code */
// 	}

// 	int i=0;
// 	int temp;
// 	while(i<(N-1)){
// 		for (int j = 0; j <= (N-2); j++)//Since, we don't want to compare already sorted elements --so, N-2 should be replaced by N-i-2
// 		{
// 			if(arr[j]>arr[j+1]){
// 				swap(arr[j], arr[j+1]);
// 			}
// 			/* code */
// 		}
// 		for (int k = 0; k < N; k++)
// 		{
// 			cout<<arr[k]<<" ";
// 			/* code */
// 		}
// 		cout<<"\n";
// 		i++;
// 	}
// 	cout<<"Sorted array";
// 	for (int i = 0; i < N; ++i)
// 	{
// 		cout<<arr[i]<<" ";
// 		/* code */
// 	}
// 	cout<<"\n";
// 	return 0;
// }

//Optimised buble sort ----9, 1, 2, 3, 4
int main(int argc, char const *argv[])
{
	int N;
	cin>>N;
	int arr[1000000];
	for (int i = 0; i < N; i++)
	{
		cin>>arr[i];
		/* code */
	}

	int i=0;
	int temp;
	while(i<(N-1)){
		int count =0;
		for (int j = 0; j <= (N-2); j++)//Since, we don't want to compare already sorted elements --so, N-2 should be replaced by N-i-2
		{
			if(arr[j]>arr[j+1]){
				swap(arr[j], arr[j+1]);
				count++;
			}
			/* code */
		}
		if(count==0){
			break ;//the array is already sorted
		}
		for (int k = 0; k < N; k++)
		{
			cout<<arr[k]<<" ";
			/* code */
		}
		cout<<"\n";
		i++;
	}
	cout<<"Sorted array";
	for (int i = 0; i < N; ++i)
	{
		cout<<arr[i]<<" ";
		/* code */
	}
	cout<<"\n";
	return 0;
}