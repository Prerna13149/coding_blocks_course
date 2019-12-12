#include<iostream>
#include<cstring>
using namespace std;
void printSubstrings(char phone[][9], char in[], char out[], int i, int j){
	if(in[i]=='\0'){
		out[j] = '\0';
		cout<<out<<"\n";
		return;
	}
	int index = in[i] - '0';
	for(int k=0;phone[index][k]!='\0'; k++){
		out[j] = phone[index][k];
		printSubstrings(phone, in, out, i+1, j+1);//j+1 for storing
	}
}

int main(int argc, char const *argv[])
{
	char phone[][9]={"", "ABC", "DEF", "GHI", "JKL", "MNO", "PQR", "RST", "UVW", "XYZ"};
	char in[100];
	cin.getline(in, 100);
	char out[100];
	printSubstrings(phone, in, out, 0, 0);
	return 0;
}