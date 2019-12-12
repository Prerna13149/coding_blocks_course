#include<iostream>
using namespace std;
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
        if(arr[i]!=new_arr[i]){
            return false;
        }
        /* code */
    }
    return true;
}
int main() {
    int N;
    cin>>N;
    int i = 0;
    int arr[1000000];
    while(i<N){
        cin>>arr[i];
        i++;
    }
    if(mirror_inverse(arr, N)){
        cout<<"true"<<"\n";
    }
    else{
        cout<<"false"<<"\n";
    }
	return 0;
}