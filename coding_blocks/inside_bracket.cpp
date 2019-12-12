#include<iostream>
using namespace std;
void printBetween(char ch[], int i, int p){
    if(ch[i]=='\0'){
        return;
    }
    if(ch[i]==')'){
        return;
    }
    if(ch[i]=='('){
        p = i+1;
    }
    if(p>=0 && ch[p]!=')'){
        cout<<ch[p];
        printBetween(ch, i+1, p+1);
        
    }
    else{
        printBetween(ch, i+1, p);
    }
    return;

}
int main() {
    char ch[100];
    cin.getline(ch, 100);
    printBetween(ch, 0, -1);
	return 0;
}