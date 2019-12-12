#include<iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int data){
	while(start<=end){
		int mid = (start + end)/2;
		if(arr[mid] == data){
			return 1;
		}
		else if(arr[mid]>data){
			end = mid - 1; 
		}
		else{
			start = mid + 1;
		}
	}
	return 0;
}

int main(int argc, char const *argv[])
{
	int N;
	cin>>N;
	int i=0;
	int arr[1000000];
	while(i<N){
		cin>>arr[i];
		i++;
	}
	int target_sum;
	cin>>target_sum;
	i=0;
	int num;
	while(i<(N-1)){
		num = target_sum - arr[i];
		if(binarySearch(arr, i+1, N-1, num)){
			cout<<arr[i]<<" "<<num<<"\n";
		}
		i++;
	}
	return 0;
}