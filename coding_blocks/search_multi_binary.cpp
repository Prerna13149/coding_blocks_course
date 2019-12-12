#include<iostream>
using namespace std;
void binarySearch(int arr[], int start, int end, int num, int flag, int count, int val){
    if(start>end){
        if(flag==0){
            cout<<-1<<" "<<-1;
        }
        if(count==1){
            cout<<val;
        }
        return;
    }
    int mid = (start + end)/2;
    if(arr[mid]==num){
        cout<<mid<<" ";
        flag = 1;
        count++;
        val=mid;
    }
    if(arr[mid]<num){
        binarySearch(arr, mid+1, end, num, flag, count, val);
        
    }
    else{
        binarySearch(arr, start, mid-1, num, flag, count, val);
    }
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
        binarySearch(arr, 0, n-1, num, 0, 0, -100);
        cout<<"\n";
        i++;
    }
    return 0;
}