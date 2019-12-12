#include<iostream>
using namespace std;

void selectionSort(int *a, int n){
	int i=0;
	int min;
	while(i<n){
		min = i;
		for(int j = i+1;j<n;j++){
			if(*(a+min)>*(a+j)){
				min = j;
			}
		}
		int temp = *(a+i);
		*(a+i) = *(a+min);
		*(a+ min) = temp;
		i++;
	}
	for(int i=0;i<n;i++){
		cout<<*(a+i)<<"\n";
	}
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
	//bubbleSort(arr, N);
	selectionSort(arr, N);
	return 0;
}