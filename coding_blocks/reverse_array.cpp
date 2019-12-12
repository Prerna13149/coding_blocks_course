#include<iostream>
using namespace std;

void reverseArray(int *arr, int n){
	int i = 0;
	int j = n-1;
	while(i < j){
		swap(*(arr+i), *(arr+j));
		i++;
		j--;
	}
	return;
}
void reverse(int arr[], int n){
	int i = 0;
	int j = n-1;
	while(i < j){
		swap(arr[i], arr[j]);
		i++;
		j--;
	}
	return;
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[1000000];
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
		/* code */
	}
	reverseArray(arr, n);
	for (int i = 0; i < n; i++)
	{
		cout<<arr[i]<<" ";
		/* code */
	}

	return 0;
}