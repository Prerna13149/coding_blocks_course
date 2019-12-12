#include<iostream>
using namespace std;

void mySort(int arr[],int arr2[], int n, int m){
	int k = m+n-1;
	int i = n-1;
	int j = m-1;
	while(i>=0 && j>=0){
		if(arr[i]<arr2[j]){
			arr[k] = arr2[j];
			k--;
			j--;
		}
		else if(arr2[j]<arr[i]){
			arr[k] = arr[i];
			i--;
			k--;
		}
		else{
			arr[k] = arr[i];
			arr[k-1] = arr[i];
			i--;
			j--;
			k=k-2;
		}
	}
	// while(i>=0){
	// 	arr[k] = arr[i];
	// 	k--;
	// 	i--;
	// }
	while(j>=0){
		arr[k] = arr2[j];
		k--;
		j--;
	}

}
int main(int argc, char const *argv[])
{
	int N;
	cin>>N;
	int N2;
	cin>>N2;
	int arr[1000000];
	for (int i = 0; i < N; i++)
	{
		cin>>arr[i];
		/* code */
	}
	int arr2[1000000];
	for (int i = 0; i < N2; i++)
	{
		cin>>arr2[i];
		/* code */
	}
	mySort(arr, arr2, N, N2);
	for (int i = 0; i < (N+N2); i++)
	{
		cout<<arr[i]<<" ";
		/* code */
	}
	cout<<"\n";
	return 0;
}