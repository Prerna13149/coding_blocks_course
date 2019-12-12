/*
MANMOHAN LOVES PATTERNS - I
Given N, help Manmohan to print pattern upto N lines. For eg For N=6 , following pattern will be printed.

1
11
111
1001
11111

100001


Input Format:
Single number N.

Constraints:
N<=1000

Output Format:
Pattern corresponding to N.

Sample Input:
6
Sample Output:
1 
11
111 
1001 
11111
100001
Explanation:
For every odd number row print 1, odd number of times and for every even number row , print first and last character as 1 and rest of middle characters as 0.

Time Limit: 1 sec

*/
#include<iostream>
using namespace std;
int main() {
    int max_line;
    cin>>max_line;
    int ele_per_row;
    int line = 1;
    while(line<=max_line){
        int j;
        if(line%2 == 0){
            j = 1;
            while(j <= line){
                if(j == 1 || j == line){
                    cout<<1;
                }    
                else{
                    cout<<0;
                }
                j++;
            }
            
        }
        else{
            j = 1;
            while(j <= line){
                cout<<1;    
                j++;
            }
        }
        line = line + 1;
        cout<<"\n";
    }
    
    
	return 0;
}