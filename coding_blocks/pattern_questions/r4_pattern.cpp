/*
R4 -- PATTERN
Take as input N, a number. Print the pattern according to given input and output section.


Input Format:
Integer

Constraints:
1 <= N <= 100;

Output Format:
Pattern

Sample Input:
3
Sample Output:
*

**

***

*/
#include<iostream>
using namespace std;
int main() {
    int N;
    cin>>N;
    int line = 1;
    while(line <= N){
        int j = 1;
        while(j <= line){
            cout<<"*";
            j++;
        }
        cout<<"\n\n";
        line++;
    }
	return 0;
}