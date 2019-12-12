#include<iostream>
using namespace std;
int getLength(char ch[]){
	int i = 0;
	while(ch[i]!='\0'){
		i++;
	}
	return i;
}
void readLine(char ch[], char delimiter='\n'){//also put a check for int max_size
	//char ch2;
	//char ch[1000];
	char ch2 = cin.get();
	int i = 0;
	while(ch2 !=delimiter){
		ch[i] = ch2;
		i++;
		ch2 = cin.get();
	}
	ch[i] = '\0';
	int j = i;
	i = 0;
	while(i<j){
		cout<<ch[i];
		i++;
	}


}
int main(int argc, char const *argv[])
{
	//char ch[100];
	//cin>>ch;
	char ch2[100];
	readLine(ch2, '$');
	//cin.getline(ch2, 1000);
	//int len = getLength(ch2);
	//cout<<len<<"\n";

	return 0;
}