/*PATTERN MOUNTAIN

Take N (number of rows), print the following pattern (for N = 4).

                       1           1
                       1 2       2 1  
                       1 2 3   3 2 1
                       1 2 3 4 3 2 1   

Constraints:
0 < N < 10

Sample Input:
4
Sample Output:
1                       1
1   2               2   1
1   2   3       3   2   1
1   2   3   4   3   2   1

Explanation: Each number is separated from other by a tab.

*/

//Solution

#include<iostream>
using namespace std;
int main() {
    int N;
    cin>>N; //Read user input
    int line = 1;
    while(line <= N){ //Number_of_lines = user_input
        int j = 1;
        while(j <= line){ //printing first half of the mountain. Elements/line = line_number; elements in ascending order
            cout<<j;
            cout<<"\t";
            j++;
        }
        int sp = 1;
        while(sp <= ((2*(N-line)) - 1)){ //printing spaces
            cout<<"\t";
            sp++;
        }
        j = line;
        if(line == N){
            j = line - 1;
        }
        while(j > 0){  //printing elements in descending order for second half of the mountain 
            cout<<j;
            cout<<"\t";
            j--;
        }
        cout<<"\n";
        line = line + 1;
    }
	return 0;
}