#include <iostream>

using namespace std;

int getSum(long long int arr[], int start, int end){
    if(start > end){
        return 0;
    }
    if(start==end){
        return arr[start];
    }
    else{
        int sum=0;
        while(start<=end){
            sum = sum + arr[start];
            start++;
        }
        return sum;
    }
}
// Complete the balancedSums function below.
void balancedSums(long long int arr[], int n) {
    int i=0;
    //int n = sizeof(arr)/sizeof(int);
    if(n<=1){
        cout<<"YES"<<"\n";
        return;
    }
    int left = getSum(arr, 0,i-1);
    int right = getSum(arr, i+1, n-1);
    for(i=1;i<n;i++){
        left = left + arr[i-1];
        right = right - arr[i];
        if(left==right){
            cout<<"YES"<<"\n";
            return;
        }
    }
    cout<<"NO"<<"\n";

}

int main()
{
    int test_cases;
    cin>>test_cases;
    int test=0;
    int n;
    
    while(test<test_cases){
        cin>>n;
        long long int arr[1000000];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        balancedSums(arr, n);
        test++;
    }
    

    return 0;
}

