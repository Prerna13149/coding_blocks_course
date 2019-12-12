#include<iostream>
using namespace std;

void merge(int arr[], int x[], int y[], int st, int end){
	int i = st;
	int mid = (st + end)/2;
	int j = mid+1;
	int k = st;
	while(i <= mid && j <= end){
		if(x[i]<y[j]){
			arr[k] = x[i];
			i++;
			k++; 
		}
		else{
			arr[k] = y[j];
			k++;
			j++;
		}
	}
	while(i <= mid){
		arr[k] = x[i];
		i++;
		k++;
	}
	while(j <= end){
		arr[k] = y[j];
		k++;
		j++;
	}
}
void mergeSort(int arr[], int st, int end){
	if(st>=end){
		return;
	}
	int x[1000];
	int y[1000];
	int mid = (st+end)/2;
	for (int i = st; i <= mid; i++)
	{
		x[i] = arr[i];
		/* code */
	}
	for (int i = (mid+1); i <= end; i++)
	{
		y[i] = arr[i];
		/* code */
	}
	mergeSort(x, st, mid);
	mergeSort(y, mid+1, end);
	merge(arr, x, y, st, end);
}

int main(){
	int n;
	cin>>n;
	int arr[1000];
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
		/* code */
	}
	mergeSort(arr, 0, n-1);
	for (int i = 0; i < n; i++)
	{
		cout<<arr[i]<<" ";
		/* code */
	}
	return 0;
}