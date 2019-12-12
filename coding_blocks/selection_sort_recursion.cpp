#include<iostream>
using namespace std;


void printArray(int arr[], int n, int i){
	if(i==n){
		return;
	}
	cout<<arr[i]<<" ";
	printArray(arr, n, i+1);
}

void selectionSort(int arr[], int n, int i, int j, int min){
	if(i>=(n-1)){
		return;
	}
	if(j>(n-1)){
		swap(arr[min], arr[i]);
		i++;
		j=i+1;
		min = i;
		selectionSort(arr, n, i, j, min);
		return;
	}
	if(arr[min]>arr[j]){
		min = j;
	}
	selectionSort(arr, n, i, j+1, min);
	return;

}
int main(int argc, char const *argv[])
{
	int n;
	int arr[100];
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
		/* code */
	}
	selectionSort(arr, n, 0, 0, -1);
	printArray(arr, n, 0);
	return 0;
}