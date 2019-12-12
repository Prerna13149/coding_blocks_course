#include <iostream>
using namespace std;
int power(int n, int p){
    if(p==0){
        return 1;
    }
    // if(n==1){
    //     return 
    // }
    int ans;
    if(p%2==0){
        ans = power(n*n, p/2);
    }
    else{
        ans = n*power(n, p-1);
    }
    return ans;
}
int main() {
    int n;
    int p;
    cin>>n>>p;
    int res;
    // if(n%2==0){
    //     res = power(n, p);
    // }
    // else{
    //     res = power(n, p);
    // }
    res = power(n, p);
    cout<<res<<"\n";
    
}
