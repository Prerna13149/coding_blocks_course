#include<iostream>
#include<cstring>
using namespace std;

void subsequencesString(char ch[1000], char out[1000], int i, int j, int *count){
    if(ch[i]=='\0'){
        out[j]='\0';
        *count = *count + 1;
        cout<<out<<" ";
        return;
    }
    subsequencesString(ch, out, i+1, j, count);
    int a = ch[i]-'0';
    //cout<<a<<" ";
    out[j] = char (a + 97-1);

    subsequencesString(ch, out, i+1, j+1, count);
     
    return;
}


int main() {
    char ch[1000];
    char out[1000];
    char out2[1000];
    cin>>ch;
    int count=0;
    //subsequences(ch, out, 0, 0);
    subsequencesString(ch, out2, 0, 0, &count);
    cout<<"\n";
    cout<<count<<"\n";
    return 0;
}
