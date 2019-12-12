/*
PASCAL TRIANGLE(PATTERN 3)
Take N (number of rows), print the following pattern (for N = 6)
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1


Constraints:
0 < N < 100

Sample Input:
6
Sample Output:
1  
1   1  
1   2   1  
1   3   3   1  
1   4   6   4   1  
1   5   10  10  5   1
Explanation:
Each number is separated from other by a tab.

*/
#include<iostream>
using namespace std;
int fact(int a){
    if(a==0){
        return 1;
    }
    else if(a<=2){
        return a;
    }
    else{
        int temp=1;
        while(a>0){
            temp = temp * a;
            a--;
        }
        return temp;
    }
}
int main() {
    int N;
    cin>>N;
    int line = 1;
    //int p = fact(3);
    //cout<<p;
    while(line<=N){
        int ct = 1;
        while(ct<=line){
            float num = fact(line-1);
            int den1= fact(line-1-ct+1);
            int den2 = fact(ct-1);
            float temp = num/(den1*den2);
            cout<<temp<<"\t";
            ct++;
        }
        cout<<"\n";
        line++;
    }
}