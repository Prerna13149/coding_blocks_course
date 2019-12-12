#include<iostream>
using namespace std;
void printArray(int *arr, int n){
	if(n==0){
		return;
	}
	cout<<arr[0]<<" ";
	printArray(arr+1, n-1);
	return;
}
void printArrayReverse(int *arr, int n){//reverse of an array
	if(n==0){
		//cout<<arr[0]<<" ";
		return;
	}
	cout<<arr[n-1]<<" ";
	printArrayReverse(arr, n-1);
	return;
}

void printArray2(int arr[], int i, int n){
	if(i==n){
		return;
	}
	cout<<arr[i]<<" ";
	printArray2(arr, i+1, n);
	return;
}
int sum(int *a, int n){
	if(n==0){
		return 0;
	}
	else{
		int s = a[0] + sum(a+1, n-1);
		return s;
	}
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[1000000];
	int i=0;
	while(i<n){
		cin>>arr[i];
		i++;
	}
	//printArray2(arr, 0, n);
	int res = sum(arr, n);
	cout<<res<<"\n";
	printArrayReverse(arr, n);
	return 0;
}