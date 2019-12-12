/*
PATTERN TRIANGLE
Take N (number of rows), print the following pattern (for N = 4).

                       1 
                     2 3 2
                   3 4 5 4 3
                 4 5 6 7 6 5 4

Constraints:
0 < N < 10

Sample Input:
4
Sample Output:
                        1
        2   3   2
    3   4   5   4   3
4   5   6   7   6   5   4
Explanation:
Each number is separated from other by a tab.


*/
#include<iostream>
using namespace std;
int main() {
    int N;
    cin>>N;
    int line = 1;
    while(line <= N){
        int sp =1;
        while(sp <= (N-line)){
            cout<<"\t";
            sp++;
        }
        int i = line;
        int ct = 1;
        while(ct <= line){
            cout<<i;
            cout<<"\t";
            ct++;
            i++;
        }
        i = i-1;
        while(i > line){
            i--;
            cout<<i;
            cout<<"\t";
        }
        cout<<"\n";
        line++;
        
    }
	return 0;
}