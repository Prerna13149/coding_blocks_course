/*
MIRROR STAR PATTERN (PATTERN 5)

Take N (number of rows - only odd numbers allowed), print the following pattern (for N = 5).

      *
   *  *  *  
*  *  *  *  *  
   *  *  *
      *

Constraints:
0 < N < 10 (only odd numbers allowed)

Sample Input:
5
Sample Output:
      *
    * * *
  * * * * *
    * * *
      *
Explanation:
Each '*' is separated from other by a tab.

*/

#include<iostream>
using namespace std;
int main() {
    int max_line;
    cin>>max_line;
    int line = 1;
    int n1 = (max_line + 1)/2;
    int space_temp;
    int star_temp;
    int sp;
    while(line <= max_line){
        
        if(line <= n1){
            space_temp = n1 - line;
            star_temp = (2*line) - 1;
        }
        else{
            space_temp = line - n1;
            star_temp = 2*(max_line - line + 1) - 1;
        }
        sp = 1;
        int j = 1;
        while(sp <= space_temp){
            cout<<"\t";
            sp++;
        }
        while(j <= star_temp){
            cout<<"*";
            cout<<"\t";
            j++;
        }
        cout<<"\n";
        line = line + 1;
    }
	return 0;
}