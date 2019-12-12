/*
FIBONACCI PATTERN (PATTERN 4)
Take N (number of rows), print the following pattern (for N = 4)
0
1 1
2 3 5
8 13 21 34


Constraints:
0 < N < 100

Sample Input:
4
Sample Output:
0 
1    1 
2    3     5 
8   13    21    34
Explanation:
Each number is separated from other by a tab. For given input n, You need to print n(n+1)/2 fibonacci numbers. Kth row contains , next k fibonacci numbers.

*/

#include<iostream>
using namespace std;
int main() {
    int max_line;
    cin>>max_line;
    int line = 1;
    int a = 0;
    int b = 1;
    int c = 1;
    int j;
    while(line<=max_line){
        j = 1;
        if(line==1){
            cout<<a<<" ";
        }
        else{
            while(j<=line){
                cout<<c<<"\t";
                c = a  + b;
                a = b;
                b = c;
                j = j + 1;
            }   
        }
        line = line + 1;
        cout<<"\n";
    }
	return 0;
}