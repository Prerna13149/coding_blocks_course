/*
	Implement binary search using recursion
*/
#include<iostream>
using namespace std;
int binarySearch(int arr[], int st, int e, int data){
	int start = st;
	int end = e;
	int mid;
	int res;
	if(start > end){
		return -1;
	}
	while(start <= end){
		mid = (start + end)/2;
		if(arr[mid] == data){
			//cout<<mid<<"\n";
			return mid;
		}
		else if(arr[mid]>data){
			return binarySearch(arr, start, mid-1, data);
		}
		else{
			return binarySearch(arr, mid+1, end, data);
		}
	}
	//return res;
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
	int data;
	cin>>data;
	int res = binarySearch(arr, 0, n-1, data);
	cout<<res<<"\n";
	return 0;
}