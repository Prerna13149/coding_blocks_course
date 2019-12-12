#include<iostream>
using namespace std;
bool getInverse(int arr[], int n){
    int new_arr[1000000];
    int i=0;
    while(i<n){
        int temp = arr[i];
        new_arr[temp] = i;
        i++;
    }
    for (int j = 0; j < n; j++)
    {
        cout<<new_arr[j]<<" ";
        /* code */
    }
    return true;
}
bool mirror_inverse(int arr[], int n){
    int new_arr[1000000];
    int i=0;
    while(i<n){
        int temp = arr[i];
        new_arr[temp] = i;
        i++;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<new_arr[i]<<" ";
        /* code */
    }
    // for (int i = 0; i < n; i++)
    // {
    //     if(arr2[i]!=new_arr[i]){
    //         return false;
    //     }
    //     /* code */
    // }
    return true;
}
int main() {
    int N;
    cin>>N;
    int i = 0;
    int arr[1000000];
    int arr2[1000000];
    while(i<N){
        cin>>arr[i];
        i++;
    }
    i=0;
    while(i<N){
        cin>>arr2[i];
        i++;
    }
    cout<<"read inputs";
    bool t = getInverse(arr, N);
    // if(mirror_inverse(arr, arr2, N)){
    //     cout<<"true"<<"\n";
    // }
    // else{
    //     cout<<"false"<<"\n";
    // }
	return 0;
}