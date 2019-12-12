/*
PATTERN INVERTEDHOURGLASS
Take N as input. For a value of N=5, we wish to draw the following pattern :

             5                   5 
             5 4               4 5 
             5 4 3           3 4 5 
             5 4 3 2       2 3 4 5 
             5 4 3 2 1   1 2 3 4 5 
             5 4 3 2 1 0 1 2 3 4 5 
             5 4 3 2 1   1 2 3 4 5 
             5 4 3 2       2 3 4 5 
             5 4 3           3 4 5 
             5 4               4 5 
             5                   5 

Input Format:
Take N as input.

Output Format:
Pattern should be printed with a space between every two values.

Sample Input:
5
Sample Output:
5                   5 
5 4               4 5 
5 4 3           3 4 5 
5 4 3 2       2 3 4 5 
5 4 3 2 1   1 2 3 4 5 
5 4 3 2 1 0 1 2 3 4 5 
5 4 3 2 1   1 2 3 4 5 
5 4 3 2       2 3 4 5 
5 4 3           3 4 5 
5 4               4 5 
5                   5 


*/
#include<iostream>
using namespace std;
int main() {
    int N;
    cin>>N;
    int line =1;
    int j;
    int ct;
    int sp;
    while(line<=N){
        j=N;
        ct = 1;
        while(ct<=line){
            cout<<j<<" ";
            j--;
            ct++;
        }
        sp=1;
        while(sp<=(N-line)){
            cout<<"  ";
            sp++;
        }
        cout<<"  ";
        sp=1;
        while(sp<=(N-line)){
            cout<<"  ";
            sp++;
        }
        j=j+1;
        ct=1;
        while(ct<=line){
            cout<<j<<" ";
            ct++;
            j++;
        }
        cout<<"\n";
        line++;
    }
    int i = N;
    while(i>=0){
        cout<<i<<" ";
        i--;
    }
    i=1;
    while(i<=N){
        cout<<i<<" ";
        i++;
    }
    cout<<"\n";
    line=N;
    while(line>0){
        j=N;
        ct = 1;
        while(ct<=line){
            cout<<j<<" ";
            j--;
            ct++;
        }
        sp=1;
        while(sp<=(N-line)){
            cout<<"  ";
            sp++;
        }
        cout<<"  ";
        sp=1;
        while(sp<=(N-line)){
            cout<<"  ";
            sp++;
        }
        j=j+1;
        ct=1;
        while(ct<=line){
            cout<<j<<" ";
            ct++;
            j++;
        }
        cout<<"\n";
        line--;
    }
	return 0;
}