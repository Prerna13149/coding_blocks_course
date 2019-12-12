#include<iostream>
using namespace std;
int main() {
    int N;
    cin>>N;
    int N2;
    cin>>N2;
    int arr[1000000];
    for (int k = 0; k < N; k++) {
        /* code */
        cin>>arr[k];
    }
    
    int arr2[1000000];
    for(int k = 0;k < N2;k++){
        cin>>arr2[k];
    }
    int i= N-1;
    int j = N2-1; 
    int res[1000000]={0};
    int carry = 0;
    int t=0;
    // int sum = 0;
    // while(i>=0 && j>=0){
    //     sum = arr[i] + arr2[j] + carry;

    //     res[t] = (sum)%10;
    //     carry = sum/10;
    //     t++;
    //     i--;
    //     j--;
    // }
    //t = t-1;
    // while(j>=0){
    //     sum = arr2[j] + carry;
    //     res[t] = (sum)%10;
    //     carry = sum/10;
    //     //}
    //     j--;
    //     t++;
    // }
    // while(i>=0){
    //     sum = arr[i] + carry;
    //     //cout<<sum<<"\n";
    //     res[t] = (sum)%10;
    //     carry = sum/10;
    //     i--;
    //     t++;
    //     }
    if(carry>0){
        res[t]=carry;
    }
    int k;
    if(N>N2){
        k = N;
    }
    else{
        k = N2;
    }
    for (int i = t-1; i >= 0; i--) {
        /* code */
        cout<<res[i]<<", ";
    }
    cout<<"END";
	return 0;
}