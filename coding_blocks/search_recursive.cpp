#include<iostream>
using namespace std;
int binarySearchLeft(int arr[], int start, int end, int num){
    if(start>end){
        return -1;;
    }
    int mid = (start + end)/2;
    if(arr[mid]==num){
        //cout<<mid<<" ";
        return mid;
    }
    else{
        return binarySearchLeft(arr, start, mid-1, num);    
    }
    //return;
}
int binarySearchRight(int arr[], int start, int end, int num){
    if(start>end){
        return -1;
    }
    int mid = ((start + end)/2) + 1;
    if(arr[mid]==num){
        //cout<<mid<<" ";
        return mid;
    }
    else{
        
        return binarySearchRight(arr, mid+1, end, num);
    }
    //return;
}
int main() {
    int n;
    cin>>n;
    int arr[1000000];
    for (int i = 0; i < n; i++) {
        /* code */
        cin>>arr[i];
    }
    int m;
    cin>>m;
    int i=0;
    int num;
    while(i<m){
        cin>>num;
        //int mid = (n-1)/2;
        cout<<binarySearchLeft(arr, 0, n-1, num)<<" ";
        cout<<binarySearchRight(arr, 0, n-1, num)<<"\n";
        //cout<<"\n";
        i++;
    }
    return 0;
}