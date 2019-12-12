#include<iostream>
using namespace std;
int getLength(char ch[]){
	int i=0;
	while(ch[i]!='\0'){
		i++;
	}
	return i;
}
void appendStrings(char ch1[], char ch2[], int len1, int len2){
	int i = len1;
	int j = 0;
	while(i<(len1+len2)){
		ch1[i] = ch2[j];
		i++;
		j++;
	}
	i = 0;
	while(ch1[i]!='\0'){
		cout<<ch1[i];
		i++;
	}
}
int main(int argc, char const *argv[])
{
	char ch1[1000];
	cin.getline(ch1, 1000);
	char ch2[1000];
	cin.getline(ch2, 1000);
	int len1 = getLength(ch1);
	int len2 = getLength(ch2);
	appendStrings(ch1, ch2, len1, len2);
	return 0;
}