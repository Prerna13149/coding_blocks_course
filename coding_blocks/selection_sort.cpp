#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int N;
	cin>>N;
	int arr[1000000];
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
	int i=0;
	int j;
	int min;
	int temp;
	while(i<(N-1)){//Last element will automatically be sorted
		min = i;
		for(j=i+1;j<(N);j++){
			if(arr[j]<arr[min]){
				min = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
		i++;
	}
	cout<<"Sorted array"<<"\n";
	for(int i=0;i<N;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}