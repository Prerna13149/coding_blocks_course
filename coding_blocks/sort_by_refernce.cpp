#include<iostream>
using namespace std;
void selectionSort(int arr[], int N){
	int i=0;
	int min;
	while(i<N){
		min = i;
		for (int j = i+1; j <= (N-1); j++)
		{
			if(arr[j]<arr[min]){
				min = j;
			}
			/* code */
		}
		swap(arr[i], arr[min]);
		i++;
	}

}

void bubbleSort(int arr[], int N){
	int i=0;
	int min;
	while(i<N){
		for (int j = 0; j < (N-1); j++)
		{
			if(arr[j]>arr[j+1]){
				swap(arr[j], arr[j+1]);
			}
			/* code */
		}
		//swap(arr[i], arr[min]);
		i++;
	}

}
void printArray(int arr[], int N){
	for (int i = 0; i < N; i++)
	{
		cout<<arr[i]<<" ";
		/* code */
	}
}
int main(int argc, char const *argv[])
{
	int N;
	cin>>N;
	int arr[1000000];
	for (int i = 0; i < N; i++)
	{
		cin>>arr[i];
		/* code */
	}
	//bubbleSort(arr, N);
	selectionSort(arr, N);
	printArray(arr, N);
	return 0;
}