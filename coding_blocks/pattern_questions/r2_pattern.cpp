/*
R2 -- PATTERN
Take as input N, a number. Print the pattern like this.

for N = 5

5

3

1

2

4


Input Format:
Number

Constraints:
1 <= N <= 100

Output Format:
Pattern

Sample Input:
10
Sample Output:
9

7

5

3

1

2

4

6

8

10

*/
#include<iostream>
using namespace std;
int main() {
    int N;
    cin>>N;
    int j = N;
    while(j >= 1){
        if(j%2 != 0){
            cout<<j<<"\n";
        }
        j--;
    }
    j = j + 1;
    while(j <= N){
        if(j%2 == 0){
            cout<<j<<"\n";
        }
        j++;
    }
	return 0;
}