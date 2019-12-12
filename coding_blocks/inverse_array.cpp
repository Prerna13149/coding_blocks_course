#include<iostream>
using namespace std;
void inverseArray(int arr[], int n){
    int  i =0;
    while(i<n){
        int temp = arr[i];
        arr[temp] = i;
        i++;
    }
    cout<<"Inverse of an array"<<"\n";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
        /* code */
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
    inverseArray(arr, N);
	return 0;
}