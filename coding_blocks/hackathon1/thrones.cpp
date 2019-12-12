#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int binarySearch(int arr[], int start, int e, int data){
    int st = start;
    int end = e;
    int mid;// = (st+end)/2;
    while(st<=end){
        
        mid = (st+end)/2;
        //int a = ch[mid] -'a' + 1;
        if(arr[mid] == data){
            return mid;
        }
        else if(arr[mid] > data){
            end = mid -1;
        }
        else{
            st = mid + 1;
        }
    }
    return -1;
}
void checkSum(int arr[], int data, int n){
    //cout<<"I am here"<<"\n";
    for(int i=0;i<n;i++){
        //int a  = ch[i] - 'a' + 1;
        if(data == arr[i]){
            cout<<"YES"<<"\n";
            return;
        }
        int num = data - arr[i];
        int res = binarySearch(arr, 0, n-1, num);
        //cout<<"num"<<num<<" "<<res<<"\n";
        if(res>-1 && res!=i){
            cout<<"YES"<<"\n";
            return;
        }
    }
    cout<<"NO"<<"\n";
    return;
}
void checkSum_old(char ch[], int data, int n){
    //cout<<"I am here"<<"\n";
    for(int i=0;i<n;i++){
        int a  = ch[i] - 'a' + 1;
        if(data == a){
            cout<<"YES"<<"\n";
            return;
        }
        int num = data - a;
        int res = binarySearch(ch, 0, n-1, num);
        //cout<<"num"<<num<<" "<<res<<"\n";
        if(res>-1 && res!=i){
            cout<<"YES"<<"\n";
            return;
        }
    }
    cout<<"NO"<<"\n";
    return;
}
int main() {
    char ch[100000];
    cin.getline(ch, 100000);
    int len = strlen(ch);
    sort(ch, ch+len);
    //cout<<ch<<"\n";
    int arr[100000];

    int n;
    cin>>n;
    //cout<<n;
    for(int i=0;i<len;i++){
        arr[i] = int(ch[i]) - 'a' + 1;
        //cout<<arr[i]<<" ";
    }
    int num;
    int i=0;
    while(i<n){
       cin>>num;
        //cout<<num<<"\n";
        checkSum(arr, num, len);
        i++;
    }
}
