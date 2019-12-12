#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < (n-1); j++) {
            /* code */
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
        /* code */
    }
}
int getCount(int arr[], int n, int temp){
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==temp){
            count++;
        }
        /* code */
    }
    return count;
}
void findUnique(int arr[], int n){
    int i = 0;
    while(i<n)
    {
        int temp = arr[i];
        int count = getCount(arr, n, temp);
        if(count<2){
            cout<<temp<<" ";
        }
        i=i+count;
    }
}
int main() {
    int N;
    cin>>N;
    int arr[1000000];
    for (int i = 0; i < N; i++) {
        /* code */
        cin>>arr[i];
    }
    bubbleSort(arr, N);
    // for (int i = 0; i < N; i++) {
    //     /* code */
    //     cout<<arr[i];
    // }
    findUnique(arr, N);
	return 0;
}