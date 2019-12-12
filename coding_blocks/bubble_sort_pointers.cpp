#include<iostream>
using namespace std;
void bubbleSort(int *a, int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<(n-i-1);j++){
			if(*(a+j+1)<*(a+j)){
				int temp = *(a+j);
				*(a+j) = *(a+j+1);
				*(a+j+1) = temp;
			}
		}
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
	bubbleSort(arr, N);
	//selectionSort(arr, N);
	return 0;
}