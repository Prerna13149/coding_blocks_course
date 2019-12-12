#include<iostream>
using namespace std;
void merge(int a[], int x[], int y[], int s, int e){
	int i = s;//starting of x
	int mid = (s+e)/2;
	int j=mid+1;//starting of y
	int k = s;//start of a[] is same as start of x[]
	while(i<=mid && j<=e){
		if(x[i]<y[j]){
			a[k]=x[i];
			k++;
			i++;
		}
		else{
			a[k] = y[j];
			k++;
			j++;
		}
	}
	while(i<=mid){
		a[k] = x[i];
		i++;
		k++;
	}
	while(j<=e){
		a[k] = y[j];
		k++;
		j++;
	}
}

void mergeSort(int a[], int s, int end){
	if(s >= end){
		return;
	}
	int mid = (s + end)/2;
	int x[1000];
	int y[1000];
	for (int i = s; i <= mid; i++)//storing for merging
	{
		x[i] = a[i];
		/* code */
	}
	for (int i = mid+1; i <= end ; i++)
	{
		/* code */
		y[i] = a[i];
	}
	mergeSort(x, s, mid);
	mergeSort(y, mid+1, end);
	//comes here after one element left
	merge(a, x, y, s, end);//merge x and y and store it back in a[]

}
int main(int argc, char const *argv[])
{
	int arr[1000000];
	int n;
	cin>>n;
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
	}return 0;
}