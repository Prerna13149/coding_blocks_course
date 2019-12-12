#include<iostream>
using namespace std;
int binarySearch(int arr[], int n, int data){
	int s = 0;
	int e = n-1;
	
	while(s <= e){
		int mid = (s + e)/2;
		//cout<<mid<<"\n";
		if(arr[mid] == data){
			cout<<"Found "<<mid<<"\n";
			return mid;
		}
		else if(arr[mid] < data){
			s = mid + 1;
		}
		else{
			e = mid - 1;
		}
	}
	
	cout<<"Not found"<<"\n";
	return -1;
	
}

int main(int argc, char const *argv[])
{
	int N;
	cin>>N;
	int arr[1000000];
	for (int i = 0; i < N; ++i)
	{
		cin>>arr[i];
		/* code */
	}
	int data;
	cin>>data;
	int res = binarySearch(arr, N, data);

	return 0;
}