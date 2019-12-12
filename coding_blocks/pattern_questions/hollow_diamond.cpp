/*
HOLLOW DIAMOND PATTERN(PATTERN 6)
Take N (number of rows), print the following pattern (for N = 5).

     * * * * *
     * *   * *
     *       *
     * *   * *
     * * * * *

Constraints:
0 < N < 10 (where N is an odd number)

Sample Input:
5
Sample Output:
*   *   *       *      *          
*   *           *      *
*                          *
*   *               *      *
*   *   *       *      *    
Explanation:
Each '*' is separated from other by a tab.

Time Limit: 2 sec
*/

#include<iostream>
using namespace std;
int main() {
    int N;
    cin>>N;
    int line = 1;
    int n1 = (N+1)/2;
    int n2;
    while(line<=n1){
        int ct = 1;
        while(ct<=(n1-line+1)){
            cout<<"*";
             cout<<"\t";
            ct++;
        }
        int sp=1;
        while(sp<=(line-1)){
            cout<<"\t";
            sp++;
        }
        sp=1;
        while(sp<(line-1)){
            cout<<"\t";
            sp++;
        }
        int t=1;
        if(line==1){
            n2 = n1-line;
        }
        else{
            n2 = n1-line+1;
        }
        while(t<=n2){
            cout<<"*";
            cout<<"\t";
            t++;
        }
        
        line++;
        cout<<"\n";
    }
    while(line<=N){
        int ct = 1;
        while(ct<=(line-n1+1)){
            cout<<"*";
            cout<<"\t";
            ct++;
        }
        int sp=1;
        while(sp<=(N-line)){
            cout<<"\t";
            sp++;
        }
        sp=1;
        while(sp<(N-line)){
            cout<<"\t";
            sp++;
        }
        int t=1;
        if(line==N){
            n2 = line-n1;
        }
        else{
            n2 = N-line+1;
        }
        while(t<=n2){
            cout<<"*";
            cout<<"\t";
            t++;
        }
        
        line++;
        cout<<"\n";
    }
	return 0;
}