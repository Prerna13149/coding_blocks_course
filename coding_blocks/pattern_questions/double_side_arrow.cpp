/*
PATTERN DOUBLESIDEDARROW
Take N as input. For a value of N=7, we wish to draw the following pattern :

                            1 
                        2 1   1 2 
                    3 2 1       1 2 3 
                4 3 2 1           1 2 3 4 
                    3 2 1       1 2 3 
                        2 1   1 2 
                            1 

Input Format:
Take N as input.

Constraints:
N is odd number.

Output Format:
Pattern should be printed with a space between every two values.

Sample Input:
7
Sample Output:
            1 
        2 1   1 2 
    3 2 1       1 2 3 
4 3 2 1           1 2 3 4 
    3 2 1       1 2 3 
        2 1   1 2 
            1 
Explanation:
Catch the pattern and print it accordingly.


*/
#include<iostream>
using namespace std;
int main() {
    int N;
    cin>>N;
    int line=1;
    int ct=1;
    int sp=1;
    int ele;
    int n1 = (N+1)/2;
    while(line<=n1){
        sp=1;
        while(sp<=(N-(2*line-1))){
            cout<<"  ";
            sp++;
        }
        ele = line;
        ct = 1;
        while(ct<=line){
            cout<<ele;
            cout<<" ";
            ele--;
            ct++;
        }
        sp = 1;
        while(sp<(line-1)){
            cout<<"  ";
            sp++;
        }
        if(line!=1){
            cout<<"  ";   
        }
        sp=1;
        while(sp<(line-1)){
            cout<<"  ";
            sp++;
        }
        ele=1;
        ct = 1;
        while(ct<=line & line!=1){
            cout<<ele;
            cout<<" ";
            ele++;
            ct++;
        }
        line++;
        cout<<"\n";
    }
    line = n1-1;
        while(line>0){
        sp=1;
        while(sp<=(N-(2*line-1))){
            cout<<"  ";
            sp++;
        }
        ele = line;
        ct = 1;
        while(ct<=line){
            cout<<ele;
            cout<<" ";
            ele--;
            ct++;
        }
        sp = 1;
        while(sp<(line-1)){
            cout<<"  ";
            sp++;
        }
        if(line!=1){
            cout<<"  ";   
        }
        sp=1;
        while(sp<(line-1)){
            cout<<"  ";
            sp++;
        }
        ele=1;
        ct = 1;
        while(ct<=line & line!=1){
            cout<<ele;
            cout<<" ";
            ele++;
            ct++;
        }
        line--;
        cout<<"\n";
    }
	return 0;
}