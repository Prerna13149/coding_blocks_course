#include<iostream>
using namespace std;

int getLength(char ch[]){
	int i=0;
	while(ch[i]!='\0'){
		i++;
	}
	return i;
}

void reverse(char ch[], int len, int n){
	int j = len-1;
	int k = j + n;
	while(j>=0){
		ch[k] = ch[j];
		j--;
		k--;
	}
	ch[len+n]='\0';
	cout<<ch<<"\n";
	int i=0;
	while(i<n){
		ch[i] = ch[len+i];
		i++;
	}
	ch[len] = '\0';//important to put a null character
	cout<<ch<<"\n";

}

int main(int argc, char const *argv[])
{
	char ch[1000];
	int n;
	cin>>n;
	cin.get();//cannot read a string after reading an integer. It takes the enter key as the next character.So, we use cin.get() to ignore this
	cin.getline(ch, 1000);
	int len = getLength(ch);
	
	// cout<<len<<"\n";
	reverse(ch, len, n);
	// //int i=0;
	// cout<<ch<<"\n";

	return 0;
}