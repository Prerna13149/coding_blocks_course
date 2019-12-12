/*
HOLLOW RHOMBUS PATTERN
Given number of rows N, you have to print a Hollow Rhombus. See the output for corresponding given input.


Input Format:
Single integer N.

Constraints:
N <= 20

Output Format:
Print pattern.

Sample Input:
5
Sample Output:
    *****
   *   *
  *   *
 *   *
*****
Explanation:
For any input N. First line contains 4 space and then 5 {*} and then the second line contains according to the output format.

Time Limit: 1 sec


*/
#include<iostream>
using namespace std;
int main() {
    int max_line;
    cin>>max_line;
    int line = 1;
    int sp;
    while(line <= max_line){
        sp = 1;
        while(sp <= (max_line-line)){
            cout<<" ";
            sp = sp + 1;
        }
        int ele = 1;
        while(ele <= max_line){
            if(line == 1 || line == max_line){
                cout<<"*";
            }
            else if(ele == 1||ele == max_line){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            ele++;
        }
        cout<<"\n";
        line = line + 1;
    }
	return 0;
}
