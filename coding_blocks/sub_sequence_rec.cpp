#include<iostream>
using namespace std;

void printSubsequence(char ch[], char out[], int i, int j){
	if(ch[i]=='\0'){
		out[j] = '\0';//so that we don't get any garbage values
		cout<<out<<"\n";
		return;
	}
	//include a char
	out[j] = ch[i];
	printSubsequence(ch, out, i+1, j+1);
	//exclude a char5
	printSubsequence(ch, out, i+1, j);

}
int main(int argc, char const *argv[])
{
	char ch[1000];
	cin.getline(ch, 1000);
	char out[1000];
	printSubsequence(ch, out, 0, 0);
	return 0;
}