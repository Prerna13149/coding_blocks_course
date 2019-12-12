/*
Objective 
In this challenge, we're getting started with conditional statements. Check out the Tutorial tab for learning materials and an instructional video!
Task 
Given an integer, , perform the following conditional actions:
If  is odd, print Weird
If  is even and in the inclusive range of  to , print Not Weird
If  is even and in the inclusive range of  to , print Weird
If  is even and greater than , print Not Weird
Complete the stub code provided in your editor to print whether or not  is weird.
Input Format
A single line containing a positive integer, .
Constraints
Output Format
Print Weird if the number is weird; otherwise, print Not Weird.
Sample Input 0
3
Sample Output 0
Weird
Sample Input 1
24
Sample Output 1
Not Weird
Explanation
Sample Case 0:  
 is odd and odd numbers are weird, so we print Weird.
Sample Case 1:  
 and  is even, so it isn't weird. Thus, we print Not Weird.
 */

#include <bits/stdc++.h>

using namespace std;



int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if(N%2!=0){
        cout<<"Weird"<<endl;
    }
    else{
        if(2<=N && N<=5){
            cout<<"Not Weird"<<endl;
        }
        else if(6<=N && N<=20){
            cout<<"Weird"<<endl;
        }
        else if(N>20){
            cout<<"Not Weird"<<endl;
        }
        else{

        }
    }

    return 0;
}

