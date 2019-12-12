/*
MANMOHAN LOVES PATTERNS- II
Help Manmohan to print pattern of a given number. See the output pattern for given input n = 5.


Input Format:
Single integer N denoting number of lines of the pattern.

Constraints:
N<=1000

Output Format:
Pattern.

Sample Input:
5

Sample Output:
1
11
202
3003
40004

Explanation:
If row number is n (>1), total character is n. First and last character is n-1 and rest are 0.

*/

#include<iostream>
using namespace std;
int main() {
    int max_line;
    int line=1;
    cin>>max_line;
    while(line <= max_line){
        int j=1;
        while(j<= line && line != 1){
            if(j == 1 || j == line){
                cout<<(line-1);
            }
            else{
                cout<<0;
            }
            j++;
        }
        if(line == 1){
            cout<<1;
        }
        cout<<"\n";
        line = line + 1;
    }
	return 0;
}