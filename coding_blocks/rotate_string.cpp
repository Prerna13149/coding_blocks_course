#include<iostream>
using namespace std;

int getLength(char ch[]){
	int i=0;
	while(ch[i]!='\0'){
		i++;
	}
	return i;
}
void copy(char ch[], int len, int n){
	int i=0;
	while(i<n){
		ch[i] = ch[len+i];
		i++;
	}
	ch[len] = '\0';
	cout<<ch<<"\n";
}
void rotate(char ch[], int len, int n){
	int j = len-1;
	int k = j + n;
	while(j>=0){
		ch[k] = ch[j];
		j--;
		k--;
	}
	//cout<<ch<<"\n";
	copy(ch, len, n);
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	cin.get();
	char ch[1000];
	cin.getline(ch, 1000);
	int len = getLength(ch);
	rotate(ch, len, n);
	return 0;
}