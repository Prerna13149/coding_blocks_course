#include<iostream>
using namespace std;
void bubblesort(int arr[], int n){
    int i = 0;
    while(i<n){
        for (int j = 0; j < n-i-1; j++) {
            /* code */
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
        i++;
    }
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<"\n";
        /* code */
    }
    
}
int main() {
    int N;
    cin>>N;
    int arr[1000000];
    for (int i = 0; i < N; i++) {
        cin>>arr[i];
        /* code */
    }
    bubblesort(arr, N);
	return 0;
}