/*
PATTERN HOURGLASS
Take N as input. For a value of N=5, we wish to draw the following pattern :

                          5 4 3 2 1 0 1 2 3 4 5
                            4 3 2 1 0 1 2 3 4 
                              3 2 1 0 1 2 3 
                                2 1 0 1 2 
                                  1 0 1 
                                    0 
                                  1 0 1 
                                2 1 0 1 2 
                              3 2 1 0 1 2 3 
                            4 3 2 1 0 1 2 3 4 
                          5 4 3 2 1 0 1 2 3 4 5

Input Format:
Take N as input.

Output Format:
Pattern should be printed with a space between every two values.

Sample Input:
5
Sample Output:
 5 4 3 2 1 0 1 2 3 4 5
   4 3 2 1 0 1 2 3 4 
     3 2 1 0 1 2 3 
       2 1 0 1 2 
         1 0 1 
           0 
         1 0 1 
       2 1 0 1 2 
     3 2 1 0 1 2 3 
   4 3 2 1 0 1 2 3 4 
 5 4 3 2 1 0 1 2 3 4 5

*/
#include<iostream>
using namespace std;
int main() {
    int N;
    cin>>N;
    int line = 1;
    while(line <= N){
        int j = 1;
        int sp = 1;
        while(sp <= line-1){
            cout<<"  ";
            sp++;
        }
        int max = N -line + 1;
        while(max >= 0){
            cout<<max;
            cout<<" ";
            max--;
        }
        max = 1;
        while(max <= (N-line+1)){
            cout<<max;
            cout<<" ";
            max++;
        }
        cout<<"\n";
        line++;
    }
    int sp = 1;
    while(sp <= (N)){
            cout<<"  ";
            sp++;
        }
    cout<<0<<"\n";
    line = 1;
    while(line <= N){
        int max = line;
        sp = 1;
        while(sp <= (N-line)){
            cout<<"  ";
            sp++;
        }
        while(max >= 0){
            cout<<max;
            cout<<" ";
            max--;
        }
        max = 1;
        while(max <= (line)){
            cout<<max;
            cout<<" ";
            max++;
        }
        cout<<"\n";
        line++;
    }
	return 0;
}