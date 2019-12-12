/*RECURSION-SUBSEQUENCES
Take as input str, a string. We are concerned with all the possible subsequences of str. E.g.

a. Write a recursive function which returns the count of subsequences for a given string. Print the value returned.

b. Write a recursive function which prints all possible subsequences for a “abcd” has following subsequences “”, “d”, “c”, “cd”, “b”, “bd”, “bc”, “bcd”, “a”, “ad”, “ac”, “acd”, “ab”, “abd”, “abc”, “abcd”.given string (void is the return type for function). 
Note: Use cin for input


Input Format:
Enter a string

Constraints:
None

Output Format:
Display the total no. of subsequences and also print all the subsequences in a space separated manner

Sample Input:
abcd
Sample Output:
 d c cd b bd bc bcd a ad ac acd ab abd abc abcd 
16
Time Limit: 4 sec
*/
#include<iostream>
using namespace std;
void subsequences(char ch[1000], char out[1000], int i, int j){
    if(ch[i]=='\0'){
        out[j]='\0';
        cout<<out<<" ";
        return;
    }
    subsequences(ch, out, i+1, j);//do not include the character and print subsequences
    out[j] = ch[i];
    subsequences(ch, out, i+1, j+1);//include the character and print subsequences
    return;
}
int getCount(char ch[1000], char out[1000], int i, int j, int count){
    if(ch[i]=='\0'){
        out[j]='\0';
        //cout<<out<<"\n";
        
        count++;
        return count;
    }
    out[j] = ch[i];
    return getCount(ch, out, i+1, j, count) + getCount(ch, out, i+1, j+1, count);
}
int main() {
    char ch[1000];
    cin.getline(ch, 1000);
    char out[1000];
    subsequences(ch, out, 0, 0);
    cout<<"\n";
    int res = getCount(ch, out, 0, 0, 0);
    cout<<res<<"\n";
	return 0;
}
